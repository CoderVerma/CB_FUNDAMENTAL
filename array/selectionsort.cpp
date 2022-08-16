#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int midx=i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[midx])
            {
                midx=j;
            }
        }
        swap(arr[i],arr[midx]);
    }
    
}

int main()
{
    int arr[]={5,4,1,3,2};
    selectionsort(arr,5);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}