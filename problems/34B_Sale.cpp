#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,m;
  cin >> n >> m;
  int ans = 0;
  vector<int> prices;
  while(n--) {
    int price;
    cin >> price;
    prices.push_back(price);
  }
  sort(prices.begin(), prices.end());
  for(int i=0; i<prices.size(); i++) {
    if(m!=0) {
      if(prices[i] < 0) {
        ans+=prices[i];
        m--;
      }
      else {
        break;
      }
    }
    else {
      break;
    }
  }
  cout << -ans;
}

