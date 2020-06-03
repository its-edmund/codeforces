#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  while(t--) {
    int a;
    double side;
    cin >> a;
    side = (float) 360/(180-a);
    if(floor(side) == side) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}
