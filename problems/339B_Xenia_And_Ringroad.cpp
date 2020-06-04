#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,m;
  cin >> n >> m;
  ll prev = 1;
  ll ans = 0;
  while(m--) {
    int num;
    cin >> num;
    if(num > prev) {
      ans = ans + (num-prev);
    }
    else if(num == prev) {
      continue;
    }
    else {
      ans = ans + (n-prev)+num;
    }
    prev = num;
  }
  cout << ans;
}

