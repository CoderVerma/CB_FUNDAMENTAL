#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val;

    for(int i=1;i<=n;i++)
    {
        val=(i%2==0?1:0);
        for(int cnt=1;cnt<=i;cnt++)
        {
            cout<<val;
            val=1-val;
        }
        cout<<endl;
    }
}