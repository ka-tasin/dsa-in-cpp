#include <iostream>
#include<map>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      cout << arr[i];
    }
    
    map<int, int> map;
    
    for(int i = 0; i < n; i++) {
      map[arr[i]]++;
    }
    
    int q; 
    cin >> q;
    
    while(q--) {
      int num;
      cin >> num;
      cout << map[num] << endl;
    }
}
