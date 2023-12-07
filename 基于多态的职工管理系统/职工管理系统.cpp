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
    //worker = new Employee(1,"张三", 1);
    //worker->showInfo();
    //delete worker;

    //worker = new Manager(2, "李四", 2);
    //worker->showInfo();
    //delete worker;

    //worker = new Boss(3, "王五", 3);
    //worker->showInfo();
    //delete worker;

    //实例化管理者对象
    WorkerManager wm;
    int choice = 0;
    while (true) {

        wm.Show_Menu();

        cout << "请输入您的选择：" << endl;
        cin >> choice;//用户进行选择
        switch (choice)
        {
        case 0:wm.ExitSystem();//退出系统
            break;
        case 1:wm.Add_Emp();//增加职工
            break;
        case 2:wm.Show_Emp();//显示职工
            break;
        case 3:wm.Del_Emp();//删除职工
            break;
        case 4:wm.Mod_Emp();//修改职工
            break;
        case 5:wm.Find_Emp(); //查找职工
            break;
        case 6:wm.Sort_Emp(); //排序职工
            break;
        case 7:wm.Clean_Emp(); //清空职工
            break;
        default:
            system("cls"); //清屏
            break;
        }
    }
    

    system("pause"); //按任意键继续
    system("cls"); //清屏
    return 0;
}
