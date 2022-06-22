// 13dzz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>

int long2,Znach;
int main()
{
   // std::cout << "Hello World!\n";

	setlocale(LC_ALL, "ru");
	std::vector<int> VecIn;
	std::cout << "Введите количество чисел для дальнейших операций с ними" << std::endl;

	std::cin >> long2;

	std::cout << "Введите числа по порядку" << std::endl;
	for (int it = 0; it < long2; it++)
	{
		std::cin >> Znach;
		VecIn.push_back(Znach);
	}
	std::cout << "Введите символ операции, которую нужно прозвести с данными числами из списка: +-  1 - - 2 / - 3 * - 4  " << std::endl;

	int Str,out;

	std::cin >> Str;

	out = VecIn[0];
	switch (Str)
	{
	case 1:		for (int it = 0; it < long2-1; it++)
	{
		
		out+=VecIn[it];
	}
		break;

	case 2:
		for (int it = 0; it < long2-1 ; it++)
		out -= VecIn[it];
		break;

	case 3:
		for (int it = 0; it < long2-1 ; it++)
		out /= VecIn[it];
		break;

	case 4:
		for (int it = 0; it < long2-1 ; it++)
		out *= VecIn[it];
		break;

	default:
		break;

	}

	std::cout << "Результат: " << out;

}

