// Vector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Vector2D.h"
#include "Vector3D.h"
#include <iostream>
#include <cstdlib>


int main()
{
	Vector2D v1(3);
	Vector2D * v2 = new Vector2D(v1);
	v2->setX(9);

	std::cout << v1.toString() << std::endl << v1.normalize() << std::endl;
	std::cout << v2->toString() << std::endl << v2->normalize() << std::endl << Vector2D::getNumberOfInstance() << std::endl;

	Vector3D v3(3, 5, 6);
	Vector3D  * v4 = new Vector3D(v3);
	v4->setZ(9);

	delete v2;

	std::cout << v3.toString() << std::endl << v3.normalize() << std::endl;
	std::cout << v4->toString() << std::endl << v4->normalize() << std::endl << Vector2D::getNumberOfInstance() << std::endl;

	delete v4;
	std::cout << Vector2D::getNumberOfInstance() << std::endl;

	system("pause");
    return 0;
}

