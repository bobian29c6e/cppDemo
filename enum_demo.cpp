// 2023.05.10

#include <iostream>

int main(){
    using namespace std;
    //定义枚举量
    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    enum bits {one = 1, two = 2, four = 4, eight = 8};
    enum bigstep {first, second = 100, third};      //first = 0, second = 100, third = 101
    enum {zero, null = 0, one1, one2 = 1};          //zero = 0, null = 0, one1 = 1, one2 = 1

    spectrum band;
    band = blue;
    cout << band << endl;
    band = orange;
    cout << band << endl;
    //++band;     //invalid
    //band = orange + red;    //invalid
    int color = blue;
    cout << color << endl;
    //band = 3;     //invalid
    color = 3 + red;
    cout << color << endl;
    //band = ren + orange;   //invalid

    bits myflag;
    myflag = bits(6);   //将整数型的6转换为bits类型
    cout << myflag << endl;

    return 0;
}
