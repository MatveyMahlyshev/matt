#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n,nn, des, ed, st,cmd,chr,numd,numm,numdd;
    cout << "������� �1." << endl;
    cout << "������� ����� ���: ";
    cin >> numd;
    cout << "������� ����� ������: ";
    cin >> numm;
    cout << "�� �����:" << endl;
    if (numd < 10)
    {
        switch (numd)
        {
        case 1:
            cout << "������ ";
            break;
        case 2:
            cout << "������ ";
            break;
        case 3:
            cout << "������ ";
            break;
        case 4:
            cout << "�������� ";
            break;
        case 5:
            cout << "����� ";
            break;
        case 6:
            cout << "������ ";
            break;
        case 7:
            cout << "������� ";
            break;
        case 8:
            cout << "������� ";
            break;
        case 9:
            cout << "������� ";
            break;
        default:
            break;
        }
    }
    else if (numd > 9 && numd < 21)
    {
        switch (numd)
        {
        case 10:
            cout << "������� ";
            break;
        case 11:
            cout << "������������ ";
            break;
        case 12:
            cout << "����������� ";
            break;
        case 13:
            cout << "����������� ";
            break;
        case 14:
            cout << "������������� ";
            break;
        case 15:
            cout << "����������� ";
            break;
        case 16:
            cout << "������������ ";
            break;
        case 17:
            cout << "����������� ";
            break;
        case 18:
            cout << "������������� ";
            break;
        case 19:
            cout << "������������� ";
            break;
        case 20:
            cout << "��������� ";
        default:
            break;
        }
    }
    else if (numd > 20 && numd < 30)
    {
        cout << "�������� ";
        numdd = numd % 10;
        switch (numdd)
        {
        case 1:
            cout << "������ ";
            break;
        case 2:
            cout << "������ ";
            break;
        case 3:
            cout << "������ ";
            break;
        case 4:
            cout << "�������� ";
            break;
        case 5:
            cout << "����� ";
            break;
        case 6:
            cout << "������ ";
            break;
        case 7:
            cout << "������� ";
            break;
        case 8:
            cout << "������� ";
            break;
        case 9:
            cout << "������� ";
            break;

        default:
            break;
        }
    }
    else if (numd >= 30)
    {
        switch (numd)
        {
        case 30:
            cout << "��������� ";
            break;
        case 31:
            cout << "�������� ������ ";
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "�� ����� ����� �� �� ���������.";
    }
    switch (numm)
    {
    case 1:
        cout << "������.";
        break;
    case 2:
        cout << "�������.";
        break;
    case 3:
        cout << "�����.";
        break;
    case 4:
        cout << "������.";
        break;
    case 5:
        cout << "���.";
        break;
    case 6:
        cout << "����.";
        break;
    case 7:
        cout << "����.";
        break;
    case 8:
        cout << "�������.";
        break;
    case 9:
        cout << "��������.";
        break;
    case 10:
        cout << "�������.";
        break;
    case 11:
        cout << "������.";
        break;
    case 12:
        cout << "�������.";
        break;
    default:
        break;
    }
        cout << "\n\n\n������� �2" << endl;
        cout << "�������� �����, ������� ������������ �����������:" << endl;
        cout << "1.�� - S." << endl;
        cout << "2.����� - N." << endl;
        cout << "3.����� - W." << endl;
        cout << "4.������ - E." << endl;
        cin >> chr;
        cout << "�������� ������� ��� �������� ������" << endl;
        cout << "0 � ���������� ��������." << endl;
        cout << "1 � ������� ������." << endl;
        cout << "-1 � ������� �������." << endl;
        cin >> cmd;
        switch (chr)
        {
        case 1:

            switch (cmd)
            {
            case 0:
                cout << "����� ����� ���������� �������� �� ��." << endl;
                break;
            case 1:
                cout << "����� ����� ��������� �� ������." << endl;
                break;
            case -1:
                cout << "����� ����� ��������� �� �����." << endl;
                break;
            default:
                break;
            }
            break;
        case 2:
            switch (cmd)
            {
            case 0:
                cout << "����� ����� ���������� �������� �� �����." << endl;
                break;
            case 1:
                cout << "����� ����� ��������� �� �����." << endl;
                break;
            case -1:
                cout << "����� ����� ��������� �� ������." << endl;
                break;
            default:
                break;
            }
            break;
        case 3:
            switch (cmd)
            {
            case 0:
                cout << "����� ����� ���������� �������� �� �����." << endl;
                break;
            case 1:
                cout << "����� ����� ��������� �� ��." << endl;
                break;
            case -1:
                cout << "����� ����� ��������� �� �����." << endl;
                break;
            default:
                break;
            }
            break;
        case 4:
            switch (cmd)
            {
            case 0:
                cout << "����� ����� ���������� �������� �� ������." << endl;
                break;
            case 1:
                cout << "����� ����� ��������� �� �����." << endl;
                break;
            case -1:
                cout << "����� ����� ��������� �� ��." << endl;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
     
    cout << "\n\n������� #3" << endl;
    cout << "������� ����� �� ��������� 10-40:\n";
	cin >> n;
    if (n>9&&n<41)
    {

    
    if (n / 10 == 1)
    {
        switch (n) {
        case 10:
            cout << "������ ������� �������." << endl;
            break;
        case 11:
            cout << "����������� ������� �������." << endl;
            break;
        case 12:
            cout << "���������� ������� �������." << endl;
            break;
        case 13:
            cout << "���������� ������� �������." << endl;
            break;
        case 14:
            cout << "������������ ������� �������." << endl;
            break;
        case 15:
            cout << "���������� ������� �������." << endl;
            break;
        case 16:
            cout << "����������� ������� �������." << endl;
            break;
        case 17:
            cout << "���������� ������� �������." << endl;
            break;
        case 18:
            cout << "������������ ������� �������." << endl;
            break;
        case 19:
            cout << "������������ ������� �������." << endl;
            break;
        }
    }
    else {
        switch (n / 10) {
        case 2:
            cout << "�������� ";
            break;
        case 3:
            cout << "�������� ";
            break;
        case 4:
            cout << "����� ";
            break;
        }
        switch (n % 10) {
        case 1:
            cout << "���� ";
            break;
        case 2:
            cout << "��� ";
            break;
        case 3:
            cout << "��� ";
            break;
        case 4:
            cout << "������ ";
            break;
        case 5:
            cout << "���� ";
            break;
        case 6:
            cout << "����� ";
            break;
        case 7:
            cout << "���� ";
            break;
        case 8:
            cout << "������ ";
            break;
        case 9:
            cout << "������ ";
            break;
        }
    }
        switch (n % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "������� �������." << endl;
            break;
        case 1:
            cout << "������� �������." << endl;
            break;
        case 2:
        case 3:
        case 4:
            cout << "������� �������." << endl;
            break;
        }
    }
    else
    {
    cout << "�� ����� �����, ����������� ��� ������ ���������." << endl;
    }

        cout << "\n\n������� �4" << endl;
        cout << "������� ����� �� ��������� 100-999:\n";
        cin >> nn;
        st = nn / 100;
        des = nn / 10 % 10;
        ed = nn % 10;
        if ((nn >= 100) && (nn <= 999))
        {


            switch (st)
            {
            case 1:
                cout << "���";
                break;
            case 2:
                cout << "������";
                break;
            case 3:
                cout << "������";
                break;
            case 4:
                cout << "���������";
                break;
            case 5:
                cout << "�������";
                break;
            case 6:
                cout << "��������";
                break;
            case 7:
                cout << "�������";
                break;
            case 8:
                cout << "���������";
                break;
            case 9:
                cout << "���������";
                break;
            default:
                break;
            }

            if (des > 1)
            {
                switch (des)
                {
                case 2:
                    cout << " ��������";
                    break;
                case 3:
                    cout << " ��������";
                    break;
                case 4:
                    cout << " �����";
                    break;
                case 5:
                    cout << " ���������";
                    break;
                case 6:
                    cout << " ����������";
                    break;
                case 7:
                    cout << " ���������";
                    break;
                case 8:
                    cout << " �����������";
                    break;
                case 9:
                    cout << " ���������";
                    break;
                default:
                    break;
                }
            }
            else if (des == 1)
            {
                switch (nn % 100)
                {
                case 10:
                    cout << " ������";
                    break;
                case 11:
                    cout << " �����������";
                    break;
                case 12:
                    cout << " ����������";
                    break;
                case 13:
                    cout << " ����������";
                    break;
                case 14:
                    cout << " ������������";
                    break;
                case 15:
                    cout << " ����������";
                    break;
                case 16:
                    cout << " �����������";
                    break;
                case 17:
                    cout << " ����������";
                    break;
                case 18:
                    cout << " ������������";
                    break;
                case 19:
                    cout << " ������������";
                    break;
                default:
                    break;
                }
            }
            else if (des == 0)
            {
                switch (ed)
                {
                case 1:
                    cout << " ����";
                    break;
                case 2:
                    cout << " ���";
                    break;
                case 3:
                    cout << " ���";
                    break;
                case 4:
                    cout << " ������";
                    break;
                case 5:
                    cout << " ����";
                    break;
                case 6:
                    cout << " �����";
                    break;
                case 7:
                    cout << " ����";
                    break;
                case 8:
                    cout << " ������";
                    break;
                case 9:
                    cout << " ������";
                    break;

                default:
                    break;
                }
            }
            if ((des != 0) && (des != 1))
            {
                switch (ed)
                {
                case 1:
                    cout << " ����";
                    break;
                case 2:
                    cout << " ���";
                    break;
                case 3:
                    cout << " ���";
                    break;
                case 4:
                    cout << " ������";
                    break;
                case 5:
                    cout << " ����";
                    break;
                case 6:
                    cout << " �����";
                    break;
                case 7:
                    cout << " ����";
                    break;
                case 8:
                    cout << " ������";
                    break;
                case 9:
                    cout << " ������";
                    break;

                default:
                    break;
                }
            }
            cout << ".";
        }
        else
        {
            cout << "�� ����� �����, ����������� ��� ������ ������� ���������� �����. ";
        }  
        cout << "\n������� �5." << endl;
        int z;
        cout << "������� ���:";
        cin >> z;

        cout << "��� ��� ";

        switch ((z) % 10) {
        case 0:
        case 1:
            cout << "���";
            break;
        case 2:
        case 3:
            cout << "����";
            break;
        case 4:
        case 5:
            cout << "����";
            break;
        case 6:
        case 7:
            cout << "�����";
            break;
        case 8:
        case 9:
            cout << "���";
            break;
        }

        switch ((z + 1) % 5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 9:
        case 10:
        case 11:
            cout << "�� ";
            break;
        case 6:
        case 7:
        case 8:
            cout << "��� ";
            break;
        }

        switch ((z + 8) % 12) {
        case 0:
            cout << "�����";
            break;
        case 1:
            cout << "������";
            break;
        case 2:
            cout << "�����";
            break;
        case 3:
            cout << "�����";
            break;
        case 4:
            cout << "�������";
            break;
        case 5:
            cout << "����";
            break;
        case 6:
            cout << "������";
            break;
        case 7:
            cout << "����";
            break;
        case 8:
            cout << "��������";
            break;
        case 9:
            cout << "������";
            break;
        case 10:
            cout << "������";
            break;
        case 11:
            cout << "������";
            break;
        }

        return 0;
}
    
		


   