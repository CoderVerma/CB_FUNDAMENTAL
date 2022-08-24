#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;

    for(int i=0;i<strlen(s);)
    {
        if(isupper(s[i]))
        {
            cout<<s[i];
            i++;
            while(!isupper(s[i])&& i<strlen(s))
            {
                cout<<s[i];
                i++;
            }
            cout<<endl;
        }
    }
}