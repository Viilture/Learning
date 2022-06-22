// all_of any_of none_of.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");

    
    
    /// --------------std::all_of------------------------------------------------------------
    std::cout << "std::all_of" << std::endl;

    std::vector<int> vec1{5,7,12,5,2,789,2,65,2,657,23};

    if (std::all_of(vec1.begin(), vec1.end(), [](int i) {return i % 2 == 0; }))
    {
        std::cout << "std::all_of vec1 - Тут только четные числа" << std::endl ; 
    }
    else std::cout << "std::all_of vec1 - Тут есть нечетные числа" << std::endl;

    std::vector<int> vec2{ 6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6 };

    if (std::all_of(vec2.begin(), vec2.end(), [](int i) {return i % 2 == 0; }))
    {
        std::cout << " std::all_of vec2 - Тут только четные числа" << std::endl;
    }
    else std::cout << "std::all_of vec2 - Тут есть нечетные числа" << std::endl;
    //--------------------------------------------------------------------------------------------

    /// --------------std::any_of------------------------------------------------------------
    std::cout << "std::any_of" << std::endl;

    std::vector<int> vec3{ 5,7,12,5,2,789,2,65,2,657,23 };

    if (std::any_of(vec3.begin(), vec3.end(), [](int i) { return i == 5; }))
    {
        std::cout << "std::any_of vec3 - Тут есть число 5" << std::endl;
    }
    else std::cout << "std::any_of vec3 - Тут нет числа 5" << std::endl;
    //--------------------------------------------------------------------------------------------

    /// --------------std::none_of------------------------------------------------------------
    std::cout << "std::none_of" << std::endl;

    std::vector<int> vec4{ 5,7,12,5,2,789,2,65,2,657,23 };

    if (std::none_of(vec4.begin(), vec4.end(), [](int i) { return i == 5; }))
    {
        std::cout << "std::any_of vec4 - Тут нет числа 5" << std::endl;
    }
    else std::cout << "std::any_of vec4 - Тут есть число 5" << std::endl;

    //--------------------------------------------------------------------------------------------

    
}
