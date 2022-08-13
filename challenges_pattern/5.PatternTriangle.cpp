/*Problem Name: Pattern Triangle
Problem Difficulty: None
Problem Constraints: 0 < N < 10
Problem Description:
Take N (number of rows), print the following pattern (for N = 4). 

                           1 
                         2 3 2
                       3 4 5 4 3
                     4 5 6 7 6 5 4


Input Format: 
Sample Input: 4
Output Format: 
Sample Output:                         1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4



=====Solution=====
import java.util.Scanner;

public class patterntriangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner scn=new Scanner(System.in);
	
		int n=scn.nextInt();
		
		int nsp=n-1;
		int num=1;
		
		for(int i=1;i<=n;i++)
		{
			//work for spaces
		   for(int csp=1;csp<=nsp;csp++)
		   {
			   System.out.print(" \t");
		   }
		   
		   // work for numbers
		   
		   for(int cst=1;cst<=(2*i-1);cst++)
		   {
			   System.out.print(num+"\t");
			   
			   if(cst<i)
				   num++;
			   else
				   num--;
			  
		   }
		   
		   //preparation
		   
		   nsp=nsp-1;
		   num+=2;
		  System.out.println();
		   
		}
	}

}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int sp=n-1;
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int csp=1;csp<=sp;csp++)
        {
            cout<<"   ";
        }
        for(int cv=1;cv<=2*i-1;cv++)
        {
            cout<<num<<"  ";
            if(cv<i) num++;
            else num--;
        }
        sp--;
        num+=2;
        cout<<endl;

    }
}