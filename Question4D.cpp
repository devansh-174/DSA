/*
(d) Write a program to sort the strings in alphabetical order.
*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str = "dfskaf" ;
    sort(str.begin() , str.end() ) ;
    for (int i = 0 ; i < str.length() ; i++)
    {
        cout << str[i] ;
    }
return 0 ;
}
/*
other way i was thinking was to just convert each value to asccii and then. 
apply any sort in order to arrange in their increasing value and then print it 
*/