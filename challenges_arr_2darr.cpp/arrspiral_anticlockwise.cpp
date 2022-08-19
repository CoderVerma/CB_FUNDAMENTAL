/*Problem Name: Arrays-Spiral Print Anticlockwise
Problem Difficulty: None
Problem Constraints: Both M and N are between 1 to 10.
Problem Description:
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.
Input Format: Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Sample Input: 4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Output Format: All M * N integers separated by commas with 'END' written in the end(as shown in example).
Sample Output: 11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END



=====Solution=====
#include <iostream>
using namespace std;

void input2D(int mat[][10], int m, int n){
	for(int i = 0; i < m; ++i){
		for(int j = 0; j < n; ++j){
			cin >> mat[i][j];
		}
	}
}


void printSpiral(int mat[][10], int m, int n){
	int left = 0;
	int right = n - 1;
	int top = 0;
	int bottom = m - 1;

	while(left <= right || top <= bottom){
	    
	    if (left <= right){
			//print top to bottom : right elements
			for(int i = top; i <= bottom; ++i){
				cout << mat[i][left] << ", ";
			}
			left = left + 1;
		}
		
		//print left to right : top elements
		if(top <= bottom){
			for(int i = left; i <= right; ++i){
				cout << mat[bottom][i] << ", ";
			}
			bottom = bottom - 1;
		}
		
				//print bottom to top : left
		if (left <= right){
			for(int row = bottom; row >= top; --row){
				cout << mat[row][right] << ", ";
			}
			right--;
		}

		//print right to left : bottom
		if (top <= bottom){
			for(int col = right; col >= left; --col){
				cout << mat[top][col] << ", ";
			}
			++top;
		}

	}
	
	cout << "END";
}



int main(){
	int mat[10][10];
	int m, n;
	cin >> m >> n;
	input2D(mat, m, n);

	printSpiral(mat, m, n);	
}

*/
#include<iostream>
using namespace std;

void print2d(int a[][10],int m,int n)
{
    int left=0,right=n-1,top=0,bottom=m-1;
    while(left<=right || top<=bottom)
    {
        if(left<=right)
        {
            for(int i=top;i<=bottom;i++)
            {
                cout<<a[i][left]<<",";
            }
            left++;
        }
        if(top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                cout<<a[bottom][i]<<",";
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                cout<<a[i][right]<<",";
            }
            right--;

        }
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                cout<<a[top][i]<<",";
            }
            top++;
        }

    }
}

void input2d(int a[][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
}
int main()
{
    int a[10][10];
    int m,n;
    cin>>m>>n;
    input2d(a,m,n);
    print2d(a,m,n);
}