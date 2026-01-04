#include <iostream>
using namespace std;

bool findPrimeNumber(int n) {
    if(n <= 1) return false;
   
    
    for(int i = 2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    bool result = findPrimeNumber(71);
    if(result ==  true) {
        cout << "The number is prime";
    }else {
        cout << "The number is not prime";
    }
}
