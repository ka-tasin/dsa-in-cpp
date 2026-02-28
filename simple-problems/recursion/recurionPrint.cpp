#include <iostream>
using namespace std;

void recursionPrint(int n) {
    if(n <= 0) return;
    
    recursionPrint(n-1);
    cout << n;
}

int main() {
    recursionPrint(5);

    return 0;
}
