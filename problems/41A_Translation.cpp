#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  string in, out;
  cin >> in >> out;
  reverse(in.begin(), in.end());
  if(in == out) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

