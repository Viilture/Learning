// 131.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>
class Fraction
{
private:
    int chisl, znam;
public:
    Fraction(int in1, int in2):chisl(in1), znam(in2)
    {

    }

    int get_chisl()
    {
        return chisl;
    }
    int get_znam()
    {
        return znam;
    }
    void print()
    {
        std::cout << std::to_string(chisl) << "/" << std::to_string(znam) << std::endl;
    }

    friend Fraction operator*(Fraction in1, Fraction in2)
    {
        return Fraction(in1.get_chisl() * in2.get_chisl(), in1.get_znam() * in2.get_znam());
    }
    friend Fraction operator*(Fraction in1, int in2)
    {
        return Fraction(in1.get_chisl() * in2, in1.get_znam() * in2);
    }
    friend Fraction operator*(int in1, Fraction in2)
    {
        return Fraction(in1 * in2.get_chisl(), in1 * in2.get_znam());
    }
};

int main()
{
    Fraction f1(3, 4);
    f1.print();

    Fraction f2(2, 7);
    f2.print();

    Fraction f3 = f1 * f2;
    f3.print();

    Fraction f4 = f1 * 3;
    f4.print();

    Fraction f5 = 3 * f2;
    f5.print();

    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
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
