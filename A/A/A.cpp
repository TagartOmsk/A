// A.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "RU");
	std::cout << "какое же тут всё ебанутое" << std::endl;
	system("pause");
    return 0;
}

