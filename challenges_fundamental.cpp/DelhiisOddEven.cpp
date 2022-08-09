/*Problem Name: Odd and Even back in Delhi
Problem Difficulty: 1
Problem Constraints: N<=1000
Car No >=0 && Car No <=1000000000
Problem Description:
Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
Input Format: The first line contains N , then N integers follow each denoting the number of the car.
Sample Input: 2
12345
12134
Output Format: N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !
Sample Output: Yes
No



=====Solution=====
#include <iostream>
using namespace std;
int main ()
{
    unsigned long long int i;
    int n;
    cin >> n;
    unsigned long long int num[n];
    for ( i = 1; i <= n; i++)
        cin >> num[i-1];

    for ( i = 0; i < n; i++)
    {
    int sum_even = 0, sum_odd = 0;
        while (num[i] != 0)
        {
        int t;
        t = num[i]%10;
        if (t%2 == 0)
            sum_even = sum_even + t;
        else if (t%2 == 1)
            sum_odd = sum_odd + t;

        num[i] = num[i]/10;
        }
        if (sum_even%4 == 0 || sum_odd%3 == 0)
            cout << "Yes" <<endl;
        else
            cout << "No" << endl;

    }
    return 0;
}
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned long long int i;
    unsigned long long int carno[n];
    for( i=0;i<n;i++)
    {
        cin>>carno[i];
    }
    for(int i=0;i<n;i++)
    {
        unsigned int sumeven=0,sumodd=0;
        while(carno[i]!=0)
        {
            int ld=carno[i]%10;
            if(ld%2==0)
            {
                sumeven+=ld;
            }
            else
            {
                sumodd+=ld;
            }
            carno[i]/=10;

        }
        if(sumeven%4==0 || sumodd%3==0)
        cout<<"Yes"<<endl;
        else 
        cout<<"No";
    }
}