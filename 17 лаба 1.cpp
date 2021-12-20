#include<iostream>
using namespace std;
int chr, cmd;
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Задание №1." << endl;
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* a = new int(N);
	int  L, K;
	double kol = 0, su = 0;
	

	for (int i = 0; i < N; i++)
	{
		a[i] = i + 1;
		cout << "Элемент с индексом " << i << " = " << a[i] << "." << endl;
	}
	cout << "Введите номера элементов K и L для вычисления среднего арифметического получившегося диапазона." << endl;;
	cout << "K = ";
	cin >> K;
	cout << "L = ";
	cin >> L;
	kol = L - K + 1;
	for (int i = K; i <= L; i++)
	{

		su = su + a[i];
	}
	cout << "Cреднее арифметическое элементов массива с номерами от K до L = " << su / kol << "." << endl;
	cout << "Задание №2." << endl;
	int arr[] = { 1,4,7,10,13,16,19 };
	int nn = sizeof(arr) / sizeof(int);
	int d, i = nn - 1;
	while (i >= 2)
	{
		if ((arr[i] - arr[i - 1]) == (arr[i - 1] - arr[i - 2]))
		{
			d = arr[i] - arr[i - 1];
		}
		else if ((arr[i] - arr[i - 1]) != (arr[i - 1] - arr[i - 2]))
		{
			d = 0;
		}
		i--;
	}
	if (d != 0)
	{
		cout << "Разность прогрессии = " << d << "." << endl;
	}
	else
	{
		cout << 0 << endl;
	}
	cout << "Задание №3." << endl;
	int a1[100];
	int NN;
	cout << "Введите размер массива: ";
	cin >> NN;
	cout << "Введите значения элементов массива по порядку:" << endl;
	for (int j = 0; j < NN; j++)
	{
		cout << "a[" << j << "] = ";
		cin >> a1[j];
	}
	if ((a1[2] > a1[4]) && (a1[2] > a1[6]))
	{
		cout << "Максимальное значение из трёх элементов имеет элемент a[2], который равен " << a1[2] << "." << endl;
	}
	else if ((a1[4] > a1[2]) && (a1[4] > a1[6]))
	{
		cout << "Максимальное значение из трёх элементов имеет элемент a[4], который равен " << a1[4] << "." << endl;
	}
	else if ((a1[6] > a1[2]) && (a1[6] > a1[4]))
	{
		cout << "Максимальное значение из трёх элементов имеет элемент a[6], который равен " << a1[6] << "." << endl;
	}
	cout << "Задание №4." << endl;
	const int nnn = 5;
	int a2[] = { 1,2,3,469,4,228,1488,1337,10 };
	for (int j = 0; j <= nnn; j++)
	{

	}
	int s = a2[1];
	for (int j = 1; j < nnn - 1; j++)
	{
		if (a2[j] > a2[j - 1] && a2[j] > a2[j + 1])
		{
			s = a2[j];
		}
	}

	cout << "Задание №5." << endl;
	const int Nn = 10;
	int a3[] = { 1,23,43,200,44,65,76,87,1,34 };
	for (int g = 0; g <= Nn; g++)
	{
		for (int l = g + 1; l < Nn; l++)
		{
			if (a3[g] == a3[l])
			{
				cout << g + 1 << endl << l + 1 << endl;

			}

		}


	}



	return 0;
}