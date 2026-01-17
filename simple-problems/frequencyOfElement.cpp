#include <iostream>
using namespace std;

void frequencyOfElement(int arr[], int size) {
    bool visited[size] = {false};
    
    for(int i = 0; i < size; i++) {
        if(visited[i]) continue;
        
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " Count: " << count << endl;
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 200, 1, 2, 1, 2};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    frequencyOfElement(arr, size);

    return 0;
}
