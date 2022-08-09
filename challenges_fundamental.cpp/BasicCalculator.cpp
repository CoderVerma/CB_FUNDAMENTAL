/*Problem Name:  Basic Calculator
Problem Difficulty: None
Problem Constraints: 0 <= Input integers <= 100000000 <br>
 ( It is assured that the second integer provided for division and modulo operations will not be 0. )
Problem Description:
Write a program that works as a simple calculator.

1.It reads a character (ch)  <br>
2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then 
performs appropriate appropriate operation between numbers and print the number. <br>
3.If ch is 'X' or 'x', the program terminates.  <br>
4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).  <br><br>

Write code to achieve above functionality.
Input Format: 
Sample Input: * 
1 
2 
/ 
4 
2 
+ 
3 
2 
; 
X
Output Format: Output a single integer output for the operations in a new line each.
Sample Output: 2 
2 
5 
Invalid operation. Try again.



=====Solution=====

import java.util.Scanner;
public class Main{
   static Scanner scn=new Scanner(System.in);
    public static void main(String[] args) {

     
		char ch;
		do {

			ch = scn.next().charAt(0);  // Use cin in case of c++
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {

				operation(ch);

			} else {
				if (ch != 'x' && ch != 'X')
					System.out.println("Invalid operation. Try again.");
			}

		} while (ch != 'x' && ch != 'X');
	}

	public static void operation(char ch) {
		int a = scn.nextInt(); // Use cin in case of c++
		int b = scn.nextInt(); // Use cin in case of c++
		int res = 0;
		switch (ch) {
		case '+': {
			res = a + b;

			break;
		}
		case '-': {
			res = a - b;

			break;
		}
		case '*': {
			res = a * b;

			break;
		}
		case '/': {
			res = a / b;
			break;
		}
		case '%': {
			res = a % b;
			break;
		}
		}
		System.out.println(res);

	}
}
*/

#include<iostream>
using namespace std;

void operation(char ch)
{
    int a,b;
    cin>>a>>b;
    int res=0;
    switch (ch) {
		case '+': {
			res = a + b;

			break;
		}
		case '-': {
			res = a - b;

			break;
		}
		case '*': {
			res = a * b;

			break;
		}
		case '/': {
			res = a / b;
			break;
		}
		case '%': {
			res = a % b;
			break;
		}
		
    }
        cout<<res<<endl;
}

int main()
{
    char ch;
		do {

			cin>>ch;  // Use cin in case of c++
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {

				operation(ch);

			} else {
				if (ch != 'x' && ch != 'X')
				    cout<<("Invalid operation. Try again.")<<endl;
			}

		} while (ch != 'x' && ch != 'X');
}