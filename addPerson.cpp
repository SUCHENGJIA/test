//
// Created by scj20 on 2022/11/20.
//
#include "addressBook.h"
void addPerson(AddressBook *abs) {
    //判断通讯录人数是否满人了
    if (abs->p_size == 1000)
        cout << "对不起，您的通讯录已满，无法添加！" << endl;
        //return;
    else {
        cout << "请输入姓名：";
        string name;
        cin >> name;
        abs->personArray[abs->p_size].p_name = name;

        cout << "请输入性别（1：男，0：女）：";
        int sex = 1;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 0) {
                cin >> sex;
                abs->personArray[abs->p_size].p_sex = sex;
                break;
            }
            cout << "对不起，您输入的数据不合法！" << endl;
            cout << "请重新输入： ";
        }
        cout << "请输入年龄：";
        int age = 0;
        cin >> age;
        abs->personArray[abs->p_size].p_age = age;
        cout << "请输入联系电话： ";
        long phone;
        cin >> phone;
        abs->personArray[abs->p_size].p_phone = phone;
        cout << "请输入家庭住址：";
        string address;
        cin >> address;
        abs->personArray[abs->p_size].p_address = address;

        abs->p_size++;
        cout << "恭喜！" << name << "的联系方式添加成功。" << endl;
        system("cls");

    }


}