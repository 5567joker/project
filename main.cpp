#include<iostream>
#include<fstream>
#include<cstring>
#include <stdlib.h>
#include<windows.h>
using namespace std;
#include "Student.h"
int main()
{
    Stu S;
    Stu P;
    int i = 0;
    do
    {
        cout << "\t\t*************************************************" << endl;
        cout << "\t\t******                                     ******" << endl;
        cout << "\t\t******       ��ӭʹ��ѧ����Ϣ����ϵͳ      ******" << endl;
        cout << "\t\t******                                     ******" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "��ѡ���½��ʽ" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "\t\t******     1.ѧ����¼    2.����Ա��¼      ******" << endl;
        cout << "\t\t******      0.�˳�ѧ����Ϣ����ϵͳ         ******" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "�����룺";
        cin >> i;
        system("cls");
        switch (i)
        {
        case 0:
            cout << "�����˳�����" << endl;
            P.jindu();
            system("cls");
            cout << "�˳��ɹ�" << endl;
            S.zuihou();
            break;
        case 1:
            cout << "���ڽ��룬���Եȡ�����" << endl;
            P.jindu();
            system("cls");
            S.putong();
            Sleep(1000);
            system("cls");
            break;
        case 2:
            cout << "���ڽ��룬���Եȡ�����" << endl;
            P.jindu();
            system("cls");
            S.guanli();
            Sleep(1000);
            system("cls");
            break;
        default:
            cout << "�������,����������";
            break;
        }
    } while (i);
    return 0;
}