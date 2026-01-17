#include <iostream>
using namespace std;

int main() {
    int a = 13, b = 2;
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
