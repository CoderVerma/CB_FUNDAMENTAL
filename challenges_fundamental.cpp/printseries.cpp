/*Problem Name: Print Series
Problem Difficulty: None
Problem Constraints: 0 < N1 < 100 
0 < N2 < 100
Problem Description:
Take the following as input.

A number (N1)  
A number (N2)  
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.
Input Format: 
Sample Input: 10 
4
Output Format: 
Sample Output: 5 
11 
14 
17 
23 
26 
29 
35 
38 
41



=====Solution=====
import java.util.Scanner;

public class printSeries {

	public static void main(String[] args) {
		
		Scanner scn=new Scanner(System.in);
		
            int n1=scn.nextInt();
            int n2=scn.nextInt();
            
            int n=1;int count=1;
            while(count<=n1)
            {
            	int ans=3*n+2;
            	if(ans%n2!=0)
            	{System.out.println(ans);
                     count++;}            	
            	n++;
            }
	}

}
*/

#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int n=1;int count=1;

    while(count<=n1)
    {
        int ans=3*n+2;
        if(ans%n2!=0)
        {
        cout<<ans<<endl;
        count++;
        }
        n++;
    }
}