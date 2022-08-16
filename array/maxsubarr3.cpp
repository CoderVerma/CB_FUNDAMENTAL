#include<iostream>
#include<climits>
using namespace std;

void subarr(int a[],int n)
{
    int ms=0,cs=0;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        cs=0;
        ms=max(ms,cs);
    }
    cout<<ms;
}

int main()
{
    int n;
    cin>>n;
    int a[1000];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    subarr(a,n);
}