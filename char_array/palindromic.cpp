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
    char a[1000];
    cin.getline(a,1000);
    if(isPalindrome(a))
    {
        cout<<"Palindrome";
    }    
    else
    cout<<"Not Plaindrome";
}