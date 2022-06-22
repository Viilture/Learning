// 126-3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class B;

class A
{
private:
    int tempA;

public:
    A(int t1 = 0) { tempA = t1; }

    friend void print2(const A& A1, const B& B1);
};

class B
{
private:
    int tempB;

public:
    B(int t2 = 0) { tempB = t2; }

    friend void print2(const A& A1, const B& B1);
};

void print2(const A& A1, const  B& B1)
{
    std::cout << "Class A - " << A1.tempA << std::endl
        << "Class B - " << B1.tempB;
}

int main()
{
    A A12(15);
    B B12(8);

    print2(A12, B12);

    return 0;
}
