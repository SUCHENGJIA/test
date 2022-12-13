//
// Created by scj20 on 2022/11/20.
//

#ifndef ADDRESSBOOKMANAGEMENTSYSTEM_ADDRESSBOOK_H
#define ADDRESSBOOKMANAGEMENTSYSTEM_ADDRESSBOOK_H
#include <iostream>
#include <string>
#define MAX 1000
using namespace std;
//联系人的详细信息
struct Person {
    //姓名
    string p_name;
    //性别
    int p_sex;
    //年龄
    int p_age;
    //联系电话
    long p_phone;
    //家庭住址
    string p_address;
};
//通讯录
struct AddressBook {
    struct Person personArray[MAX];
    int p_size;//记录当前通讯录中已经存在的人的个数
};
//菜单导航
void showMenu();
//添加联系人
void addPerson(AddressBook *abs);
//显示联系人
void showPerson();
//删除联系人
void deletePerson();
//查找联系人
void findPerson();
//修改联系人
void modifyPerson();
//清空联系人
void clearPerson();


#endif //ADDRESSBOOKMANAGEMENTSYSTEM_ADDRESSBOOK_H
