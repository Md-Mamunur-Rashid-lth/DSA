#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Print array elements
    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Taking user input to modify array elements
    cout << "Enter 5 new values: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Displaying the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
