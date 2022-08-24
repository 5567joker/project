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
        cout << "\t\t******       欢迎使用学生信息管理系统      ******" << endl;
        cout << "\t\t******                                     ******" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "请选择登陆方式" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "\t\t******     1.学生登录    2.管理员登录      ******" << endl;
        cout << "\t\t******      0.退出学生信息管理系统         ******" << endl;
        cout << "\t\t*************************************************" << endl;
        cout << "请输入：";
        cin >> i;
        system("cls");
        switch (i)
        {
        case 0:
            cout << "正在退出程序" << endl;
            P.jindu();
            system("cls");
            cout << "退出成功" << endl;
            S.zuihou();
            break;
        case 1:
            cout << "正在进入，请稍等···" << endl;
            P.jindu();
            system("cls");
            S.putong();
            Sleep(1000);
            system("cls");
            break;
        case 2:
            cout << "正在进入，请稍等···" << endl;
            P.jindu();
            system("cls");
            S.guanli();
            Sleep(1000);
            system("cls");
            break;
        default:
            cout << "输入错误,请重新输入";
            break;
        }
    } while (i);
    return 0;
}