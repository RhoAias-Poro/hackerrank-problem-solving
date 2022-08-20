#include<iostream>
#include<vector>
using namespace std;

string angryProfessor(vector<int> s, int k)
{
  int count = 0;
  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] <= 0) count++;
  }
  if(count >= k) return "NO";
  else return "YES";
}

int main()
{
  int t;
  cin >> t;
  string result[t];
  for(int i = 0; i < t; i++)
  {
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    result[i] = angryProfessor(s, k); 
  }

  for(int i = 0; i < t; i++)
  {
    cout << result[i] << endl;
  }
}

