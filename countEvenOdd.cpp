#include <iostream>
using namespace std;

struct EvenOdd {
    int even;
    int odd;
};

EvenOdd countEvenOdd(int arr[], int size) {
    int even = 0, odd = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    
    return { even, odd };
}

int main() {
    int arr[] = { 1, 3, 5, 3, 5, 7, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    EvenOdd result = countEvenOdd(arr, size);
    cout << "Even Count: " << result.even << endl;
    cout << "Odd Count: " << result.odd;

    return 0;
}
