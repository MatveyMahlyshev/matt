#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n, i, N, A,AA,B, j, D,DD,NN,ii,na, s= 1,u ;
	int a[1000];
	int b[1000];
	int c[1000];
	cout << "������� #1" << endl;
	cout << "������� ���������� ������ �������� �����, ������� ����� �������: ";
	cin >> n;
	a[0] = 1;
	if (n > 0)
	{


		for (i = 1; i < 1000; i++)
		{

			a[i] = a[i - 1] + 2;

		}
		for (i = 0; i < n; i++)
		{
			cout << a[i] << ",";
		}

	}
	else if (n <= 0)
	{
		cout << "�� ����� n, ������� �� ������ 0." << endl;
	}


	



	
	cout << "\n������� #3" << endl;
	cout << "������� ������ � ������ �������� ��������������: ";
	cin >> AA >> B;
	cout << "������� ���������� ���������, ������� ����� �������: ";
	cin >> NN;
	c[0] = AA;
	c[1] = B;
	c[2] = AA + B;
	for (int l = 3; l <1000; l++)
	{
		c[l] = c[l - 1] * 2;
	    
	}
	for (int l =0; l < NN; l++)
	{
		cout << c[l] << ",";
	}
	cout << "\n������� #4" << endl;
	int aaaa[1000];
	int zz, iii;

	cout << "n:";
	cin >> zz;

	for (iii = 0; iii < zz; ++iii)
	{
		aaaa[iii] = iii + 1;

	}

	for (iii = 0; iii < zz / 2; ++iii) {
		cout << aaaa[iii] << endl;
		cout << aaaa[zz- iii - 1] << endl;
	}
	if (zz % 2 != 0)
	{
		cout << aaaa[zz / 2] << endl;
	}
	cout << "\n������� #5" << endl;
	int ab[1000];
	int n1, i1;
	cout << "n:";
	cin >> n1;
	for (i1 = 0; i1 < n1; i1++)
	{
		ab[i1] = i1 + 1;
	}
	for (i1 = 0; i1 < n1; i1++)
	{
		if (i1 % 2 != 0)
		{
			cout << ab[i1] << " ";
		}
		else if (i1 % 2 == 0)
		{
			cout << "";
		}

	}
	cout << "\n";
	for (i1 = n1; i1 >= 0; i1--)
	{
		if (i1 % 2 == 0)
		{
			cout << ab[i1] << " ";
		}
		else if (i1 % 2 != 0)
		{
			cout << "";
		}
	}


	return 0;
}