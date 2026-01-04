#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int temp1 = 0, temp2 = 1, result = 0;
    
    if(n >= 0) cout << temp1 << " ";
    if(n >= 2) cout << temp2 << " ";
   
     
    for(int i = 3; i <= n; i++) {
        result = temp1 + temp2;
        cout << result << " ";
        temp1 = temp2;
        temp2 = result;    
    }
}

int main() {
    printFibonacci(10);
}
