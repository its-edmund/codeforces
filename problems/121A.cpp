#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  ll l,r;
  cin >> l >> r;
  ll arr[10000];
  arr[1] = 4;
  arr[2] = 7;
  int num = 3;
  for(int i=1; i<1000; i++) {
    arr[num++] = arr[i] * 10 + 4;
    arr[num++] = arr[i] * 10 + 7;
  }
  int curr = 1;
  ll ans = 0;
  for(int i=l; i<=r; i++) {
    while(arr[curr] < i) {
      curr++;
    }
    ans+=arr[curr];
  }
  cout << ans;
}

