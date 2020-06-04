#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  bool arr[3002] = {false};
  while(t--) {
    int num;
    cin >> num;
    arr[num] = true;
  }
  for(int i=1; i<=3001; i++) {
    if(arr[i] == false) {
      cout << i;
      break;
    }
  }
}

