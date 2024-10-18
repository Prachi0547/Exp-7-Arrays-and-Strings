# Exp-7-Arrays-and-Strings
# Aim
Write a c++ program:
1. To create and display array using for loop.
2. To reverse the elements of an array.
3. To find the sum and average of a given array.
4. To find the minimum and maximum element from the given array.
5. To search the position of element, number of time it is occuring in an array.
6. To take string input and print it.
7. To take two strings and concatenate those.
8. To take a string and reverse it.
9. To check whether the string entered is palindrome.
10. To count the number of occurrences of a letter in the given string.
# Software Used
VS Code and c++ online compiler.
# Theory
Arrays and strings are fundamental data structures in C++ that allow programmers to handle collections of data efficiently.

An array is a collection of elements of the same type, stored in contiguous memory locations. The size of an array is fixed at the time of declaration.

A string in C++ is an array of characters terminated by a null character ('\0'). C++ also provides the std::string class, which offers more flexibility.

Arrays provide a simple way to handle collections of data, while strings facilitate character manipulation.

# Program Code
```
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
```
```
//Reverse Array

#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements:";
    cin >> n;
    int a[n];
    cout << "Enter array elements:";
    for ( int i =0; i <n ; i++ )
    { cin >>a[i];
     
    }
       for (j = n-1 ; j>=0; j--)
     {
        cout <<" "<< a[j];
     } 
    return 0;
}
```
```
//Sum and Average of a given array

#include<iostream>
using namespace std;
int main()
{
     int n, i, j;
     float avg, s = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
for (j= 0 ; j<n; j++)
{
    s = a[j]+s;
}
avg = s/n;
cout << "The sum of elements of the givne array is: "<<s<<endl;
cout << "The average of the given array is: "<< avg<<endl;
return 0;
}
```
```
//Minimum and Maximum element

#include<iostream>
using namespace std;
int main()
{
     int n, i, j, max, min;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
max = a[0];
min = a[0];
for (j= 1 ; j<n; j++)
{
 if (max<a[j])

 {
    max = a [j];
 }
 if (min > a[j])
 {
    min = a[j];
 }
}
cout <<"The maximum element in the given array is: "<<max<<endl;
cout << "The minimum element in the array is: "<<min<<endl;
return 0;
}
```
```
//Search Element

#include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
```
```
//String input

#include <iostream>
using namespace std;
int main()
{
    char s[]= "Hello World";
    cout<<s<<endl;
    return 0;
}
```
```
// Concatenation

#include<iostream>
using namespace std;
int main() 
{
    string name("Prachi");
    string surname("Sharma");
    name.append(surname);
    cout<<name<<endl;
}
```
```
//Reverse String

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a= "World";
reverse(a.begin(), a.end());
cout<<"Reverse string is:"<<a<<endl;
return 0;
}
```
```
//Palindrome

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cout << "Enter a string to check: ";
    cin>>s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if (s2==s1) 
    {
        cout<<"Yes! It is a palindrome";
    }
    else cout<<"No! It is not a palindrome";
}
```
```
//Occurrences of a letter

#include<iostream>
using namespace std;
int main()
{
    string str1;
    char a;
    int count =0 ;
    cout<<"Enter a string: "<<endl;
    cin>>str1;
    cout<<"Enter a letter to search: "<<endl;
    cin>>a;
    a = tolower(a);
    for(char c : str1)
    {
if (tolower(c)== a)
{
    count++;
}
    }
    cout<<"The letter "<<a<<" appears "<<count<<" times in the string.  "<<endl;

    return 0;
}
```
# Output
### Array
![image](https://github.com/user-attachments/assets/21c419bf-12c0-488c-ae51-5ba2facea034)
### Reverse Array
![image](https://github.com/user-attachments/assets/4e63f785-9f74-4670-b12b-09b0e0eff793)
### Sum and Average of Array
![image](https://github.com/user-attachments/assets/134fb03c-b64e-4e73-8520-b6f3d08f1af4)
### Minimum and Maximum element
![image](https://github.com/user-attachments/assets/7933aa41-29f0-4fde-b95d-73ba49cf40e6)
### Search Element
![image](https://github.com/user-attachments/assets/6b203300-20e1-472d-82e6-2b12febe99e5)
![image](https://github.com/user-attachments/assets/f3d78e9c-bf27-431e-a657-48bc1d0cea5d)
### String Input
![image](https://github.com/user-attachments/assets/f98043ed-2211-464c-a2aa-f6a34625dcc5)
### Concatenation
![image](https://github.com/user-attachments/assets/16baffa5-7231-4181-90ba-1af3086941bd)
### Reverse String
![image](https://github.com/user-attachments/assets/89267969-ab6e-403f-ac3b-583f98dd8c16)
### Palindrome
![image](https://github.com/user-attachments/assets/9d1986ae-7208-4aa4-8fe7-e507024b523e)
### Occurrences of a letter
![image](https://github.com/user-attachments/assets/a2f0c45e-0396-4f83-95f1-ba49b8cbb382)
# Conclusion
We learnt to create an array and operate it.

We learnt to search element in the array and getting the sum and average of the elements.

We learnt to do concatenation of strings, making and checking palindromes, reversing the string in c++.









