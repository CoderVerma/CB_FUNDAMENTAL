/*we can use in built icin.getline function which works the same way*/

#include<iostream>
using namespace std;

void readline(char a[],int maxLen,char delim)
{
    int i=0;
    char ch=cin.get();
    while(ch!=delim)
    {
        a[i]=ch;
        i++;
        if(i==maxLen-1)
        break;
        ch=cin.get();
    }
    a[i]='\0';

}

int main()
{
    char a[1000];
    readline(a,1000,'\n');
    cout<<a;
}