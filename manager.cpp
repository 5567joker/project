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
    cout << "是否有管理员账号" << endl;
    cout << "有输入'1'，无输入'0'" << endl;
    cin >> i;
    while (i < 0 || i>1)
    {
        cout << "无效数字，请重新输入：";
        cin >> i;
    }
    if (i == 0)
    {
        cout << "正在进入，请稍等···" << endl;
        jindu();
        system("cls");
        zhuce();
        begin1();
    }
    else
    {
        cout << "正在进入，请稍等···" << endl;
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
void Stu::begin1()
{
    int i = 0;
    do
    {
        menu();
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
            add();
            cout << "正在退出，请稍等···" << endl;
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
            cout << "新生信息已导入" << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "输入错误,请重新输入";
            break;
        }
    } while (i);
}
