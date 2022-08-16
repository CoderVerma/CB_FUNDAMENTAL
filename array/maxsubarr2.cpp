#include<iostream>
#include<climits>
using namespace std;

void subarr(int a[],int cummSum[],int n)
{
    int msum=INT_MIN;
    int csum;
    int left=-1,right=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            csum=0;
            csum=cummSum[j]-cummSum[i-1];
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
    int cummSum[1000]={0};
    cin>>a[0];
    cummSum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cummSum[i]=cummSum[i-1]+a[i];
    }
    subarr(a,cummSum,n);
}