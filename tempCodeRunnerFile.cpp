#include<iostream>

using namespace std;

string angryProfessor(int *s, int k)
{
  int count = 0;
  for(int i = 0; i < sizeof(s); i++)
  {
    if(s[i] > 0) count++;
  }
  if(count >= k) return "NO";
  else return "YES";
}

int main()
{
  int t, n, k;
  cin >> t;
  string result[t];
  for(int i = 0; i < t; i++)
  {
    cin >> n;
    cin >> k;
    int s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    result[i] = angryProfessor(s, k); 
  }

  for(int i = 0; i < t; i++)
  {
    cout << result[i] << endl;
  }
}

