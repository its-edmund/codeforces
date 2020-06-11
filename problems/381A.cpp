#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int n;
  cin >> n;
  int arr[1001];
  for(int i=0; i<n; i++) {
    int t;
    cin >> t;
    arr[i] = t;
  }
  int l,r;
  l = 0; r = n-1;
  int s,d;
  s=0; d=0;
  int counter = 0;
  while(r>=l) {
    if(counter%2==0) {
      if(arr[l] > arr[r]) {
        s+=arr[l];
        l++;
      } else {
        s+=arr[r];
        r--;
      }
    } else {
      if(arr[l] > arr[r]) {
        d+=arr[l];
        l++;
      } else {
        d+=arr[r];
        r--;
      }
    }
    counter++;
  }
  cout << s << " " << d;
}

