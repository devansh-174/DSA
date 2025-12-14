/*
(e) Write a program to convert a character from uppercase to lowercase.         
*/
#include <iostream>
#include<string>
using namespace std;
int main()
{
     string str = "JTRTJYLX" ;
     for (int i = 0 ; i < str.length() ; i++)
     {
        int k = (int)str[i] ;
        str[i] = k + 32;
        cout<< str[i] ;
     }
return 0 ;
}