// 126-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>



class B
{
private:
    double value1;

public:
    
    void print() { std::cout << value1; }
    
    B(int value2) { value1 = value2; }

    friend bool isEqual(B& B1, B& B2);
     
};

bool isEqual(B& B1, B& B2)
{
    return (B1.value1 == B2.value1);
}

int main()
{
    B B1(12);
    B B2(12);

   std::cout << isEqual(B1, B2);

}

