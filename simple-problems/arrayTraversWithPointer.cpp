using namespace std;

int main() {
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int *ptr = arr;
    
    for(int i = 0; i < size; i++) {
        cout << "Address: " <<(ptr + i) << " Value: " << *(ptr + i) << endl;
       
    }

    return 0;
}
