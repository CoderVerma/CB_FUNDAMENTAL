/*Problem Name: Help Ramu
Problem Difficulty: 2
Problem Constraints: 1 <= T <= 1000 , where T is no of testcases <br>
1 ≤ c1, c2, c3, c4 ≤ 1000 <br>
1 ≤ n, m ≤ 1000 <br>
0 ≤ a<sub>i</sub> , b<sub>i</sub> ≤ 1000


Problem Description:
Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

Public transport is not free. There are 4 types of tickets:

A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;  
A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;  
A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;  
A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.  

Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.
Input Format: Each Test case has 4 lines which are as follows:

The first line contains four integers c1, c2, c3, c4 (1 ≤ c1, c2, c3, c4 ≤ 1000) — the costs of the tickets. <br>
The second line contains two integers n and m (1 ≤ n, m ≤ 1000) — the number of rickshaws and cabs Ramu is going to use. <br>
The third line contains n integers ai (0 ≤ ai ≤ 1000) — the number of times Ramu is going to use the rickshaw number i. <br>
The fourth line contains m integers bi (0 ≤ bi ≤ 1000) — the number of times Ramu is going to use the cab number i.
Sample Input: 2
1 3 7 19
2 3
2 5
4 4 4
4 3 2 1
1 3
798
1 2 3
Output Format: For each testcase , print a single number - the minimum sum of rupees Ramu will have to spend on the tickets in a new line.
Sample Output: 12
1



=====Solution=====*/
//Rajkishor Ranjan
// Code Functionality.

#include <iostream>
#include <numeric>

using namespace std;

const int MAX = 1000;

int minFare(int c1 , int c2 , int c3 , int freq[] , int num)
{
	int cost = 0;

	for(int i = 0 ; i < num ; i++)
	{
		cost += min( c2 , freq[i] * c1 );
	}

	int minFare = min( c3 , cost);

	return minFare;
}

int minSum( int c1 , int c2 , int c3 , int c4 , int rickshaws[] , int cabs[] , int n , int m)
{
	int rickshawFare = minFare( c1 , c2 , c3 , rickshaws , n );
	int cabFare = minFare( c1 , c2 , c3 , cabs , m );

	int minFare = min( rickshawFare + cabFare , c4);
	return minFare;
}

int main()
{
	int testCases;
	cin >> testCases;

	while(testCases > 0)
	{
		int c1 , c2 , c3 ,c4;
		cin >> c1 >> c2 >> c3 >> c4;

		int n,m;
		cin >> n >> m;

		int rickshaws[MAX];
		int cabs[MAX];

		for(int i = 0 ; i < n ; i++)
		{
			cin >> rickshaws[i];
		}

		for(int i = 0 ; i < m ; i++)
		{
			cin >> cabs[i];
		}

		int result = minSum( c1 , c2 , c3 , c4 , rickshaws , cabs , n , m);

		cout << result;
		cout << "\n";

		testCases--;
	}

	return 0;
}
/*

#include<iostream>
using namespace std;
const int MAX=1000;

int minFare(int c1,int c2,int c3,int freq[],int num)
{
    int cost=0;
    for(int i=0;i<num;i++)
    {
        cost+=min(c2,freq[i]*c1);
    }
    int minfare=min(cost,c3);
    return minfare;

}

int minSum( int c1 , int c2 , int c3 , int c4 , int rickshaws[] , int cabs[] , int n , int m)
{
	int rickshawFare = minFare( c1 , c2 , c3 , rickshaws , n );
	int cabFare = minFare( c1 , c2 , c3 , cabs , m );

	int minFare = min( rickshawFare + cabFare , c4);
	return minFare;
}
int main()
{
	int testCases;
	cin >> testCases;

	while(testCases > 0)
	{
		int c1 , c2 , c3 ,c4;
		cin >> c1 >> c2 >> c3 >> c4;

		int n,m;
		cin >> n >> m;

		int rickshaws[MAX];
		int cabs[MAX];

		for(int i = 0 ; i < n ; i++)
		{
			cin >> rickshaws[i];
		}

		for(int i = 0 ; i < m ; i++)
		{
			cin >> cabs[i];
		}

		int result = minSum( c1 , c2 , c3 , c4 , rickshaws , cabs , n , m);

		cout << result;
		cout << "\n";

		testCases--;
	}

	return 0;
}*/