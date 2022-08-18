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
    int start_row=0;
    int start_col=0;
    int end_row=r-1;
    int end_col=c-1;


    while(start_row<=end_row && start_col<=end_col){
        for(int i=start_col;i<=end_col;i++)
    {
        cout<<a[start_row][i]<<" ";
    }
    start_row++;
    for(int i=start_row;i<=end_row;i++)
    {
        cout<<a[i][end_col]<<" ";
    }
    end_col--;
    if(end_row>start_row)
    {
    for(int i=end_col;i>=start_col;i--)
    {
        cout<<a[end_row][i]<<" ";
    }
    end_row--;}

    if(start_col<end_col)
    {
    for(int i=end_row;i>=start_row;i--)
    {
        cout<<a[i][start_col]<<" ";
    }
    start_col++;
    }
    }
}