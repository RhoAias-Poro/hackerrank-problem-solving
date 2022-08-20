#include<iostream>

using namespace std;

int designerPdfViewer(int h[], string word)
{
  int check, max_height = 0;
  for(int i = 0; i < word.length(); i++)
  {
    check = (int)word[i] - 97;
    if(h[check] > max_height) max_height = h[check];
  }
  return word.length() * max_height;
}

int main()
{
  int h[26];
  string word;
  for(int i = 0; i < 26; i++)
  {
    cin >> h[i];
  }
  cin >> word;
  cout << designerPdfViewer(h, word);
}

