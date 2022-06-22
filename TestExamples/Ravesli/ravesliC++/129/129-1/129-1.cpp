// 129-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

class Timer
{
private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1>>;

    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now())
    {

    }
    //Обнуление таймер
    void reset()
    {
        m_beg = clock_t::now();
    }

    const double elapsed()
    {
        return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
    }
};


void SortVector(std::vector<int>& vec1)
{
    for (int i1=0; i1 < vec1.size()-1;++i1)
    {
        for (int i2 = 0; i2 < vec1.size()-1; ++i2)
        {
            if (vec1[i2] > vec1[i2 + 1])
            {
                std::swap(vec1[i2], vec1[i2 + 1]);
            }

        }
    }

}

int main()
{
    Timer t;

    std::cout << "Start - " << t.elapsed() << std::endl;

    std::vector<int> vec(100);

    for (int i = 0; i < vec.size(); ++i)
    {
        vec[i] = vec.size()-i;
    }
    
    for (auto i : vec)
    {
        std::cout << i << std::endl;
    }

    SortVector(vec);

    for (auto i : vec)
    {
        std::cout << i << std::endl;
    }

    std::cout << "End - " << t.elapsed() << std::endl;

}

