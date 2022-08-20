/*Problem Name: Form Biggest Number
Problem Difficulty: None
Problem Constraints: 1<=t<=100 <br>
1<=m<=100 <br>
1<=A[i]<=10^5
Problem Description:
You are provided an array of numbers. You need to  arrange them in a way that yields the largest value.

Input Format: First line contains integer t which is number of test case. <br>
For each test case, you are given a single integer n in the first line which is the size of array A[] and next line contains n space separated integers denoting the elements of the array A .

Sample Input: 1
4
54 546 548 60
Output Format: Print the largest value.

Sample Output: 6054854654




=====Solution=====
// Given an array of numbers, program to arrange the numbers to form the
// largest number
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
	// first append Y at the end of X
	string XY = X.append(Y);

	// then append X at the end of Y
	string YX = Y.append(X);

	// Now see which of the two formed numbers is greater
	return XY.compare(YX) > 0 ? 1: 0;
}

// The main function that prints the arrangement with the largest value.
// The function accepts a vector of strings
void printLargest(vector<string> arr)
{
	// Sort the numbers using library sort funtion. The function uses
	// our comparison function myCompare() to compare two strings.
	// See http://www.cplusplus.com/reference/algorithm/sort/ for details
	sort(arr.begin(), arr.end(), myCompare);

	for (int i=0; i < arr.size() ; i++ )
		cout << arr[i];
	cout<<"\n";
}

// driverr program to test above functions
int main()
{

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		vector<string> arr;
		int n;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			string s;
			cin>>s;
			arr.push_back(s);
		}
		printLargest(arr);
	}
	// vector<string> arr;

	// //output should be 6054854654
	// arr.push_back("54");
	// arr.push_back("546");
	// arr.push_back("548");
	// arr.push_back("60");
	// printLargest(arr);

	// output should be 777776
	/*arr.push_back("7");
	arr.push_back("776");
	arr.push_back("7");
	arr.push_back("7");*/

	//output should be 998764543431
	/*arr.push_back("1");
	arr.push_back("34");
	arr.push_back("3");
	arr.push_back("98");
	arr.push_back("9");
	arr.push_back("76");
	arr.push_back("45");
	arr.push_back("4");
	*/
/*
return 0;
}



// Java Code for the Chewbacca Number

import java.util.*;
import java.lang.Math;

public class Chewbaaca_num{


  public static void main(String[] args){

    Scanner scn = new Scanner(System.in);

    int t = scn.nextInt();

    while(t > 0){

        int n = scn.nextInt();

        int[] arr = new int[n];

        for(int i =0;i < n;i++)
            arr[i] = scn.nextInt();

        arr = maxnum(arr);

        for(int val:arr){
          System.out.print(val);
        }
        System.out.println();
        t--;
    }

    // char ch = '1';
    // System.out.println((int)ch - 48);
  }

  public static int[] maxnum(int[] arr){

    for(int i = 0;i < arr.length;i++){

      for(int j = 0;j < arr.length - i - 1;j++){

        if(compareTo_2(arr[j + 1],arr[j]) > 0){
          int temp = arr[j + 1];
          arr[j + 1] = arr[j];
          arr[j] = temp;
        }

      }

     
    }
    return arr;


  }

  public static int compareTo_2(int num1, int num2){


    String str1 = num1+"";
    String str2 = num2+"";

    int i =0;
    int j = 0;

    while(i < str1.length() && j < str2.length()){

      int ch1 = str1.charAt(i) - 48;
      int ch2 = str2.charAt(j) - 48;

      if(ch1 > ch2){

        return 1; 
      }else if(ch2 > ch1){

        return -1;
      }

      i++;
      j++;
    }

    if(i < str1.length()){
      j--;
      while(i < str1.length()){

        int ch1 = str1.charAt(i) - 48;
        int ch2 = str2.charAt(j) - 48;

        if(ch1 < ch2){
          return -1;
        }else if(ch1 > ch2){
          return 1;
        }
      }
    }

    if(j < str2.length()){
      i--;

      while(j < str2.length()){

        int ch1 = str1.charAt(i) - 48;
        int ch2 = str2.charAt(j) - 48;

        if(ch1 < ch2){
          return -1;
        }else if(ch1 > ch2){
          return 1;
        }

      }
    }


  return 0;

  }
}*/
#include<bits/stdc++.h>
using namespace std;
int mycompare(string x,string y)
{
  string xy=x.append(y);
  string yx=y.append(x);
  return xy.compare(yx)?1:0;
}

void printlargest(vector<string>&arr)
{
sort(arr.begin(),arr.end(),mycompare);
 for(int i=0;i<arr.size();i++)
 {
  cout<<arr[i];
 }
 
}
int main()
{
  int n;cin>>n;
  vector<string>arr;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    arr.push_back(s);
  }
  printlargest(arr);
}