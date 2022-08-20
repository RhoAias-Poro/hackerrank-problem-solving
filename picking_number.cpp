#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int pickingNumbers(int n, vector<int> a)
{
  int result = 0;
 for(int i = 0; i < n; i++)
 {
    int check = 0;
   for(int j = i; j<n;j++ )
   {
      if(abs(a[i] - a[j]) <= 1)
      {
        check++;
      }
   }
   if(result < check)
   {
      result = check;
   }
 }
 return result;
}

vector<int> sorting(int n, vector<int> a)
{
  int swap;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n - i - 1; j++)
    {
      if(a[j] > a[j+1])
      {
        swap = a[j];
        a[j] = a[j+1];
        a[j+1] = swap;
      }
    }
  }
  return a;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << pickingNumbers(n, sorting(n,a));
}