#include <iostream>
using namespace std;
#include"wokerManager.h"

//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"

int main()
{

    //Worker* worker = NULL;
    //worker = new Employee(1,"����", 1);
    //worker->showInfo();
    //delete worker;

    //worker = new Manager(2, "����", 2);
    //worker->showInfo();
    //delete worker;

    //worker = new Boss(3, "����", 3);
    //worker->showInfo();
    //delete worker;

    //ʵ���������߶���
    WorkerManager wm;
    int choice = 0;
    while (true) {

        wm.Show_Menu();

        cout << "����������ѡ��" << endl;
        cin >> choice;//�û�����ѡ��
        switch (choice)
        {
        case 0:wm.ExitSystem();//�˳�ϵͳ
            break;
        case 1:wm.Add_Emp();//����ְ��
            break;
        case 2:wm.Show_Emp();//��ʾְ��
            break;
        case 3:wm.Del_Emp();//ɾ��ְ��
            break;
        case 4:wm.Mod_Emp();//�޸�ְ��
            break;
        case 5:wm.Find_Emp(); //����ְ��
            break;
        case 6:wm.Sort_Emp(); //����ְ��
            break;
        case 7:wm.Clean_Emp(); //���ְ��
            break;
        default:
            system("cls"); //����
            break;
        }
    }
    

    system("pause"); //�����������
    system("cls"); //����
    return 0;
}
