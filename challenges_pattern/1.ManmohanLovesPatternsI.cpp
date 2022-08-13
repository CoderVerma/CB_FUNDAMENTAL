/*
Problem Name: Manmohan Loves Patterns - I 
Problem Difficulty: 1
Problem Constraints: N<=1000
Problem Description:
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed. 

1  
11  
111   
1001   
11111  
100001  


Input Format: Single number N.
Sample Input: 6
Output Format: Pattern corresponding to N.
Sample Output: 1 
11
111 
1001 
11111
100001



=====Solution=====*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0 || i==2)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"1";
            }
            cout<<endl;
        }
        else if(i%2==0 && i!=2)
        {
            for(k=1;k<=i;k++)
            {
                if(k==1 || k==i)
                cout<<"1";
                else 
                cout<<"0";
            }
            cout<<endl;
        }
    }
}
