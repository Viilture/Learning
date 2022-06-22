// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <Windows.h>

#include <TlHelp32.h>
#include <vector>
#include <iostream>

#ifdef UNICODE
#define tcout std::wcout
#elif
#define tcout std::cout
#endif

class SmartHandle
{
public:
    SmartHandle(HANDLE handle)
    {
        _handle = handle;
    }

    ~SmartHandle()
    {
        if (_handle)
        {
            CloseHandle(_handle);
        }
    }

    operator bool()
    {
        return _handle != NULL;

    }

    operator HANDLE()
    {
        return _handle;

    }


    HANDLE handle()
    {
        return _handle;

    }
private:


    HANDLE _handle = NULL;
};

struct ProcessInfo
{
    PROCESSENTRY32 pe;
    std::vector<THREADENTRY32> threads;

};

int main()
{
    
    SmartHandle processSnap(CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0));
    SmartHandle threadSnap(CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0));
    if (!processSnap || !threadSnap) 
    { 
        return 1; 
    }

    std::vector<ProcessInfo> ProcessInfos;
    std::vector<THREADENTRY32> threads;

    THREADENTRY32 te{ sizeof(PROCESSENTRY32) };

    if (Thread32First(threadSnap, &te) == FALSE)
    {
        return 2;

    }
    do {
      
        threads.push_back(te);
    } while (Thread32Next(threadSnap, &te));


    PROCESSENTRY32 pe{sizeof(PROCESSENTRY32)};

    if (Process32First(processSnap, &pe) == FALSE)
    {
        return 2;

    }
    do {
        std::vector<THREADENTRY32> subthreads;
        for (const auto& thread : threads)
        {
            if (thread.th32OwnerProcessID == pe.th32ProcessID)
            {
                subthreads.push_back(thread);
            }
        }
        ProcessInfos.push_back(ProcessInfo{ pe , subthreads });

    } while (Process32Next(processSnap, &pe));

    for (const auto & processInfo : ProcessInfos)
    {
        tcout << processInfo.pe.szExeFile << std::endl;
        for (const auto& thread : processInfo.threads)
        {
            tcout << "   " << thread.th32ThreadID << std::endl;
        }
    }

    return 0;
}

