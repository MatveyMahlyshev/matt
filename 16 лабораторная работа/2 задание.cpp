#include<iostream>
using namespace std;
int chr, cmd;
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "\n������� #2" << endl;
	int V,z = 1;
	cout << "������� ����� ����� N, ������� ���������� ���������� ������ ������� ��� ������: ";
	cin >> V;
	int array[1000];
	double A;
	cout << "������� ������ ���� A � ����������� D �������������� ���������� ��������������: ";
	cin >> A;
	array[0] = A;
	double D;
	cin >> D;

	  
	for (int i = 0; i < V; ++i) {
		array[i] = A * z;
		z *= D;
	}
	for (int i = 0; i < V; ++i) {
		cout << array[i] << " ";
	}
	
	return 0;
}