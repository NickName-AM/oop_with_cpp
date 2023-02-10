#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int key, int index = 0) {
    if (size == 0) return -1;

    if (arr[size-1] == key) return index + size - 1;
    
    return linear_search(arr, size-1, key, index);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int index = linear_search(arr, size, key);
    if (index != -1) 
        cout << key << " is at index " << index << "." << endl;
    else
        cout << key << " not found." << endl;

    return 0;
}
