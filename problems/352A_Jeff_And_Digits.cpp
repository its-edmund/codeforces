#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  int nums [6] = {};
  nums[0] = 0; nums[5] = 0;
  while(t--) {
    int d;
    cin >> d;
    nums[d]++;
  }
  if(nums[5]>=9 && nums[0] > 0) {
    int count;
    count = nums[5]/9;
    for(int i=0; i<count*9; i++) {
      cout << 5;
    }
    for(int i=0; i<nums[0]; i++) {
      cout << 0;
    }
  }
  else if(nums[0] > 0){
    cout << 0;
  }
  else {
    cout << -1;
  }
}

