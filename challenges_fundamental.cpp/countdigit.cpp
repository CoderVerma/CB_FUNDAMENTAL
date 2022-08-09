/*Problem Name: Count Digits
Problem Difficulty: None
Problem Constraints: 0 <= N <= 1000000000 
0 <= Digit <= 9
Problem Description:
Take the following as input.  
A number  
A digit  
Write a function that returns the number of times digit is found in the number. Print the value returned.
Input Format: Integer (A number) 
Integer (A digit)
Sample Input: 5433231 
3
Output Format: Integer (count of times digit occurs in the number)
Sample Output: 3



=====Solution=====
*/
//Rajkishor Ranjan
//Code Functionality given below 
#include <iostream>
using namespace std;

int noDigit(int n , int digit)
{
    int count = 0;
    
    while(n != 0)
    {
        if(digit == n % 10)
        {
            count += 1;
        }
        
        n = n / 10;
    }
    
    return count;    
}

int main() {
    
    int  n;
    int digit;
    
    cin >> n;
    cin >> digit;
    
    cout << noDigit(n,digit);
    return 0;
}