#include <iostream>
using namespace std;

int evenOrOdd(int a) {
    return a%2;
}

int main() {
    int num;
     cout << "Enter the number: ";
    cin >> num;
    int result = evenOrOdd(num);
    
    if(result == 1) {
        cout << "The number is odd.";
    }else {
         cout << "The number is even.";
    }
}
