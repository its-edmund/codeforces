#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int t;
  cin >> t;
  vector<int> nums;
  int min = INT_MAX;
  int index = 0;
  for(int i=0; i<t; i++) {
    int num;
    cin >> num;
    nums.push_back(num);
    if(num <= min) {
      min = num;
      index = i;
    }
  }
  for(int i=0; i<nums.size(); i++) {
    if(nums[i] == min) {
      if(i!=index) {
        cout << "Still Rozdil";
      }
      else {
        cout << index+1;
      }
      break;
    }
  }
}

