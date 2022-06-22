// 130.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>



class My_Int
{
private:

    int dollars = 0;

public:

    My_Int(int in) : dollars(in)
    {
        
    }

    constexpr int get_dollars() 
    {
        return dollars;
    }

    friend My_Int operator + (const My_Int& d1, const My_Int& d2)
    {
        return My_Int(d1.dollars + d2.dollars);
    }

    friend My_Int operator - (const My_Int& d1, const My_Int& d2)
    {
        return My_Int(d1.dollars - d2.dollars);
    }

    friend My_Int operator * (const My_Int& d1, const My_Int& d2)
    {
        return My_Int(d1.dollars * d2.dollars);
    }

    friend My_Int operator / (const My_Int& d1, const My_Int& d2)
    {
        return My_Int(d1.dollars / d2.dollars);
    }

    friend My_Int operator ++ (const My_Int& d1)
    {
        return My_Int(d1.dollars + 1);
    }

    friend My_Int operator -- (const My_Int& d1)
    {
        return My_Int(d1.dollars - 1);
    }

    friend My_Int operator ^ (My_Int& d1, My_Int d2)
    {
        int out = d1.get_dollars();
        int n = d2.get_dollars() - 1;
        while (n--)
        {
            out *= d1.get_dollars();
        }
        return My_Int(out);
    }
};





int main()
{
    My_Int in1(2);
    My_Int in2(10);
    My_Int in3 = in1 ^ in2;

    std::cout << in3.get_dollars();
}

