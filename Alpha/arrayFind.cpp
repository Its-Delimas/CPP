#include <iostream>
using namespace std;

// Function that searches for the value 42 in the array.
// Parameters:
//   a[]  - the array of integers
//   n    - the number of valid elements in the array
// Returns:
//   true  if 42 is found in the array
//   false otherwise
bool findArray(int a[], int n) {
  // Loop through every element from index 0 to n-1
  for (int i = 0; i < n; i++) {
    // Check if the current element is 42
    if (a[i] == 42) {
      // As soon as we find 42, we return true
      return true;
    }
  }
  // If we finish the loop without finding 42, return false
  return false;
}

int main() {
  int val; // will store the size of the array

  cout << "Enter the size of the array: ";
  cin >> val; // read size from the user

  int arr[100]; // array with max capacity 100

  cout << "Enter " << val << " values: " << endl;
  // Fill the array with 'val' integers
  for (int i = 0; i < val; i++) {
    cin >> arr[i];
  }

  // Call the function and store the result
  bool found = findArray(arr, val);

  // Print result based on the boolean value
  if (found) {
    cout << "42 is present in the array" << endl;
  } else {
    cout << "42 NOT found" << endl;
  }

  return 0;
}