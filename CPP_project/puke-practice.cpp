//
// Created by Shealyn on 2024/9/28.
//

#include "iostream"
#include "windows.h"
#include "random"//取随机数库

using namespace std;

/*需求(猜扑克牌):
    随机产出3份信息:
        第一份信息:1~10的数字，代表扑克牌1~10
        第二份信息:字符串，红色或黑色，代表扑克牌的花色
        第三份信息:字符串，如果是红色产出红桃或方块，如果是黑色产出黑桃或梅花
案例要求:
    通过嵌套判断，并结合判断语句猜测上述信息，如
    先猜数字，成功后猜颜色，再成功猜测具体的花型
*/

int get_random_num(int min,int max){

      //创建一个随机数生成器，可能根据 硬件随机数生成器 或者 操作系统接口
    random_device rd;//random_device提供种子
    mt19937 gen(rd());//mt19937 是伪随机数生成器，效率高且周期长。


    //定义一个均匀分布的整数范围
    uniform_int_distribution<int> dis(min,max);//包含min和max


    //生成一个随机数并输出
    int random_num = dis(gen);//dis是函数变量名，gen是上面随机的得到的数字
    return random_num;

}


int main() {
    SetConsoleOutputCP(CP_UTF8);//导入windows.h库换成utf8编码以输出中文

    int num = get_random_num(1,10);
    int PlayerNum;//定义变量
    while(1) {
        cout<<"请猜一个1-10的数字：\n"<<endl;
        cin >> PlayerNum;//cin可以键盘录入更改变量，类似scanf  //算法速度慢于scanf
        //cout << str << endl;
        if(PlayerNum == num){
            cout<<"数字猜对啦！\n"<<endl;
            break;
        }else{
            cout << "猜错了，再试一次\n" << endl;
        }
    }


    cout<<"请猜一个颜色\n"<<endl;
    cout<<"1.红色 2.黑色\n"<<endl;
    int PlayerColor;
    cin >> PlayerColor;
    string playerChoice = (PlayerColor == 1) ? "红色" : "黑色";
    string color = get_random_num(1,2) == 1 ? "红色" : "黑色" ;
    if(playerChoice == color){
        cout << "恭喜，你猜对了！" << endl;
    }else {
        cout << "很遗憾，你猜错了。" << endl;
        return 0;//猜错结束游戏
    }


    int PlayerSuit;//定义花色
    if(color == "红色"){
        cout<<"1.红桃 2.方块\n"<<endl;
        cin >> PlayerSuit;
        playerChoice = (PlayerSuit == 1) ? "红桃" : "方块";
        string suit = get_random_num(1,2) == 1 ? "红桃" : "方块" ;
        if(playerChoice == suit){
            cout << "恭喜，你猜对了！" << endl;
        }else {
            cout << "很遗憾，你猜错了。" << endl;
            return 0;//猜错结束游戏
        }

    }else{
        cout<<"1.黑桃 2.梅花\n"<<endl;
        cin >> PlayerSuit;
        playerChoice = (PlayerSuit == 1) ? "黑桃" : "梅花";
        string suit = get_random_num(1,2) == 1 ? "黑桃" : "梅花" ;
        if(playerChoice == suit){
            cout << "恭喜，你猜对了！" << endl;
        }else {
            cout << "很遗憾，你猜错了。" << endl;
            return 0;//猜错结束游戏
        }
    }
    return 0;
}