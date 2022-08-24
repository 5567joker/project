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
        cout << "请输入想执行的程序：";
        cin >> i;
        system("cls");
        switch (i)
        {
        case 0:
            cout << "正在退出程序" << endl;
            jindu();
            system("cls");
            cout << "退出成功" << endl;
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
            cout << "正在退出，请稍等···" << endl;
            jindu();
            system("cls");
            break;
        default:
            cout << "输入错误,请重新输入";
            break;
        }
    } while (i);
}
void Stu::putong()
{
    cout << "检测到你没有账号" << endl;
    cout << "正在进入注册系统，请稍等···" << endl;
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
    cout << "\t\t		学生信息管理系统注册页面			" << endl;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t注册学生通信录管理系统的账号" << endl;
    cout << "\t\t请输入学生通信录管理系统的账号:";
    cin >> zhanghao1;
    cout << "\t\t请输入学生通信录管理系统的密码:";
    cin >> mima1;
    cout << "\t\t 正在进入登录页面，请稍等···" << endl;
    cout << "\t\t";
    jindu();
    system("cls");
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t		学生信息管理系统登录页面			" << endl;
    cout << "\t\t-------------------------------------------------" << endl;
    cout << "\t\t请输入学生通信录管理系统的账号:";
    cin >> zhanghao2;
    while (1)
    {
        if (strcmp(zhanghao1.c_str(), zhanghao2.c_str()) != 0)
        {
            cout << "\t\t没有该账号，请重新输入:";
            cin >> zhanghao2;
            continue;
        }
        else
            break;
    }
    cout << "\t\t请输入学生通信录管理系统的密码:";
    cin >> mima2;
    while (1)
    {


        if (strcmp(mima1.c_str(), mima2.c_str()) != 0)
        {
            cout << "\t\t输入错误，请重新输入:";
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
            cout << "成功登陆";
            Sleep(1000);
            break;
        }

    }
    system("cls");
}
