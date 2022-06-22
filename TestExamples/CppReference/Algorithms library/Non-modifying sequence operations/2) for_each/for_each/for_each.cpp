// for_each.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


struct Sum
{
    void operator () (int n) { sum += n; }
    int sum{ 0 };
};


int main()
{

    std::vector<int> vec{ 1,54,234,876,1,543,4,54,67 };

    auto print = [] (const int& n){std::cout << " " << std::to_string(n) << std::endl;};

    std::for_each(vec.begin(), vec.end(), print);

    Sum s = std::for_each(vec.begin(), vec.end(), Sum());

    std::cout << s.sum;

}

