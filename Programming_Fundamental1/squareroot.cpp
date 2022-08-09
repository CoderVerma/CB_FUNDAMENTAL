#include<iostream>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;

    float ans=0;
    float inc=1.0;

    for(int times=0;times<=p;times++)
    {
        while(ans*ans<=n)
        {
            ans+=inc;
        }
        ans=ans-inc;
        inc/=10;
    }
    cout<<ans<<endl;
}