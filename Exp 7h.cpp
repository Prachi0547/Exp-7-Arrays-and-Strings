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
