// tets8-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>



class Point
{
private:
    double m_a;
    double m_b;
public:
    Point(double a1 = 0, double a2 = 0): m_a(a1), m_b(a2)
    {

    }


    void print()
    {
        std::cout << "Point("  << m_a << ", " << m_b << ")" << std::endl;
    }


    double distanceTo(Point& B)
    {
        return std::sqrt(((B.m_a - m_a) * (B.m_a - m_a)) + (B.m_b - m_b) * (B.m_b - m_b) );
    }

    friend double distanceFrom(Point& A, Point& B);
};


double distanceFrom(Point& A,Point& B)
{
    return std::sqrt(((B.m_a - A.m_a) * (B.m_a - A.m_a)) + (B.m_b - A.m_b) * (B.m_b - A.m_b));
}

int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
