/*Problem Name: Maximum Circular Sum
Problem Difficulty: None
Problem Constraints: 1<=t<=100 <br>
1<=n<=1000 <br>
|A<sub>i</sub>| <= 10000
Problem Description:
You are provided n numbers (both +ve and -ve).  Numbers are arranged in a circular form. You need to  find the maximum sum of consecutive numbers.

Input Format: First line contains integer t which is number of test case.<br>
For each test case, it contains an integer n which is the size of array and next line contains n space separated integers denoting the elements of the array.
Sample Input: 1
7
8 -8 9 -9 10 -11 12

Output Format: Print the maximum circular sum for each testcase in a new line.

Sample Output: 22



=====Solution=====
// C/C++ program for maximum contiguous circular sum problem
#include<stdio.h>
using namespace std;
// Standard Kadane's algorithm to find maximum subarray
// sum
int kadane(int a[], int n);

// The function returns maximum circular contiguous sum
// in a[]
int maxCircularSum(int a[], int n)
{
// Case 1: get the maximum sum using standard kadane'
// s algorithm
int max_kadane = kadane(a, n);

// Case 2: Now find the maximum sum that includes
// corner elements.
int max_wrap = 0, i;
for (i=0; i<n; i++)
{
		max_wrap += a[i]; // Calculate array-sum
		a[i] = -a[i]; // invert the array (change sign)
}

// max sum with corner elements will be:
// array-sum - (-max subarray sum of inverted array)
max_wrap = max_wrap + kadane(a, n);

// The maximum circular sum will be maximum of two sums
return (max_wrap > max_kadane)? max_wrap: max_kadane;
}

// Standard Kadane's algorithm to find maximum subarray sum
// See https://www.geeksforgeeks.org/archives/576 for details
int kadane(int a[], int n)
{
	int max_so_far = 0, max_ending_here = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_ending_here < 0)
			max_ending_here = 0;
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
	}
	return max_so_far;
}

/* Driver program to test maxCircularSum() */
/*int main()
{
	//int a[] = {11, 10, -20, 5, -3, -5, 8, -13, 10};
	//int n = sizeof(a)/sizeof(a[0]);
	int t;
	scanf("%d", &t);
	//cin>>t;
	for(int i=0;i<t;i++)
	{
       int n;
       scanf("%d", &n);
       //cin>>n;
       int a[n];
       for(int j=0;j<n;j++)
       {
       	scanf("%d", &a[j]);
       	//cin>>a[j];
       }
       printf("%d \n",
							maxCircularSum(a, n));
	}
	
	return 0;
}

// java Implementation of the Maximum Circular Sum - Using Kadane's
import java.util.*;
import java.lang.Math;

public class maxCircularSum{


  public static void main(String[] args){

    Scanner scn = new Scanner(System.in);

    int t = scn.nextInt();

    while(t > 0){

        int n = scn.nextInt();

        int[] arr = new int[n];

        for(int i =0;i < n;i++)
            arr[i] = scn.nextInt();

        System.out.println(maxSum(arr));

        t--;
    }
  }

  public static int maxSum(int[] arr){

    int max_kadane = kadanes(arr);

    int max_wrap = 0;

    for(int i =0;i < arr.length;i++){
        max_wrap += arr[i];
        arr[i] = -arr[i];
    }

    int non_contib_sum = kadanes(arr);
    max_wrap = max_wrap + non_contib_sum;

    return (max_wrap > max_kadane?max_wrap:max_kadane);

  }

    public static int kadanes(int[] A) {

        int max_so_far = 0;
        int max_ending_here = 0;


        for(int i = 0;i < A.length;i++){

            max_ending_here += A[i];

            if(max_ending_here < 0){
                max_ending_here = 0;
            }

            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }
        return max_so_far;
    }
}*/
#include<iostream>
#include<climits>
using namespace std;

int kadane(int a[],int n)

{
    int msf=INT_MIN;
    int cs=0;
    for(int i=0;i<n;i++)
    {
        cs=max(a[i],cs+a[i]);
        msf=max(cs,msf);
    }
    return msf;
}

int circularsum(int a[],int n)
{
    int max_kadane=kadane(a,n);
    int max_wrap=0;

    for(int i=0;i<n;i++)
    {
        max_wrap+=a[i];
        a[i]=-a[i];
    }
    int non_consum=kadane(a,n);
    max_wrap+=non_consum;
    if(max_wrap==0)
    return max_kadane;
    return (max_wrap>max_kadane?max_wrap:max_kadane);
}

int main()
{
    int n;cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<kadane(a,n);
 
}