#include <iostream>
#include<string>
using namespace std;

int main() 
{
    string s;
    int sSize;
    
    cin >> sSize;
    for(int i = 0; i < sSize; i++) {
      cin >> s[i];
    }
    
    int hash[26] = {0};
    for(int i = 0; i < sSize; i++) {
      hash[s[i] -'a']++;
    }
    
    int q;
    cin >> q;
    
    while(q>0) {
      char c;
      cin >> c;
      
      cout << hash[c -'a'] << endl;
      q--;
    }
    
    
}
