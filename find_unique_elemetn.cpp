#include <iostream>
using namespace std;

int findUniqueElement(int arr[], int n) {
    int uniqueElement = 0;

    // XOR all elements
    for (int i = 0; i < n; i++) {
        uniqueElement ^= arr[i];
    }

    return uniqueElement;
}

int main() {
    int arr[] = {4, 3, 2, 4, 1, 3, 2};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    int result = findUniqueElement(arr, n);

    cout << "The element that occurs only once is: " << result << endl;

    return 0;
}
