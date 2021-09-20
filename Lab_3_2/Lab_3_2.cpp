// Lab_3_2.cpp
// Козубенко Андрій
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 10

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний параметр 
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 3 && b != 0)
		F = a * x * x - b * x + c;
	if (x > 3 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < 3 && b != 0) && !(x > 3 && b == 0))
		F = x / c;

	cout << endl << "1) F = " << F;

	// спосіб 2: розгалуження в повній формі
	if (x < 3 && b != 0)
		F = a * x * x - b * x + c;
	else
		if (x > 3 && b == 0)
			F = (x - a) / (x - c);
		else
			F = x / c;

	cout << endl << "2) F = " << F;

	cin.get(); // для того, щоб консоль не зникала після виконання обчислень
	return 0;
}
