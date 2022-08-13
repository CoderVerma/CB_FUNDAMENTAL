/*
Problem Name: Fibonacci Pattern (Pattern 4)
Problem Difficulty: None
Problem Constraints: 0 < N < 100
Problem Description:
Take N (number of rows), print the following pattern (for N = 4)  
0  
1    1  
2    3    5  
8   13  21  34
Input Format: 
Sample Input: 4
Output Format: 
Sample Output: 0 
1    1 
2    3     5 
8   13    21    34



=====Solution=====
#include <iostream>
using namespace std;
int main ()
{
    int i, a = 0, b = 1, sum = 0, t, j;
    int n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
       {
           cout << a << " ";
        sum = a + b;
        t = b;
        b = sum;
        a = t;
       }
       cout << endl;
    }
    return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,sum=0;
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;}
        cout<<endl;
    }
    
}