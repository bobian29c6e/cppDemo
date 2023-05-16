//2023.05.16

// '''
// 不要使用delete释放不是new分配的内存空间
// 不要使用delete释放同一个内存空间两次
// 如果使用new[]为数组分配内存空间，应使用delete[]释放内存空间
// 如果使用new为单个变量分配内存空间，应使用delete释放内存空间
// 对空指针使用delete是安全的

// 为数组分配内存的通用格式:
// type_name * pointer_name = new type_name [number_of_elements];
// '''


#include <iostream>
int main(){
    using namespace std;

    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is" << p3[1] << ".\n";

    //指针加1，指向下一个元素
    p3 += 1;
    cout << "Now p3[0] is" << p3[0] << "and ";
    cout << "p3[1] is" << p3[1] << ".\n";

    //指针减1，指向上一个元素
    p3 -=1;
    cout << "Now p3[0] is" << p3[0] << "and ";
    cout << "p3[1] is" << p3[1] << ".\n";

    delete [] p3;

    return 0;
}