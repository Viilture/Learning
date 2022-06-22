// Test2-1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

void aripmetick()
{
	double in1, in2;
	char ariphmetic_operation;
	std::cout << "Введите первое число" << std::endl;
	std::cin >> in1;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> in2;
	std::cout << "Введите знак операции: + - / *" << std::endl;
	std::cin >> ariphmetic_operation;
	switch (ariphmetic_operation)
	{
	case '+': std::cout << in1 + in2;
		break;
	case '-': std::cout << in1 - in2;
		break;
	case '*': std::cout << in1 * in2;
		break;
	case '/': std::cout << in1 / in2;
		break;

	}
}

void The_ball_falls_from_the_tower()
{
	const double g = 9.8;
	double height, U=0;
	int sec = 0;
	std::cout << "Введите высотау башни" << std::endl;
	std::cin >> height;

	while (height >= 0)
	{
		std::cout << "Секунда: " << sec << " Высота: " << height << std::endl;
		sec++;
		U += g;
		height -= U;

	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	//aripmetick();
	The_ball_falls_from_the_tower();
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
