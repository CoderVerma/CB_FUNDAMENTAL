/*Problem Name: Chewbacca and Number
Problem Difficulty: 1
Problem Constraints: x <= 100000000000000000
Problem Description:
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
Input Format: The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.
Sample Input: 4545
Output Format: Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
Sample Output: 4444



=====Solution=====
import java.util.*;
import java.lang.Math;

public class Chewbaaca_num{


  public static void main(String[] args){

    Scanner scn = new Scanner(System.in);

        long n = scn.nextLong();

       System.out.println(smallest_num(n));
    }
  
  public static long smallest_num(long num){


    long ans = 0;
    long mult = 1;

    while(num != 0){

      long rem = num % 10;

      if(rem >= 5){

        if(rem == 9 && (num/10) == 0){
         //do nothing
        }else{
          rem = 9 - rem;
        }
      }

      ans += rem * mult;

      mult *= 10;
      num /= 10;
    }

    return ans;
  }
}*/

#include<iostream>
using namespace std;

long long chew_num(long long n)
{
    long long int ans=0;
    long long int mul=1;

    while(n!=0)
    {
        long long int rem=n%10;

        if(rem>=5)
        {
            if(rem==9 && (n/10)==0)
            {
                //nothing
            }
            else{
                rem=9-rem;
            }
        }
        ans+=rem*mul;
        mul*=10;
        n/=10;

    }
    return ans;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<chew_num(n);

}