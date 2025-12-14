/*

Write a program interleave the first half of the queue with second half.
Sample I/P: 4 7 11      20 5 9 Sample O/P: 4 20 7 5 11 9

*/
#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void find(queue<int>A , queue<int>B)
{
    vector<int> answer ;
    int n = max(A.size(),B.size()) ;
    for(int i = 0 ; i < n; i++)
    {
        if(!A.empty()&&!B.empty())
        {
            int j = A.front() ;
            answer.push_back(j) ;
            int p = B.front() ;
            answer.push_back(p) ;
            A.pop();
            B.pop();
        }
        else if(A.empty()&&!B.empty())
        {
            int p = B.front() ;
            answer.push_back(p) ;
            B.pop();
        }
        else if(B.empty()&&!A.empty())
        {
            int p = A.front() ;
            answer.push_back(p) ;
            A.pop();
        }
        
    }
    for(int i = 0 ; i < answer.size();i++)
    {
        cout<< answer[i] << " " ;
    }
}
int main()
{
    queue<int> A ;
    A.push(4) ;
    A.push(7) ; 
    A.push(11) ;
    queue<int> B ;
    B.push(20) ;
    B.push(5) ; 
    B.push(9) ;
    find(A , B) ;
    
return 0 ;
}