#include<iostream>
using namespace std;
int main()
{
   int n,sum,p;
    cin>>n;
    sum=0;p=1;

    while(n!=0)
    {
        int ld=n%10;
        sum=sum+ld*p;
        n/=10;
        p*=2;

    }
    cout<<sum;
}