#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking input for the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Taking input for the array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Finding the maximum element
    int maxElement = arr[0]; // Assume first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i]; // Update max if a larger value is found
        }
    }

    // Display the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
