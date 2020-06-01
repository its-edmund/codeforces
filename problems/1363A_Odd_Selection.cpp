#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  int t;
  cin >> t;
  while(t--) {
    vector<int> evenOdd{0,0};
    int l, s;
    cin >> l >> s;
    for(int i=0; i<l; i++) {
      int num;
      cin >> num;
      evenOdd[num%2]++;
    }
    if(evenOdd[1] == 0) {
      cout << "NO" << "\n";
      continue;
    }
    if(s>evenOdd[1]) {
      if(evenOdd[1] % 2 == 1) {
        cout << "YES" << "\n";
      }
      else {
        if(evenOdd[1]-1+evenOdd[0] >= s) {
          cout << "YES" << "\n";
        }
        else {
          cout << "NO" << "\n";
        }
      }
    }
    else {
      if(s % 2 == 0) {
        if(evenOdd[0] != 0) {
          cout << "YES" << "\n";
        }
        else {
          cout << "NO" << "\n";
        }
      }
      else {
        cout << "YES" << "\n";
      }
    }
  }
}
