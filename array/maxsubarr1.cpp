#include<iostream>
#include<climits>
using namespace std;

void subarr(int a[],int n)
{
    int msum=INT_MIN;
    int csum;
    int left=-1,right=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            csum=0;
            for(int k=i;k<=j;k++)
            {
                csum+=a[k];
            }
            if(csum>msum)
            {
                msum=csum;
                left=i;right=j;
            }
        }
    }
    cout<<msum<<endl;
    for(int itr=left;itr<=right;itr++)
    {
        cout<<a[itr]<<" ,";
    }
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