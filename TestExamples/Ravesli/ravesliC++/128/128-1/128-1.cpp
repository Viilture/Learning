// 128-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>




class Fruit
{

public:

    enum FruitList
    {
        AVOCADO,
        BLACKBERRY,
        LEMON
    };

private:
    FruitList m_type;

public:

    Fruit(FruitList type) : m_type(type)
    {

    }

    FruitList get_type()
    {
        return m_type;
    }
};


int main()
{
    Fruit avocado(Fruit::AVOCADO);

    if (avocado.get_type() == Fruit::AVOCADO)
        std::cout << "I am an avocado";
    else
        std::cout << "I am not an avocado";

    return 0;
}

