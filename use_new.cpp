//2023.05.16

#include <iostream>
int main(){
    using namespace std;

    int nights = 1001;
    //指针变量pt指向一个int类型的内存空间
    int * pt = new int;
    //将nights的值赋值给pt指向的内存空间
    *pt = 1001;

    //输出nights的值，nights的地址，pt的值，pt的地址
    cout << "nights value = "
        << nights << ": location = " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
    cout <<  "location of pointer pt:" << &pt << endl;
    cout << endl;

    //指针变量pd指向一个double类型的内存空间
    double * pd = new double;
    //将10000001.0赋值给pd指向的内存空间
    *pd = 10000001.0;

    //输出pd指向的内存空间的值，pd的值，pd的地址
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << endl;

    //输出pt,pd的大小，pt,pd指向的内存空间的大小
    cout << "size of pt = " << sizeof pt;
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ":size of *pd = " << sizeof(*pd) << endl;

    //释放pt,pd指向的内存空间,delete只能释放new分配的内存空间
    delete pt;
    delete pd;

    return 0;
}