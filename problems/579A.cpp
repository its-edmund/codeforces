#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  int ans = 1;
  cin >> t;
  for(int i=0; i<=32; i++) {
    if(__builtin_popcount(t) == 1) {
      cout << ans;
      break;
    }
    if(t&(1<<i)) {
      t &= ~(1 << i);
      ans++;
    }
  }
}

