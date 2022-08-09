/*
Problem Name: Simple Input
Problem Difficulty: 1
Problem Constraints: All numbers input are integers between -1000 and 1000.
Problem Description:
Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative.
Input Format: A list of integers to be processed
Sample Input: 1
2
88
-100
49
Output Format: Print all the numbers before the cumulative sum become negative.
Sample Output: 1
2
88



=====Solution=====
import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;


        while(sc.hasNext()){
            int n = sc.nextInt();
            sum = sum + n;
            if(sum>=0){
                System.out.println(n);
            }
            else{
                break;
            }

        }

    }
}
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
        if(sum>0)
        cout<<num[i]<<endl;
        else
        break;
    }
    
}