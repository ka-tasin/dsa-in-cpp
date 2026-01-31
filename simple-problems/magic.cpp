#include <iostream>
using namespace std;

int main() {
   int t = 8;
   int *num = &t;
   cout<<num << endl;
   cout<<*num << endl;
   cout<<&num << endl;
   cout<<*&num << endl;
   cout<<**&num << endl;
 
   return 0;
}
