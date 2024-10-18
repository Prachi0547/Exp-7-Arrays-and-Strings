#include <iostream>
#include <vector> // Include vector library
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n); // Declare a vector of size n

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Read elements into the vector
    }

    cout << "The array elements are:";
    for (int i : a) {
        cout << " " << i; // Display elements
    }
    cout << endl; // New line at the end

    return 0;
}

