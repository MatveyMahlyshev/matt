#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int a, b, s, a1, b1;
	cout << "������� ��� ����������:" << endl;
	cin >> a >> b;
	cout << "�������� ��������: " << endl
		<< "1.��������" << endl
		<< "2.���������" << endl
		<< "3.���������" << endl
		<< "4.������� ���������" << endl;
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
		cout << "����� ���� �����������" << endl;
		break;
	}


}