// Lab_03_3.cpp
// < Гамаюнов Олександр >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 5.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -4)
		y = -1;
	else
		if (-4 <= x && x <= -2)
			y = 1;
		else
			if (-2 < x && x <= 4)
				y = -x - 5;
			else
				if (4 < x && x <= 8 - R)
					y = -R;
				else
					if (8 - R < x && x <= 8 + R)
						y = -R + sqrt(pow(R, 2) - (pow((x - 8), 2)));

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}