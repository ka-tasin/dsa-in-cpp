#include <iostream>
using namespace std;

int main() {
    int a = 13;
    int *ptr = &a;
    int **ptr_to_ptr = &ptr;
    
    cout << ptr << endl;
    cout << ptr_to_ptr;
}
