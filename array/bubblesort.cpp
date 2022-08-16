#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int itr=1;itr<=n-1;itr++)
    {
        for(int j=0;j<=n-itr-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }

        }
        
    }
    
}

int main()
{
    int arr[]={5,4,1,3,2};
    bubblesort(arr,5);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}