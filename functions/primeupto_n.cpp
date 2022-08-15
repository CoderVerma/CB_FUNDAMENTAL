#include<iostream>
using namespace std;
bool isPrime(int n)
{
  for(int i=2;i<=n-1;i++)
  {
    if(n%i==0)
    return false;
  }
  return true;
}

void printAllPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
        
    }
}
int main()
{
 int n;
 cin>>n;
 printAllPrime(n);
}