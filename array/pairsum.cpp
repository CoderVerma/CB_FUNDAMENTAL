#include<iostream>
using namespace std;
void pairsum(int a[],int n,int key)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]>key)
        {
            j--;
        }
        else if(a[j]+a[i]<key)
        i++;
        else if(a[i]+a[j]==key)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;j--;
        }
    }
}

int main()
{
    int n;cin>>n;
    int a[1000];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    pairsum(a,n,key);
}