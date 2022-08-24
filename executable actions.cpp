#include "Student.h"
void Stu::add()
{
    STU* p;
    int m = 0;
    int n = 0;
    while (1)
    {
        p = new STU;
        cout << "请输入学号：";
        while (1)
        {
            cin >> p->id;
            m = panchong(p->id);
            if (m == 0)
            {
                cout << "学号重复，请重新输入：";
                continue;
            }
            else
                break;
        }
        cout << "请输入姓名：";
        cin >> p->name;
        while (1)
        {
            cout << "请输入性别：";
            cin >> p->sex;
            m = panxing(p->sex);
            if (m == 0)
            {
                cout << "请输入'男'，或输入'女'" << endl;
                continue;
            }
            else
                break;
        }
        cout << "请输入专业：";
        cin >> p->major;
        cout << "请输入出生日期：";
        cin >> p->chusheng;
        cout << "请输入家庭地址 ：";
        cin >> p->dizhi;
        cout << "请输入英语成绩：";
        cin >> p->achievement;
        p->next = head->next;
        head->next = p;
        cout << "是否继续添加" << endl;
        cout << "是请输入'1',否请输入'0'" << endl;
        cout << "请选择：";
        cin >> n;
        while (n < 0 || n>1)
        {
            cout << "输入不规范，请重新输入：";
            cin >> n;
        }
        if (n == 0)
        {
            break;
        }
        system("cls");
    }
}
void Stu::dayin(STU* o)
{
    cout << "学号：" << o->id << endl;
    cout << "姓名：" << o->name << endl;
    cout << "性别：" << o->sex << endl;
    cout << "专业：" << o->major << endl;
    cout << "出生日期：" << o->chusheng << endl;
    cout << "家庭地址：" << o->dizhi << endl;
    cout << "英语成绩：" << o->achievement << endl;
    cout << endl;
}
void Stu::find()
{
    int i = 0;
    int m = 0;
    int j = 0;
    do
    {
        int n = 0;
        STU* p = head->next;
        string id;          
        string name;       
        string sex;        
        string major;       
        string chusheng;    
        string dizhi;       
        int achievement = 0;    
        j = shuliang(p);
        if (j == 0)
        {
            cout << "系统中没有学生信息" << endl;
            cout << "请先添加学生信息在查询" << endl;
            break;
        }
        cout << "请选择查询方式" << endl;
        caidan();
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
            cout << "请输入查询学生学号：";
            cin >> id;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {

                if (!strcmp(p->id.c_str(), id.c_str()))
                {
                    dayin(p);
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL)
                    {
                        cout << "查无此人" << endl;
                        break;
                    }
                }
            }
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "请输入查询学生姓名：";
            cin >> name;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (!strcmp(p->name.c_str(), name.c_str()))
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "查无此人" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n > 1)
                cout << "共有" << n << "名学生名字为" << name << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "请输入要查询的性别：";
            while (1)
            {
                cin >> sex;
                m = panxing(sex);
                if (m == 0)
                {
                    cout << "请输入'男'，或输入'女'" << endl;
                    cout << "请输入性别" << endl;
                    continue;
                }
                else
                    break;
            }
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (!strcmp(p->sex.c_str(), sex.c_str()))
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "没有此性别的学生" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << sex << "总共有" << n << "名" << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "请输入要查询的专业：";
            cin >> major;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (!strcmp(p->major.c_str(), major.c_str()))
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "没有此专业的学生" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << major << "专业共有" << n << "名学生" << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "请输入要查询的出生日期：";
            cin >> chusheng;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (!strcmp(p->chusheng.c_str(), chusheng.c_str()))
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "没有此时出生的学生" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "在" << chusheng << "出生的学生有" << n << "名" << endl;
            system("pause");
            system("cls");
            break;
        case 6:
            cout << "请输入要查询的家庭地址：";
            cin >> dizhi;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (!strcmp(p->dizhi.c_str(), dizhi.c_str()))
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "没有家庭地址在此地的学生" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "共有" << n << "名学生家在" << dizhi << endl;
            system("pause");
            system("cls");
            break;
        case 7:
            cout << "请输入要查询的英语成绩：";
            cin >> achievement;
            cout << "正在查找" << endl;
            jindu();
            while (p)
            {
                if (p->achievement == achievement)
                {
                    dayin(p);
                    p = p->next;
                    n++;
                    break;
                }
                else
                {
                    p = p->next;
                    if (p == NULL && n == 0)
                    {
                        cout << "没有这个成绩的学生" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "共有" << n << "名学生英语成绩为" << achievement << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "输入错误,请重新输入";
            break;
        }
    } while (i);

}
void Stu::modify()
{
    STU* p = head->next;
    string id;
    string hao;
    int i = 0;
    int m = 0;
    cout << "请输入要修改学生的学号：" << endl;
    cin >> id;
    cout << "正在搜索，请稍等···";
    jindu();
    system("cls");
    while (p)
    {
        if (!strcmp(p->id.c_str(), id.c_str()))
        {
            do
            {
                dayin(p);
                cout << "---------------------" << endl;
                cout << "请输入想要修改的信息" << endl;
                caidan();
                cin >> i;
                system("cls");
                switch (i)
                {
                case 0:
                    cout << "正在退出程序" << endl;
                    jindu();
                    system("cls");
                    cout << "退出成功" << endl;
                    Sleep(1000);
                    break;
                case 1:
                    cout << "请输入修改的学号：";
                    cin >> p->id;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 2:
                    cout << "请输入修改后的名字：";
                    cin >> p->name;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 3:
                    cout << "请输入修改后的性别：";
                    while (1)
                    {
                        cin >> p->sex;
                        m = panxing(p->sex);
                        if (m == 0)
                        {
                            cout << "请输入'男'，或输入'女'" << endl;
                            continue;
                        }
                        else
                            break;
                    }
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 4:
                    cout << "请输入修改后的专业：";
                    cin >> p->major;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 5:
                    cout << "请输入修改后的出生日期：";
                    cin >> p->chusheng;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 6:
                    cout << "请输入修改后的家庭地址：";
                    cin >> p->dizhi;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 7:
                    cout << "请输入修改后的英语成绩：";
                    cin >> p->achievement;
                    cout << "正在修改" << endl;
                    jindu();
                    system("cls");
                    cout << "修改成功" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                default:
                    cout << "输入错误,请重新输入";
                    break;
                }
            } while (i);
            break;
        }
        else
        {
            p = p->next;
            if (p == NULL)
            {
                cout << "没有此学生" << endl;
                break;
            }
        }
    }
}
void Stu::show()
{
    int boy = 0;
    int girl = 0;
    int peo = 0;
    STU* p = head->next;
    while (p)
    {
        string i = "男";
        string j = "女";
        if (!strcmp(p->sex.c_str(), j.c_str()))
            girl++;
        if (!strcmp(p->sex.c_str(), i.c_str()))
            boy++;
        peo++;
        dayin(p);
        p = p->next;
    }
    cout << "学生总共有：" << peo << endl;
    cout << "男生总共有：" << boy << endl;
    cout << "女生总共有：" << girl << endl;
}
void Stu::delet()
{
    STU* a = head->next;
    STU* b = head;
    string id;
    int c = 0;
    cout << "请输入要删除学生的学号：";
    cin >> id;
    while (a)
    {
        if (!strcmp(a->id.c_str(), id.c_str()))
        {
            cout << "是否确定删除该学生" << endl;
            cout << "确定输入'1'，取消输入'0'" << endl;
            cout << "请输入：";
            cin >> c;
            if (c == 0)
                break;
            b->next = a->next;
            delete a;
            cout << "正在删除，请稍等···" << endl;
            jindu();
            system("cls");
            cout << "删除成功" << endl;
            break;
        }
        else
        {
            a = a->next;
            b = b->next;
            if (a == NULL)
            {
                cout << "没有此学生" << endl;
                break;
            }
        }
    }
}
void Stu::chengji()
{
    STU* w = head->next;
    int a[1000] = {};
    int i = 0;
    int j = 0;
    int n = 0;
    int sun = 0;
    for (i = 0; i < 1000; i++)
    {
        if (w == NULL)
            break;
        a[i] = w->achievement;
        w = w->next;
        n++;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                sun = a[j];
                a[j] = a[j + 1];
                a[j + 1] = sun;
            }
        }
    }

    cout << "按英语成绩排名如下" << endl;
    for (i = 0; i < n; i++)
    {
        w = head->next;
        while (w)
        {
            if (a[i] == w->achievement)
            {
                dayin(w);
                w = w->next;
            }
            else
            {
                w = w->next;
                if (w == NULL)
                {
                    break;
                }
            }
        }
    }
}