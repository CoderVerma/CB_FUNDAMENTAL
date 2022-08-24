#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int freq[100]={0};

    for(unsigned int i=0;i<s.length();i++)
    {
        freq[s[i]-'A']++;
    }
    int maxv=0;
    char maxch;

    for(unsigned int i=0;i<100;i++)
    {
        if(freq[i]!=0)
        {
            if(freq[i]>maxv)
            {
                maxv=freq[i];
                maxch=i+'A';
            }
        }
    }
    cout<<maxv<<" "<<maxch;
}