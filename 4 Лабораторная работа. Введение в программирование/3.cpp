#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, c;
	cout << "������� ��� �����:" << endl;
	cin >> a >> b;
	c = a + b;
	cout << "������� �������������� �������� ����� " << (double)c / 2 << endl;
}