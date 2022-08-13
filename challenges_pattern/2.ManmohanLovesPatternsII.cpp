/*Problem Name: Manmohan Loves Patterns- II
Problem Difficulty: 1
Problem Constraints: N<=1000
Problem Description:
Help Manmohan to print  pattern of a given number. See the output pattern for given input n = 5. 
Input Format: Single integer N denoting number of lines of the pattern.
Sample Input: 5
Output Format: Pattern.
Sample Output: 1
11
202
3003
40004



=====Solution=====*/
#include <iostream>

using namespace std;

int main()
{
    int i, j,x = -1;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        if(x<1)
        {
            for(j=1;j<=i;j++)
            {
                cout<<"1";
                // cout<<endl;
            }
            
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                cout<<i-1;
                else cout<<"0";
            }

        }
        cout<<endl;
        x++;
    }
    return 0;
}
