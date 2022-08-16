#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int e=a[i];
        int j=i-1;

        while(j>=0 && a[j]>e)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=e;
    }
    
}

int main()
{
    int arr[]={5,4,1,3,2};
    insertionsort(arr,5);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}