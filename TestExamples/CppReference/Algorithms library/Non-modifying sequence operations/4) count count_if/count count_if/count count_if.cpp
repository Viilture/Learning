// count count_if.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
    setlocale(LC_ALL, "Russian");

    std::vector<int> vec{ 5,4,3,1,2,4,5,7,4,3,5,7,5,8,6,4,56,5,5 };

    std::cout << "Количество элементов равных 5 =" << std::count(vec.begin(), vec.end(), 5) << std::endl;

    std::cout << "Количество четных элементов =" << std::count_if(vec.begin(), vec.end(), [](int i) {return i % 2 == 0; }) << std::endl;

}

