#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    const int size = 3;

    struct student
    {
        string name;
        string surname;
        int age;
        string group;;
    }spisok[size];


    for (int i = 0; i < size; i++)
    {
        cout << "������� ��� ��������: ";
        cin >> spisok[i].name;

        cout << "������� ������� ��������: ";
        cin >> spisok[i].surname;

        cout << "������� ������� ��������: ";
        cin >> spisok[i].age;

        cout << "������� ����� ������ ��������: ";
        cin >> spisok[i].group;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "����� ��������: " << i + 1 << " ���: " << spisok[i].name << " �������: " << spisok[i].surname << " �������: " << spisok[i].age << " ������: " << spisok[i].group << endl;
    }

    int parametr = 1;

    while (parametr != 0)
    {
        cout << "\n���������: \n[0] - ����� \n[1] - ��� \n[2] - ������� \n[3] - ������� \n[4] - ������ \n[5] - ����� �� ���� ���������� \n�������� �����, ��� ������� ���������: ";
        cin >> parametr;
        switch (parametr)
        {
        case 0:
            break;
        case 1:
        {
            string name;
            bool finded = false;
            cout << "������� ��� ��������: ";
            cin >> name;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].name == name)
                {
                    cout << "����������� ����� ������� �����: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "����������� ����� ������� ����� �� ������" << endl;
            }

            break;
        }
        case 2:
        {
            string surname;
            bool finded = false;
            cout << "������� ������� ��������: ";
            cin >> surname;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].surname == surname)
                {
                    cout << "����������� ����� ������ �������: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "����������� ����� ������ ������� �� ������" << endl;
            }
            break;
        }
        case 3:
        {
            int age;
            bool finded = false;
            cout << "������� ������� ��������: ";
            cin >> age;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].age == age)
                {
                    cout << "����������� ����� ������� ��������: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "����������� ����� ������� �������� �� ������" << endl;
            }
            break;
        }
        case 4:
        {
            string group;
            bool finded = false;
            cout << "������� ������ ��������: ";
            cin >> group;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].group == group)
                {
                    cout << "����������� ����� ������ ������� ��������: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "����������� ����� ������ ������� �������� �� ������" << endl;
            }
            break;
        }
        case 5:
        {
            string name;
            string surname;
            int age;
            string group;
            int idCard;
            bool finded;
            cout << "������� ��� ��������: ";
            cin >> name;
            cout << "������� ������� ��������: ";
            cin >> surname;
            cout << "������� ������� ��������: ";
            cin >> age;
            cout << "������� ����� ������ ��������: ";
            cin >> group;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].name == name && spisok[i].surname == surname && spisok[i].age == age && spisok[i].group == group)
                {
                    cout << "����������� ����� ���� ����������: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "����������� ����� ���� ���������� �� ������" << endl;
            }
            break;
        }
        default:
            cout << "Enter available parametr" << endl;
            break;
        }
    }

}