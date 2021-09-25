#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "¬ведите два числа:" << endl;
	cin >> a >> b;
	c = a + b;
	cout << "—реднее арфиметическое значение равно " << (double)c / 2 << endl;
}