#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int no;
    int ans=0;

    for(int i=1;i<=n;i++)
    {
        cin>>no;
        ans^=no;
    }
    cout<<ans;
}