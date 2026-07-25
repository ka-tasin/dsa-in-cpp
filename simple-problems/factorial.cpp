#include <iostream>
using namespace std;

int factorial(int a) {
    int result = 1;
    for(int i = 1; i <= a; i++){
        result = result * i;
    }
    return result;
}

int main() {
    cout << factorial(9);
}
