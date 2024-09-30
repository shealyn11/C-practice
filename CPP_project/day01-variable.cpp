//
// Created by Shealyn on 2024/9/28.
//
#include "iostream"
#include "windows.h"
using namespace std;

int main() {

    SetConsoleOutputCP(CP_UTF8);//导入windows.h库换成utf8编码以输出中文

    int age;
    float height;
    char gender;
    string name;//字符串类型

    age = 21;
    height = 180.5;
    gender = 'm';
    name = "小明";



    cout << name << "的年龄是" << age << endl;
    cout << name << "的性别是" << gender << endl;
    cout << name << "的身高是" << height << endl;





    return 0;
}