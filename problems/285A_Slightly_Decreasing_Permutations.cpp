#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,k;
  cin >> n >> k;
  for(int i=1; i<n-k; i++) {
    cout << i << " ";
  }
  for(int i=n; i>n-k-1; i--) {
    cout << i << " ";
  }
}

