/*
Problem Name: Decimal To Octal
Problem Difficulty: None
Problem Constraints: 0 < N <= 1000000000
Problem Description:
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.
Input Format: 
Sample Input: 63
Output Format: 
Sample Output: 77



=====Solution=====
#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin >> n;
    
    string octal = "";
    while(n!=0){
        int r = n%8;
        n/=8;
        char c = r+'0';
        octal = c+octal;
    }
    std::cout << octal << std::endl;
}
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    string octal="";
    while(n!=0)
    {
        int r=n%8;
        n/=8;
        char c=r+'0';
        octal+=c;
    }
    cout << octal << std::endl;
}