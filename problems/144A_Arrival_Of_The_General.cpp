#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  int t;
  cin >> t;
  vector<int> men;
  int max = INT_MIN, min = INT_MAX;
  int maxp, minp;
  for(int i=0; i<t; i++) {
    int h;
    cin >> h;
    if(h<=min) {
      min = h;
      minp = i;
    }
    if(h>max) {
      max = h;
      maxp = i;
    }
  }
  if(minp<maxp) {
    cout << t - 2 - minp + maxp;
  }
  else {
    cout << t - 1 - minp + maxp;
  }
}

