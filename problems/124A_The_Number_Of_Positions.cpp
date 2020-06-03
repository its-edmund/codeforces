#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,a,b;
  cin >> n >> a >> b;
  if(b+a>=n) {
    cout << n-a;
  }
  else {
    cout << b+1;
  }
}

