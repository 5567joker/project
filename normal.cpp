#include "Student.h"
#include<iostream>
#include<fstream>
#include<cstring>
#include <stdlib.h>
#include<windows.h>
using namespace std;
void Stu::begin2()
{
    int i = 0;
    read();
    system("cls");
    do
    {
        menu2();
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
            find();
            system("cls");
            break;
        case 2:
            show();
            system("pause");
            system("cls");
            break;
        case 3:
            chengji();
            cout << "�����˳������Եȡ�����" << endl;
            jindu();
            system("cls");
            break;
        default:
            cout << "�������,����������";
            break;
        }
    } while (i);
}
void Stu::putong()
{
    cout << "��⵽��û���˺�" << endl;
    cout << "���ڽ���ע��ϵͳ�����Եȡ�����" << endl;
    jindu();
    system("cls");
    zhuce();
    begin2();
}
void Stu::zhuce()
{
    string zhanghao1;
    string zhanghao2;
    string mima1;
    string mima2;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t		ѧ����Ϣ����ϵͳע��ҳ��			" << endl;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\tע��ѧ��ͨ��¼����ϵͳ���˺�" << endl;
    cout << "\t\t������ѧ��ͨ��¼����ϵͳ���˺�:";
    cin >> zhanghao1;
    cout << "\t\t������ѧ��ͨ��¼����ϵͳ������:";
    cin >> mima1;
    cout << "\t\t ���ڽ����¼ҳ�棬���Եȡ�����" << endl;
    cout << "\t\t";
    jindu();
    system("cls");
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
