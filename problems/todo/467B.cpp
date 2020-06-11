#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

bool cmp(pair<int,int> m, pair<int,int> s) {
  return m.first > s.first;
}

int main() {
  IOS;
  int n,d;
  cin >> n >> d;
  int ans = 0;
  pair<int, int> people[n];
  for(int i=1; i<=n; i++) {
    int m,s;
    cin >> m >> s;
    pair<int,int> person = {m,s};
  }
  sort(people + 1,  people + n + 1, cmp);
  
  while(l<r) {
    int m = (l+r)/2;
    int num;
    if(accumulate(comp.begin()+l, comp.begin()+m,0) > accumulate(comp.begin()+m, comp.begin()+r,0)) {
      r = m;
      ans = max(ans, accumulate(comp.begin()+l, comp.begin()+m,0));
    }
    else {
      l = m;
      ans = max(ans, accumulate(comp.begin()+m, comp.begin()+r,0));
    }

  }
}

