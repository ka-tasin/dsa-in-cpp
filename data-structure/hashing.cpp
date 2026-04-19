#include <iostream>
using namespace std;

/*
    5
    1 2 4 1 8
    5
    2
    4
    1
    8
    12
*/

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int hash[13] = {0};
    
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q;
    while(q>0) {
        int n;
        cin >> n;
        
        cout << hash[n] << endl;
        q--;
    }

    return 0;
}
