#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[])
{
    int i=0,j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j])
    {
        i++;j--;
    }
    else return false;
    }
    return true;
}

int main()
{
    int n;cin>>n;
    char a[1000];
    cin.get();
    
    char largest[1000];
    int len=0,largest_len=0;
    for(int i=0;i<n;i++)
    {
        cin.getline(a,1000);
        len=strlen(a);
        if(len>largest_len)
        {
            largest_len=len;
            strcpy(largest,a);
        }
    }
    cout<<largest<<" "<<largest_len;
    
}