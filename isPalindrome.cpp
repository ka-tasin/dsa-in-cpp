#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int reversed = 0, original = n;
   
    
    while(n != 0) {
        reversed = reversed * 10 + (n % 10);
        n/=10;
    }
    
    return reversed == original;
      
}

int main() {
    cout << (isPalindrome(123214) ? "Palindrome" : "Not palindrome" );
}

// #include <iostream>
// using namespace std;

// void isPalindrome(int n) {
//     int reversed = 0;
//     int original = n;
    
//     while(n != 0) {
//         int digit = n % 10;
//         reversed = reversed * 10 + digit;
//         n/=10;
//     }
    
//     if(reversed == original) {
//         cout << "This is palindrome";
//     }else {
//         cout << "This is not palindrome";
//     }
// }

// int main() {
//     isPalindrome(23456);
// }
