#include <iostream>
using namespace std;

int main()
 {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];   // Array declaration
    int sum = 0;  // To store sum

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Add to sum
    }

    // Calculate average
    double average = (double)sum / n;

    // Display results
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
