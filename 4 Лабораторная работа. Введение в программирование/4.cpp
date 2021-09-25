#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, s, a1, b1;
	cout << "Введите две переменные:" << endl;
	cin >> a >> b;
	cout << "Выберите операцию: " << endl
		<< "1.Сложение" << endl
		<< "2.Вычитание" << endl
		<< "3.Умножение" << endl
		<< "4.Частное квадратов" << endl;
	cin >> s;
	switch (s)
	{
	case 1:
		cout << a + b << endl;
		break;
	case 2:
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		if (b == 0)
		{
			break;
		}
		else
		{
			a1 = a * a;
			b1 = b * b;
			cout << (double)a1 / b1 << endl;
		}
		break;
	default:
		cout << "Пункт меню отсутствует" << endl;
		break;
	}


}