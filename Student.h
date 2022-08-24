#pragma once
#include<iostream>
#include<fstream>
#include<cstring>
#include <stdlib.h>
#include<windows.h>
using namespace std;
typedef class Student
{
public:
    string id;
    string name;
    string sex;
    string major;
    string chusheng;
    string dizhi;
    int achievement;
    Student *next;
}STU;
class Stu :private Student
{
private:
    STU* head;
public:
    Stu()
    {
        head = new STU;
        head->next = NULL;
    }
    ~Stu() {}
    void jindu();
    void caidan();
    void menu();
    void add();
    void find();
    void modify();
    void show();
    void delet();
    void chengji();
    int panchong(string o);
    int panxing(string o);
    void read();
    void save();
    void dayin(STU* o);
    int shuliang(STU* o);
    void zhuce();
    void guanli();
    void putong();
    void guandeng();
    void begin1();
    void begin2();
    void menu2();
    void zuihou();
};