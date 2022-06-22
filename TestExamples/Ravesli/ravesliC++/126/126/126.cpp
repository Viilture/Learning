// 126.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


class A
{
private:
    int value;

public:

    void print() { std::cout << value; }

    A() { value = 0; }

        void add(int value2) { value += value2; }

    friend void reset(A& A);

};


void reset(A& A)
{
    A.value = 0;
}

int main()
{
    A one;
    one.add(4);

    reset(one);

    one.print();
    
    return 0;
}

