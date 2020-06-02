#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  string a,b;
  cin >> a >> b;
  for(int i=0; i<a.size(); i++) {
    if(a[i] == b[i]) {
      cout << '0';
    }
    else {
      cout << '1';
    }
  }
}
