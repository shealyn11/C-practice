//
// Created by Shealyn on 2024/9/28.
//
#include "iostream"
#include "windows.h"
using namespace std;

#define  FAT_BMI 28
#define J2C_RATE 4.19 //焦耳卡路里的比率
//符号常量：#define 名称 （标识符） 常量值，符号常量定义在代码头部
//相当于预设了一个常量
int main() {

    SetConsoleOutputCP(CP_UTF8);//导入windows.h库换成utf8编码以输出中文
    cout<<FAT_BMI<<endl;
    cout<<"焦耳卡路里需要除以"<< J2C_RATE << endl;


    return 0;
}