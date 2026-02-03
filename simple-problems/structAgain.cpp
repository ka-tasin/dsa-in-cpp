#include <iostream>
using namespace std;

struct Display {
    float area;
    float perimeter;
};

struct Rectangle {
   float length;    
   float width;
   
   float area() {
       return length * width;
   }
   
   float perimeter() {
       return 2 * (length + width);
   }
   
   Display display() {
       return {
           area(),
           perimeter()
       };
   }
};

int main() {
    Rectangle r1;
    r1.length = 1.3;
    r1.width = 3.4;
    
    Display result = r1.display();
    cout << result.area << endl;
    cout << result.perimeter;

    return 0;
}
