#include<iostream>
using namespace std;
/*
       1
      232
     34534
    4567654
    */   
int main()
{
 int n;cin>>n;
 for(int i=1;i<=n;i++)
 {
    for(int sp=1;sp<=n-i;sp++)
    {
        cout<<" ";
    }
    int val=i;

    for(int cnt=1;cnt<=i;cnt++)
    {
        cout<<val;
        val=val+1;
    }

    val=val-2;

    for(int cnt=1;cnt<=i-1;cnt++)
    {
        cout<<val;
        val--;
    }
    cout<<endl;
 }
}