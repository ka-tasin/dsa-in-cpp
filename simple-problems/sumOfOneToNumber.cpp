#include <iostream>
using namespace std;

int sumOfOneToNumber(int a) {
    int result = 0;
    for(int i = 1; i <= a; i++){
        result = result + i;
    }
    return result;
}

int main() {
    cout << sumOfOneToNumber(12);
}
