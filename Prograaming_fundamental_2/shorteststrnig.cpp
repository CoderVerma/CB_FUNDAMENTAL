// NNNNWWWSSSEEE you have to print shortes x and y for same position
#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0;
    char ch;
    ch=cin.get();
    while(ch!='\n')
    {
        if(ch=='N' or ch=='n')
        {
            y++;
        }
        else if(ch=='S' or ch=='s')
        {
            y--;
        }
        else if(ch=='W' or ch=='w')
        {
            x--;
        }
        else
        {
            x++;
        }
        ch=cin.get();
    }
    cout<<x<<" "<<y;
}