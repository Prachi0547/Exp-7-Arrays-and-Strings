//Array

#include <iostream>
#include <vector> 
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n); 
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    cout << "The array elements are:";
    for (int i : a) {
        cout << " " << i; 
    }
    cout << endl; 
    return 0;
}
