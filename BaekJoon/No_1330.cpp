#include <iostream>

using namespace std;

int main()
{
  ios :: sync_with_stdio(false);

  int a, b;

  cin >> a >> b;

  if(a > b)
    cout << ">";
  else if(a < b)
    cout << "<";
  else  
    cout << "==";
}