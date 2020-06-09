#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n,m;
  cin >> n >> m;
  vector<int> arr1,arr2;
  for(int i=0; i<n; i++) {
    int num;
    cin >> num;
    arr1.push_back(num);
  }
  for(int i=0; i<m; i++) {
    int num;
    cin >> num;
    arr2.push_back(num);
  }
  sort(arr1.begin(), arr1.end());
  for(int num : arr2) {
    cout << upper_bound(arr1.begin(), arr1.end(), num) - arr1.begin() << " ";
  }
}

