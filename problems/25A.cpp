#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  vector<int> parity;
  while(t--) {
    int num;
    cin >> num;
    parity.push_back(num%2);
  }
  int sum = accumulate(parity.begin(), parity.end(),0);
  if(sum == 1) {
    int count = 1;
    for(int evenness : parity) {
      if(evenness == 1) {
        cout << count;
        break;
      }
      count++;
    }
  }
  else {
    int count = 1;
    for(int evenness : parity) {
      if(evenness == 0) {
        cout << count;
        break;
      }
      count++;
    }
  }
}

