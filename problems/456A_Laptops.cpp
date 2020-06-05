#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  map<int, int> laptops;
  while(t--) {
    int a,b;
    cin >> a >> b;
    pair<int, int> laptop = {a,b};
    laptops.insert(laptop);
  }
  int prev = 0;
  for(auto laptop : laptops) {
    if(laptop.second<prev) {
      cout << "Happy Alex";
      return 0;
    }
    prev = laptop.second;
  }
  cout << "Poor Alex";
}

