// 135-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

class Something
{
private:
    double m_a, m_b, m_c;
public:
    Something(double a = 0.0, double b = 0.0, double c = 0.0) : m_a(a), m_b(b), m_c(c) {}

    Something operator- () const
    {
        return Something(-m_a, -m_b, -m_c);
    }

    bool operator !() const
    {
        return (m_a == 0.0 && m_b == 0.0 && m_c == 0.0);
    }

    template <class T>
    T operator + ()
    {
        return m_a+m_b;
    }

    double getA() { return m_a; }
    double getB() { return m_b; }
    double getC() { return m_c; }
};

int main()
{
    Something som;

    if (!som)
        std::cout << "Something is null.\n";
    else
        std::cout << "Something is not null.\n";



    return 0;
}


