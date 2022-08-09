/*Problem Name: Is Armstrong Number
Problem Difficulty: None
Problem Constraints: 0 < N < 1000000000
Problem Description:
Take the following as input.

A number  
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + .... 

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3 

Input Format: Single line input containing an integer
Sample Input: 371
Output Format: Print boolean output for each testcase. <br>
"true" if the given number is an Armstrong Number, else print "false".
Sample Output: true



=====Solution=====
#include <bits/stdc++.h>
using namespace std;

int fastPow(int a, int x)
{
    if (x == 0)
    {
        return 1;
    }
    int ans = 1;
    int k = 1;
    while (k <= x)
    {
        if (x & k)
        {
            ans = ans * a;
        }
        k <<= 1;
        a *= a;
    }
    return ans;
}

bool isArmstrong(int n)
{
    int noOfDigits = 0;
    int m = n;
    while (m)
    {
        noOfDigits++;
        m /= 10;
    }

    m = n;
    int sum = 0;
    while (m)
    {
        int r = m % 10;
        sum += fastPow(r, noOfDigits);
        m /= 10;
    }

    return n == sum;
}

int main()
{
    int n;
    cin >> n;

    cout << boolalpha << isArmstrong(n) << endl;

    return 0;
}*/

#include<iostream>
using namespace std;
int fastpow(int r,int nod)
{
    if(nod==0)
    return 1;
    int ans=1,k=1;

    while(k<=nod)
    {
        if(nod & k)
        {
            ans=ans*r;
        }
        k<<=1;
        r=r*r;
    }
    return ans;
}

bool isarmstrong(int n)
{
 int nod=0;
 int m=n;
 while(m)
 {
    nod++;
    m/=10;
 }   
 m=n;
 int sum=0;

 while(m)
 {
    int r=m%10;
    sum+=fastpow(r,nod);
    m/=10;
 }
 return n==sum;
}
int main()
{
    int n;cin>>n;
    cout<<boolalpha<<isarmstrong(n)<<endl;
}