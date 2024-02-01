#include <iostream>
using namespace std;

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void) {
    int n;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Get the array elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int x;

    // Get the element to search from the user
    cout << "Enter the element to search: ";
    cin >> x;

    // Function call
    int result = search(arr, n, x);

    // Display the result
    (result == -1) ? 
     cout << "Element is not present in array" : 
     cout << "Element is present at index " << result;

    return 0;
}
