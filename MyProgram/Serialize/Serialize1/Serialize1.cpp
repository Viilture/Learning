// Serialize1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string data = "asdfasf";

    {
        std::ofstream out("data.ini");
        out.write(data.c_str(), data.size());
    }
    {
        std::ifstream in("data.ini");
        std::string dest(data.size(),' ');
        in.read(dest.data(), dest.size());

    }
}

