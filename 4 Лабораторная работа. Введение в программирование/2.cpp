#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	double d, L;
	const double PI = 3.14;
	cout << "¬ведите диаметр окружности: " << endl;
	cin >> d;
	L = d * PI;
	cout << "ƒлина оркужности равна " << L;
}