#include<iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float x, m,k,c=1,n,A,ss=0,st,AA, nnnn,sss=1,stt;
    int N;
    cout << "������� �1." << endl;
    cout << "������� ���� �� 1 �� ������:" << endl;
    cin >> x;
    for (m = 0.1; m < 1.1;  m += 0.1)
    {
       cout << m << " �� = " <<  x*m <<"." << endl;

    }
    cout << "������� �2." << endl;
    cout << "������� ���������� ������������ N:" << endl;
    cin >> N;
    for (k = 1; k<=N; k++)
    {
        c =c * (1 + 0.1*k);
    }
    cout << c << endl;
    int nnn,cc=1;
    cout << "������� �3." << endl;
    cout << "������� �����:" << endl;
    cin >> n;
    for (int i = 1; cc < n*n-2; )
    {
        i += 2;
        cc += i;
        if (cc!=900)
        { 
            cout << "������������� ����� = "<< cc <<"." << endl;

        }
        else if (cc==900)
        {
            cout << "������� ��������� ����� = " << cc << "." << endl;
        }
       
    }
    cout << "������� �4." << endl;
    cout << "������� ����� A:" << endl;
    cin >> A;
    cout << "������� ����� N:" << endl;
    cin >> nnn;
    for (st=1; st<=nnn;st++ )
    {
        ss =ss+pow(A, st);
      
        
    }
    cout << ss + 1 << endl;
    cout << "������� �5." << endl;
    cout << "������� ����� A:" << endl;
    cin >> AA;
    cout << "������� ����� N:" << endl;
    cin >> nnnn;
    for (stt = 1; stt <= nnnn; stt++)
    {
        sss +=pow(-A, stt);

       
    }
    cout << sss ;



        
   return 0;
}