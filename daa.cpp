#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (arr[mid] == target) {
            return mid; // Element found at index 'mid'
        } 
        else if (arr[mid] < target) {
            left = mid + 1; // Narrow search to the right half
        } 
        else {
            right = mid - 1; // Narrow search to the left half
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Size of array
    int target;

    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
