#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, S, P;
	cout << "�������  ������� ��������������:"<<endl;
	cin >> a >> b;
	S = a * b;
	P = (a + b) * 2;
	cout << "������� ����� " << S << endl << "�������� ����� " << P << endl;
}