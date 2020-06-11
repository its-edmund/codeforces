#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,m;
  cin >> n;
  int an[101] = {0};
  for(int i=0; i<n; i++) {
    int num;
    cin >> num;
    an[i] = num;
  }
  cin >> m;
  int am[101] = {0};
  for(int i=0; i<m; i++) {
    int num;
    cin >> num;
    am[i] = num;
  }
  sort(an,an+n);
  sort(am,am+m);
  int ans = 0, b = 0, g = 0;
  while(b <= n-1 && g <= m-1) {
    if(abs(an[b]-am[g]) <= 1) {
      ans++;
      b++; g++;
    }
    else {
      an[b]>am[g] ? g++ : b++;
    }
  }
  cout << ans;
}

