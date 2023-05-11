//2023.05.11
#include <iostream>
int main(){
    using namespace std;

    int higgens = 5;
    int *pt = &higgens;
    cout << "Value of higgens = " << higgens
        << "; Address of &higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
        << "; Value of pt = " << pt << endl;

    long * fellow;
    * fellow = 223323;
    cout << "Value of *fellow = " << *fellow
        << "; Address of fellow = " << fellow
        << endl;

    return 0;
}
