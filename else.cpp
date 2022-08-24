#include<iostream>
#include<fstream>
#include<cstring>
#include <stdlib.h>
#include<windows.h>
#include "Student.h"
using namespace std;
void Stu::caidan()
{


    cout << "\t\t***************************************************" << endl;
    cout << "\t\t******     1.学生学号        2.学生名字      ******" << endl;
    cout << "\t\t******     3.学生性别        4.学生专业      ******" << endl;
    cout << "\t\t******     5.学生出生日期    6.学生家庭地址  ******" << endl;
    cout << "\t\t******     7.学生英语成绩    0.退出查询程序  ******" << endl;
    cout << "\t\t***************************************************" << endl;
    cout << "请选择：";
}
void Stu::jindu()
{
    int n = 20;
    int i;
    cout << "[";
    for (i = 0; i < n; i++)
    {
        cout << ">";
        Sleep(100);
    }
    cout << "]" << endl;
}
void Stu::menu()
{
    cout << "请选择执行程序" << endl;
    cout << "\t\t*****************************************************" << endl;
    cout << "\t\t******  1.增加学生信息       2.删除学生信息    ******" << endl;
    cout << "\t\t******  3.查询学生信息       4.学生信息统计    ******" << endl;
    cout << "\t\t******  5.按英语成绩排序     6.修改学生信息    ******" << endl;
    cout << "\t\t******  7.学生信息保存       8.导入学生信息    ******" << endl;
    cout << "\t\t******              0.退出程序                 ******" << endl;
    cout << "\t\t*****************************************************" << endl;
}
void Stu::menu2()
{
    cout << "请选择执行程序" << endl;
    cout << "\t\t*****************************************************" << endl;
    cout << "\t\t******  1.查询学生信息       2.学生信息统计    ******" << endl;
    cout << "\t\t******  3.按英语成绩排序       0.退出程序      ******" << endl;
    cout << "\t\t*****************************************************" << endl;
}
int Stu::panchong(string o)
{
    STU* s;
    s = head->next;
    while (s)
    {
        if (!strcmp(s->id.c_str(), o.c_str()))
        {
            return 0;
        }
        s = s->next;
    }
    return 1;
}
int Stu::panxing(string o)
{
    string i = "男";
    string j = "女";
    if (!strcmp(o.c_str(), j.c_str()))
        return 1;
    else if (!strcmp(o.c_str(), i.c_str()))
        return 1;
    else
        return 0;

}
int Stu::shuliang(STU* o)
{
    if (o == NULL)
        return 0;
    else
        return 1;
}
void Stu::zuihou()
{
    cout << "\t\t*************************************************" << endl;
    cout << "\t\t******                                     ******" << endl;
    cout << "\t\t******       谢谢使用学生信息管理系统      ******" << endl;
    cout << "\t\t******           欢迎下次使用              ******" << endl;
    cout << "\t\t******                                     ******" << endl;
    cout << "\t\t*************************************************" << endl;
}
void Stu::save()
{
    ofstream of1;
    of1.open("D:\\vs代码文件\\c++大作业\\大作业\\大作业\\caozuo.txt", ios::out);
    if (!of1.is_open())
    {
        cout << "open caozuo.txt error!" << endl;
    }
    else
    {
        STU* s = head->next;

        while (s)
        {
            of1 << s->id << " " << s->name << " " << s->sex << " " << s->major << " " << s->chusheng << " " << s->dizhi << " " << s->achievement << " " << endl;
            s = s->next;
        }
        of1.close();
    }
    ofstream of2;
    of1.open("D:\\vs代码文件\\c++大作业\\大作业\\学生信息.txt", ios::out);
    if (!of1.is_open())
    {
        cout << "open guankan.txt error!" << endl;
    }
    else
    {
        STU* b = head->next;

        while (b)
        {
            of1 << "学号:" << b->id << " " << "姓名:" << b->name << " " << "性别" << b->sex << " " << "专业:" << b->major << " " << "出生日期:" << b->chusheng <<
                " " << "家庭住址" << b->dizhi << "英语成绩:" << b->achievement << " " << endl;
            b = b->next;
        }
        of1.close();
    }
    cout << "正在保存，请稍等···" << endl;
    jindu();
    cout << "保存成功!" << endl;
}
void Stu::read()
{
    STU* r = head;
    ifstream infile;
    string id;          
    string name;        
    string sex;         
    string major;       
    string chusheng;   
    string dizhi;       
    int achievement = 0;
    infile.open("D:\\vs代码文件\\c++大作业\\大作业\\大作业\\caozuo.txt", ios::in);
    if (!infile) {
        return;
    }
    while (infile >> id >> name >> sex >> major >> chusheng >> dizhi >> achievement)
    {
        STU* p = new STU;
        p->id = id;
        p->name = name;
        p->sex = sex;
        p->major = major;
        p->chusheng = chusheng;
        p->dizhi = dizhi;
        p->achievement = achievement;
        r->next = p;
        p->next = NULL;
        r = p;
    }
    cout << "正在导入，请稍等···" << endl;
    jindu();

    infile.close();

}