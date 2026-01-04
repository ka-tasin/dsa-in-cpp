#include <iostream>
using namespace std;

bool isArmstongNumber(int n) {
    int digitCount = 0, original = n, temp = n;
    int result = 0;
    
    while(n != 0) {
        digitCount++;
        n/=10;
    }
    
    for(int i = 1; i <= digitCount; i++){
        int digit = temp % 10;
        int digitPower = 1;
        for(int j = 1; j <= digitCount; j++){
            // cout << "digit before" << digit2 << endl;
            digitPower *= digit;
            // cout << "digit after" << digit2  << endl;
        }
        result += digitPower;
        // cout << "result" << result  << endl;
        temp /= 10;
    }
    return result == original;
}

int main() {
    cout << isArmstongNumber(1634);
}     
