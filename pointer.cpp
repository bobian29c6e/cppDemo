//2023.05.10

#include <iostream>
int main(){
    using namespace std;
    int updates = 6;
    int *p_updates;
    p_updates = &updates;
    cout << "updates = " << updates
        << ", *p_dates = " << *p_updates << endl;

    cout << "&updates = " << &updates
        << ",p_updates = " << p_updates << endl;

    *p_updates += 1;
    cout << "updates = " << updates
        << "*p_updates = " << *p_updates << endl;
    return 0;
}