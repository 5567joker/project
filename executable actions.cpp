#include "Student.h"
void Stu::add()
{
    STU* p;
    int m = 0;
    int n = 0;
    while (1)
    {
        p = new STU;
        cout << "������ѧ�ţ�";
        while (1)
        {
            cin >> p->id;
            m = panchong(p->id);
            if (m == 0)
            {
                cout << "ѧ���ظ������������룺";
                continue;
            }
            else
                break;
        }
        cout << "������������";
        cin >> p->name;
        while (1)
        {
            cout << "�������Ա�";
            cin >> p->sex;
            m = panxing(p->sex);
            if (m == 0)
            {
                cout << "������'��'��������'Ů'" << endl;
                continue;
            }
            else
                break;
        }
        cout << "������רҵ��";
        cin >> p->major;
        cout << "������������ڣ�";
        cin >> p->chusheng;
        cout << "�������ͥ��ַ ��";
        cin >> p->dizhi;
        cout << "������Ӣ��ɼ���";
        cin >> p->achievement;
        p->next = head->next;
        head->next = p;
        cout << "�Ƿ�������" << endl;
        cout << "��������'1',��������'0'" << endl;
        cout << "��ѡ��";
        cin >> n;
        while (n < 0 || n>1)
        {
            cout << "���벻�淶�����������룺";
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
    cout << "ѧ�ţ�" << o->id << endl;
    cout << "������" << o->name << endl;
    cout << "�Ա�" << o->sex << endl;
    cout << "רҵ��" << o->major << endl;
    cout << "�������ڣ�" << o->chusheng << endl;
    cout << "��ͥ��ַ��" << o->dizhi << endl;
    cout << "Ӣ��ɼ���" << o->achievement << endl;
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
            cout << "ϵͳ��û��ѧ����Ϣ" << endl;
            cout << "�������ѧ����Ϣ�ڲ�ѯ" << endl;
            break;
        }
        cout << "��ѡ���ѯ��ʽ" << endl;
        caidan();
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
            cout << "�������ѯѧ��ѧ�ţ�";
            cin >> id;
            cout << "���ڲ���" << endl;
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
                        cout << "���޴���" << endl;
                        break;
                    }
                }
            }
            system("pause");
            system("cls");
            break;
        case 2:
            cout << "�������ѯѧ��������";
            cin >> name;
            cout << "���ڲ���" << endl;
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
                        cout << "���޴���" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n > 1)
                cout << "����" << n << "��ѧ������Ϊ" << name << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            cout << "������Ҫ��ѯ���Ա�";
            while (1)
            {
                cin >> sex;
                m = panxing(sex);
                if (m == 0)
                {
                    cout << "������'��'��������'Ů'" << endl;
                    cout << "�������Ա�" << endl;
                    continue;
                }
                else
                    break;
            }
            cout << "���ڲ���" << endl;
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
                        cout << "û�д��Ա��ѧ��" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << sex << "�ܹ���" << n << "��" << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            cout << "������Ҫ��ѯ��רҵ��";
            cin >> major;
            cout << "���ڲ���" << endl;
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
                        cout << "û�д�רҵ��ѧ��" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << major << "רҵ����" << n << "��ѧ��" << endl;
            system("pause");
            system("cls");
            break;
        case 5:
            cout << "������Ҫ��ѯ�ĳ������ڣ�";
            cin >> chusheng;
            cout << "���ڲ���" << endl;
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
                        cout << "û�д�ʱ������ѧ��" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "��" << chusheng << "������ѧ����" << n << "��" << endl;
            system("pause");
            system("cls");
            break;
        case 6:
            cout << "������Ҫ��ѯ�ļ�ͥ��ַ��";
            cin >> dizhi;
            cout << "���ڲ���" << endl;
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
                        cout << "û�м�ͥ��ַ�ڴ˵ص�ѧ��" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "����" << n << "��ѧ������" << dizhi << endl;
            system("pause");
            system("cls");
            break;
        case 7:
            cout << "������Ҫ��ѯ��Ӣ��ɼ���";
            cin >> achievement;
            cout << "���ڲ���" << endl;
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
                        cout << "û������ɼ���ѧ��" << endl;
                        break;
                    }
                    if (p == NULL && n != 0)
                        break;
                }
            }
            if (n != 0)
                cout << "����" << n << "��ѧ��Ӣ��ɼ�Ϊ" << achievement << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "�������,����������";
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
    cout << "������Ҫ�޸�ѧ����ѧ�ţ�" << endl;
    cin >> id;
    cout << "�������������Եȡ�����";
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
                cout << "��������Ҫ�޸ĵ���Ϣ" << endl;
                caidan();
                cin >> i;
                system("cls");
                switch (i)
                {
                case 0:
                    cout << "�����˳�����" << endl;
                    jindu();
                    system("cls");
                    cout << "�˳��ɹ�" << endl;
                    Sleep(1000);
                    break;
                case 1:
                    cout << "�������޸ĵ�ѧ�ţ�";
                    cin >> p->id;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 2:
                    cout << "�������޸ĺ�����֣�";
                    cin >> p->name;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 3:
                    cout << "�������޸ĺ���Ա�";
                    while (1)
                    {
                        cin >> p->sex;
                        m = panxing(p->sex);
                        if (m == 0)
                        {
                            cout << "������'��'��������'Ů'" << endl;
                            continue;
                        }
                        else
                            break;
                    }
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 4:
                    cout << "�������޸ĺ��רҵ��";
                    cin >> p->major;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 5:
                    cout << "�������޸ĺ�ĳ������ڣ�";
                    cin >> p->chusheng;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 6:
                    cout << "�������޸ĺ�ļ�ͥ��ַ��";
                    cin >> p->dizhi;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                case 7:
                    cout << "�������޸ĺ��Ӣ��ɼ���";
                    cin >> p->achievement;
                    cout << "�����޸�" << endl;
                    jindu();
                    system("cls");
                    cout << "�޸ĳɹ�" << endl;
                    Sleep(1000);
                    system("cls");
                    break;
                default:
                    cout << "�������,����������";
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
                cout << "û�д�ѧ��" << endl;
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
        string i = "��";
        string j = "Ů";
        if (!strcmp(p->sex.c_str(), j.c_str()))
            girl++;
        if (!strcmp(p->sex.c_str(), i.c_str()))
            boy++;
        peo++;
        dayin(p);
        p = p->next;
    }
    cout << "ѧ���ܹ��У�" << peo << endl;
    cout << "�����ܹ��У�" << boy << endl;
    cout << "Ů���ܹ��У�" << girl << endl;
}
void Stu::delet()
{
    STU* a = head->next;
    STU* b = head;
    string id;
    int c = 0;
    cout << "������Ҫɾ��ѧ����ѧ�ţ�";
    cin >> id;
    while (a)
    {
        if (!strcmp(a->id.c_str(), id.c_str()))
        {
            cout << "�Ƿ�ȷ��ɾ����ѧ��" << endl;
            cout << "ȷ������'1'��ȡ������'0'" << endl;
            cout << "�����룺";
            cin >> c;
            if (c == 0)
                break;
            b->next = a->next;
            delete a;
            cout << "����ɾ�������Եȡ�����" << endl;
            jindu();
            system("cls");
            cout << "ɾ���ɹ�" << endl;
            break;
        }
        else
        {
            a = a->next;
            b = b->next;
            if (a == NULL)
            {
                cout << "û�д�ѧ��" << endl;
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

    cout << "��Ӣ��ɼ���������" << endl;
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