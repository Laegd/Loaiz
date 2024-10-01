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
        cout << "Введите имя студента: ";
        cin >> spisok[i].name;

        cout << "Введите фамилию студента: ";
        cin >> spisok[i].surname;

        cout << "Введите возраст студента: ";
        cin >> spisok[i].age;

        cout << "Введите номер группы студента: ";
        cin >> spisok[i].group;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Номер студента: " << i + 1 << " Имя: " << spisok[i].name << " Фамилия: " << spisok[i].surname << " Возраст: " << spisok[i].age << " Группа: " << spisok[i].group << endl;
    }

    int parametr = 1;

    while (parametr != 0)
    {
        cout << "\nПараметры: \n[0] - Выход \n[1] - Имя \n[2] - Фамилия \n[3] - Возраст \n[4] - Группа \n[5] - Поиск по всем параметрам \nВыберите номер, для нужного параметра: ";
        cin >> parametr;
        switch (parametr)
        {
        case 0:
            break;
        case 1:
        {
            string name;
            bool finded = false;
            cout << "Введите имя студента: ";
            cin >> name;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].name == name)
                {
                    cout << "Структурный номер данного имени: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "Структурный номер данного имени не найден" << endl;
            }

            break;
        }
        case 2:
        {
            string surname;
            bool finded = false;
            cout << "Введите фамилию студента: ";
            cin >> surname;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].surname == surname)
                {
                    cout << "Структурный номер данной фамилии: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "Структурный номер данной фамилии не найден" << endl;
            }
            break;
        }
        case 3:
        {
            int age;
            bool finded = false;
            cout << "Введите возраст студента: ";
            cin >> age;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].age == age)
                {
                    cout << "Структурный номер данного возраста: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "Структурный номер данного возраста не найден" << endl;
            }
            break;
        }
        case 4:
        {
            string group;
            bool finded = false;
            cout << "Введите группу студента: ";
            cin >> group;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].group == group)
                {
                    cout << "Структурный номер группы данного студента: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "Структурный номер группы данного студента не найден" << endl;
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
            cout << "Введите имя студента: ";
            cin >> name;
            cout << "Введите фамилию студента: ";
            cin >> surname;
            cout << "Введите возраст студента: ";
            cin >> age;
            cout << "Введите номер группы студента: ";
            cin >> group;
            for (int i = 0; i < size; i++)
            {
                if (spisok[i].name == name && spisok[i].surname == surname && spisok[i].age == age && spisok[i].group == group)
                {
                    cout << "Структурный номер этих параметров: " << i + 1 << endl;
                    finded = true;
                }
            }
            if (!finded)
            {
                cout << "Структурный номер этих параметров не найден" << endl;
            }
            break;
        }
        default:
            cout << "Enter available parametr" << endl;
            break;
        }
    }

}