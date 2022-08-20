#include<iostream>
#include<vector>
using namespace std;

int utopianTree(int n)
{
  if(n == 0) return 1;
  if(n % 2 == 0) return utopianTree(n-1)+1; 
  else return utopianTree(n-1)*2;
}

int main()
{
  int n;
  cin >> n;
  int s[n];
  for(int i = 0; i < n; i++)
  {
    cin >> s[i];
  } 
  for(int i = 0; i < n; i++)
  {
    cout << utopianTree(s[i]) << endl;
  }
}