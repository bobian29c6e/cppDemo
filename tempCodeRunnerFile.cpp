#include <iostream>

int main(){
    using namespace std;
    //定义枚举量
    enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
    spectrum band;

    band = blue;
    cout << band << endl;

    band = orange;
    cout << band << endl;
    //++band;     //报错
    //band = orange + red;    //报错

    int color = blue;
    cout << color << endl;
//    band = 3;     //报错
    color = 3 + red;
    cout << color << endl;
    return 0;
}