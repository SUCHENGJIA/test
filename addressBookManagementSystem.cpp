#include "addressBook.h"

int main() {
    int select = 0;
    AddressBook abs;
    abs.p_size = 0;
    while (true) {
        showMenu();
        cout << "请输入您需要进行的操作： ";
        cin >> select;
        switch (select) {
            case 1://添加联系人
                addPerson(&abs);
                break;
            case 2://显示联系人
                break;
            case 3://删除联系人
                break;
            case 4://查找联系人
                break;
            case 5://修改联系人
                break;
            case 6://清空联系人
                break;
            case 0://退出通讯录
                cout << "欢迎下次使用" << endl;
                return 0;
                break;
            default:
                break;
        }
    }
    return 0;
}
