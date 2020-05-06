#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  cin >> s;
  string output;
  for(int i = 0; i < (s.size()); i++)
  {
    if(s[i] == '-' && s[i+1] == '.') 
    {
      output += '1';
      i++;
    }
    else if(s[i] == '-' && s[i+1] == '-') 
    {
      output += '2';
      i++;
    }
    else if(s[i] == '.') output += '0';
  }
  cout << output << endl;
  return 0;
}
