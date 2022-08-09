/*
Problem Name: Revising Quadratic Equations
Problem Difficulty: 1
Problem Constraints: -100 <= a, b, c <= 100
Problem Description:
Given coefficients of a quadratic equation , you need to print the nature of the roots (Real and Distinct , Real and Equal or Imaginary) and the roots. <br>
If Real and Distinct , print the roots in increasing order. <br>
If Real and Equal , print the same repeating root twice <br>
If Imaginary , no need to print the roots.


Note : Print only the integer part of the roots.
Input Format: First line contains three integer coefficients a,b,c for the equation ax^2 + bx + c = 0.
Sample Input: 1 -11 28
Output Format: Output contains one/two lines. First line contains nature of the roots .The next line contains roots(in non-decreasing order) separated by a space if they exist. If roots are imaginary do not print the roots.
Output the integer values for the roots.
Sample Output: Real and Distinct
4 7




=====Solution=====
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
    float a, b, c;
    cin >> a >> b >> c;
    float d;
    float d1;
    d = b*b - 4*a*c;
    d1 = sqrt(d);
    if (d == 0)
        cout << "Real and Equal";
    else if (d >= 0)
        cout << "Real and Distinct";
    else if (d < 0)
        cout << "Imaginary";
    cout << endl;
    int x1, x2;
    if (d >= 0)
    {  
    x1 = (-b - d1)/(2*a);
    x2 = (-b + d1)/(2*a);
    cout << x1 << " " << x2;
    }
    return 0;
}





#include<iostream>
#include<cmath.h>
using namespace std;
int main()
{
float a,b,c;
cin>>a>>b>>c;
 float D=b*b-4(a*c);
float x1,x2;
x1=(-b + sqrt(D)) /2*a;
x2=(-b - sqrt(D)) /2*a;
if(D<0)
cout<<"imaginary" ;
else if(D>0)
cout<<"Real and Distinct";
cout<<x1<<" "<<x2;
else
cout<<"Real and Equal;
cout<<x1<<" "<<x2;
}
*/



#include<iostream>
#include<math.h>
using namespace std;

void printroots(float a,float b,float c,float D)
{
    int x1,x2;
    if(D>0)
    {
        cout<<"Real and Distinct";
        x2=(-b+sqrt(D))/2*a;
        x1=(-b-sqrt(D))/2*a;
        cout<<x1<<" "<<x2;

    }
    else if(D==0)
    {
        cout<<"Equal Roots";
        x2=(-b+sqrt(D))/2*a;
        x1=(-b-sqrt(D))/2*a;
        cout<<x1<<" "<<x2;
    }
    else 
    cout<<"Imaginary Roots";
}

int main()
{
    float a,b,c;
    cin>>a>>b>>c;

    float D;
    D=b*b-4*a*c;

    printroots(a,b,c,D);
}