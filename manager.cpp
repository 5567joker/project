#include"Student.h"
#include<iostream>
#include<fstream>
#include<cstring>
#include <stdlib.h>
#include<windows.h>
using namespace std;
void Stu::guanli()
{

    int i = 0;
    cout << "�Ƿ��й���Ա�˺�" << endl;
    cout << "������'1'��������'0'" << endl;
    cin >> i;
    while (i < 0 || i>1)
    {
        cout << "��Ч���֣����������룺";
        cin >> i;
    }
    if (i == 0)
    {
        cout << "���ڽ��룬���Եȡ�����" << endl;
        jindu();
        system("cls");
        zhuce();
        begin1();
    }
    else
    {
        cout << "���ڽ��룬���Եȡ�����" << endl;
        jindu();
        system("cls");
        guandeng();
        begin1();
    }
}
void Stu::guandeng()
{
    string zhanghao1 = "zhiqiang";
    string mima1 = "123456";
    string zhanghao2;
    string mima2;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t		ѧ����Ϣ����ϵͳ��¼ҳ��			" << endl;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t������ѧ��ͨ��¼����ϵͳ���˺�:";
    cin >> zhanghao2;
    while (1)
    {
        if (strcmp(zhanghao1.c_str(), zhanghao2.c_str()) != 0)
        {
            cout << "\t\tû�и��˺ţ�����������:";
            cin >> zhanghao2;
            continue;
        }
        else
            break;
    }
    cout << "\t\t������ѧ��ͨ��¼����ϵͳ������:";
    cin >> mima2;
    while (1)
    {


        if (strcmp(mima1.c_str(), mima2.c_str()) != 0)
        {
            cout << "\t\t�����������������:";
            cin >> mima2;
            continue;
        }
        else
        {
            system("cls");
            cout << "" << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << "\t \t \t \t \t";
            cout << "�ɹ���½";
            Sleep(1000);
            break;
        }
    }
    system("cls");
}
void Stu::begin1()
{
    int i = 0;
    do
    {
        menu();
        cout << "��������ִ�еĳ���";
        cin >> i;
        system("cls");
        switch (i)
        {
        case 0:
            cout << "�����˳�����" << endl;
            jindu();
            system("cls");
            cout << "�˳��ɹ�" << endl;
            break;
        case 1:
            add();
            cout << "�����˳������Եȡ�����" << endl;
            jindu();
            system("cls");
            break;
        case 2:
            delet();
            system("pause");
            system("cls");
            break;
        case 3:
            find();
            system("cls");
            break;
        case 4:
            show();
            system("pause");
            system("cls");
            break;
        case 5:
            chengji();
            system("pause");
            system("cls");
            break;
        case 6:
            modify();
            system("cls");
            break;
        case 7:
            save();
            system("pause");
            system("cls");
            break;
        case 8:
            read();
            cout << "������Ϣ�ѵ���" << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "�������,����������";
            break;
        }
    } while (i);
}
