#include <iostream>
using namespace std;

int factorialRecursion(int n) {
    if(n < 0) return 0;
    if(n <= 1) return 1;
    return n * factorialRecursion(n - 1);
}

int main() {
    cout << factorialRecursion(1);

    return 0;
}
