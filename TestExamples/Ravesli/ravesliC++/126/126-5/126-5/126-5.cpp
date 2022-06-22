// 126-5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>


class A;

class B
{

public:
    void print(A& A);



};

class A
{
private:
    int values1;
    double values2;

public:
    A(int val1, double val2)
    {
        values1 = val1;
        values2 = val2;
    }
    friend void B::print(A &A);
};

void B::print(A& A)
{
    std::cout << "State Values1 = " << A.values1 << std::endl;
    std::cout << "State Values2 = " << A.values2 << std::endl;

}


int main()
{
    A ClassA(324, 7865);

    B ClassB;

    ClassB.print(ClassA);
}
