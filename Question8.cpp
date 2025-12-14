/*
Write a program to count the total number of distinct elements in 
an array of length n.
*/
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector <int> p = {4,2,5,2,7,8,4,1,0};

    int count = 0; 
    for (int i = 0 ; i < p.size() ; i++)
    {
        for (int j = i+1 ; j < p.size() ; j++)
        {
            if(p.at(i)==p.at(j))
            {
                p.erase(p.begin()+j) ;
                j-- ;
            }
        }
    }
    cout << "total number of elements is " << p.size() << endl ;
    return 0;
}
