#include <iostream>
using namespace std;

int fibonacciRecursion(int n) {
    if(n <= 0) return 0;  
    if(n == 1) return 1;      
    return fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2);
}

int main() {
    cout << fibonacciRecursion(5);

    return 0;
}
