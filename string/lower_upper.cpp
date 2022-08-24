/*Problem Name: Lower Upper
Problem Difficulty: 1
Problem Constraints: -
Problem Description:
Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.
Input Format: Single Character .
Sample Input: $
Output Format: lowercase 
UPPERCASE
Invalid 
Sample Output: Invalid



=====Solution=====
//java code:

import java.util.Scanner;

public class LowerUper {

	public static void main(String[] args) {
		

		Scanner scn=new Scanner(System.in);
		char ch=scn.next().charAt(0);
		if(ch>='a' && ch<='z')
		{
			System.out.println("lowercase");
		}
		else
			if(ch>='A' && ch<='Z')
				{
				System.out.println("UPPERCASE");
				}
			else
				System.out.println("invalid");

	}

}
*/
#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='a'&& c<='z')
    {
        cout<<"LowerCase";
    }
    else if(c>='A' && c<='Z')
    {
        cout<<"UpperCase";
    }
    else 
    cout<<"Invalid";
}