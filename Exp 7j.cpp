#include <iostream>
#include <string> // Include string library for string operations
using namespace std;

int main()
{
    string str1; // Variable to hold the input string
    char a; // Variable to hold the letter to search for
    int count = 0; // Counter for occurrences of the letter

    // Prompt user for a string
    cout << "Enter a string: " << endl;
    getline(cin, str1); // Use getline to allow spaces in the string

    // Prompt user for the letter to search
    cout << "Enter a letter to search: " << endl;
    cin >> a;

    a = tolower(a); // Convert the letter to lowercase for case-insensitive comparison

    // Iterate through each character in the string
    for (char c:str1)
    {
        // Compare lowercase versions of characters
        if (tolower(c) == a)
        {
            count++; // Increment count if there's a match
        }
    }

    // Output the result
    cout << "The letter '" << a << "' appears " << count << " times in the string." << endl;

    return 0; // Indicate that the program ended successfully
}

