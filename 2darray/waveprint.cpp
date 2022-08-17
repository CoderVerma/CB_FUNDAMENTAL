#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[100][100];
    int val=1;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            a[i][j]=val;
            val+=1;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int col=0;col<c;col++)
    {
        if(col%2==0)
        {
            for(int row=0;row<r;row++)
            {
                cout<<a[row][col]<<" ";
            }
        }
        else
        {
            for(int row=r-1;row>=0;row--)
            {
                cout<<a[row][col]<<" ";
            }
        }
    }
}