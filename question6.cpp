/*
1) Given a function n, write a function that generates and prints all binary numbers with decimal values
from 1 to n.
Input: n = 2
Output: 1, 10
*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n ; 
    cin >> n ;
    
    for(int i = 1 ; i <= n ; i++)
    {
        string binary ="" ;
        int num = i ; 
        while(num > 0)
        {   
        int remainder = num%2 ;

        if(remainder==0)
        {
            binary += "0" ;
        }
        else{
            binary += "1" ;
        }
        num=num/2;
        }
        reverse(binary.begin(),binary.end()) ;
        cout << binary << " " ;
    }
    
    
return 0 ;
}