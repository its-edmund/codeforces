#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int s,k;
  cin >> s >> k;
  multimap<int,int> dragons;
  while(k--) {
    int x,y;
    cin >> x >> y;
    pair<int,int> dragon(x,y);
    dragons.insert(dragon);
  }
  for(auto dragon : dragons) {
    if(dragon.first < s) {
      s+=dragon.second;
    }
    else {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
