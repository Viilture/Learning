// 124.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

/*
int generate_id()
{
    static int s_id = 0;
    return ++s_id;
}

int main()
{
    std::cout << generate_id() << std::endl;
    std::cout << generate_id() << std::endl;
    std::cout << generate_id() << std::endl;
}
*/

/*
class Anything
{
public:
    static int value;
};

int Anything::value = 3;

int main()
{

    Anything first;

    Anything second;

    first.value = 4;
    first.value = 77;

    std::cout << first.value << std::endl;
    std::cout << second.value << std::endl;

    return 0;
}*/

/*
class A
{   
public:
    int full1 = 7;

public:
    void Sum(B& B)
    {
        std::cout << B.full2;
    }
};

class B
{
public:
    int full2 = 8;

    friend class A;

public:
    void Sum(A &A)
    {
        std::cout << A.full1;
    }
};

int main()
{   
    B *Bclass = new B();
    A *Aclass = new A();


 
    std::cout << Bclass << '\n';
}*/


class Vector3D
{
private:
	double m_x, m_y, m_z;

public:
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

	friend class Point3D;
};

class Point3D
{
private:
	double m_x, m_y, m_z;

public:
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{

	}

	void print()
	{
		std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
	}

	void moveByVector(const Vector3D& v)
	{
		// Реализуйте эту функцию как дружественную классу Vector3D
	}

	
};

int main()
{
	Point3D p(3.0, 4.0, 5.0);
	Vector3D v(3.0, 3.0, -2.0);

	p.print();
	p.moveByVector(v);
	p.print();

	return 0;
}