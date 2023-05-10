//同时完成定义结构和创建结构
#include <iostream>
//结构模板
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    //结构1
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;
    //将bouquet赋值给choice
    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}