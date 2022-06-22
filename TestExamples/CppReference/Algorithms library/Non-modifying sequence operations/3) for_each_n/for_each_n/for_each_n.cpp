// for_each_n.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> ns{ 1, 2, 3, 4, 5 };
	for (auto n : ns) std::cout << n << ", ";
	std::cout << '\n';
	std::for_each_n(ns.begin(), 3, [](auto& n) { n *= 2; });
	
	
}
