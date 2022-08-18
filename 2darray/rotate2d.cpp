#include<iostream>
using namespace std;
void rotate(int a[][100],int n)
{
    for(int row=0;row<n;row++)
    {
        int st_col=0,end_col=n-1;
        while(st_col<end_col)
        {
            swap(a[row][st_col],a[row][end_col]);
            st_col++;end_col--;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(a[i][j],a[j][i]);
            }
        }
    }
}

int main()
{

int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    rotate(a,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}