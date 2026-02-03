#include <iostream>
using namespace std;
#include <cstring>

struct Student {
   int id;    
   char name[50];
   float marks;
};

int main() {
    Student s1;
    // s1.id = 1;
    // s1.marks = 90.5;
    // strcpy(s1.name, "Karim");
    s1 = {101, "John", 85.5};
    
    cout << s1.id << endl;
    cout << s1.name << endl;
    cout << s1.marks << endl;

    return 0;
}
