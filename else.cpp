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
    cout << "\t\t******     1.ѧ��ѧ��        2.ѧ������      ******" << endl;
    cout << "\t\t******     3.ѧ���Ա�        4.ѧ��רҵ      ******" << endl;
    cout << "\t\t******     5.ѧ����������    6.ѧ����ͥ��ַ  ******" << endl;
    cout << "\t\t******     7.ѧ��Ӣ��ɼ�    0.�˳���ѯ����  ******" << endl;
    cout << "\t\t***************************************************" << endl;
    cout << "��ѡ��";
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
    cout << "��ѡ��ִ�г���" << endl;
    cout << "\t\t*****************************************************" << endl;
    cout << "\t\t******  1.����ѧ����Ϣ       2.ɾ��ѧ����Ϣ    ******" << endl;
    cout << "\t\t******  3.��ѯѧ����Ϣ       4.ѧ����Ϣͳ��    ******" << endl;
    cout << "\t\t******  5.��Ӣ��ɼ�����     6.�޸�ѧ����Ϣ    ******" << endl;
    cout << "\t\t******  7.ѧ����Ϣ����       8.����ѧ����Ϣ    ******" << endl;
    cout << "\t\t******              0.�˳�����                 ******" << endl;
    cout << "\t\t*****************************************************" << endl;
}
void Stu::menu2()
{
    cout << "��ѡ��ִ�г���" << endl;
    cout << "\t\t*****************************************************" << endl;
    cout << "\t\t******  1.��ѯѧ����Ϣ       2.ѧ����Ϣͳ��    ******" << endl;
    cout << "\t\t******  3.��Ӣ��ɼ�����       0.�˳�����      ******" << endl;
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
    string i = "��";
    string j = "Ů";
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
    cout << "\t\t******       ллʹ��ѧ����Ϣ����ϵͳ      ******" << endl;
    cout << "\t\t******           ��ӭ�´�ʹ��              ******" << endl;
    cout << "\t\t******                                     ******" << endl;
    cout << "\t\t*************************************************" << endl;
}
void Stu::save()
{
    ofstream of1;
    of1.open("D:\\vs�����ļ�\\c++����ҵ\\����ҵ\\����ҵ\\caozuo.txt", ios::out);
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
    of1.open("D:\\vs�����ļ�\\c++����ҵ\\����ҵ\\ѧ����Ϣ.txt", ios::out);
    if (!of1.is_open())
    {
        cout << "open guankan.txt error!" << endl;
    }
    else
    {
        STU* b = head->next;

        while (b)
        {
            of1 << "ѧ��:" << b->id << " " << "����:" << b->name << " " << "�Ա�" << b->sex << " " << "רҵ:" << b->major << " " << "��������:" << b->chusheng <<
                " " << "��ͥסַ" << b->dizhi << "Ӣ��ɼ�:" << b->achievement << " " << endl;
            b = b->next;
        }
        of1.close();
    }
    cout << "���ڱ��棬���Եȡ�����" << endl;
    jindu();
    cout << "����ɹ�!" << endl;
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
    infile.open("D:\\vs�����ļ�\\c++����ҵ\\����ҵ\\����ҵ\\caozuo.txt", ios::in);
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
    cout << "���ڵ��룬���Եȡ�����" << endl;
    jindu();

    infile.close();

}