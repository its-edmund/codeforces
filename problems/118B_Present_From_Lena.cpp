#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

string drawRow(int num) { 
  string ans = "";
  for(int i=0; i<num; i++) {
    ans += to_string(i) + " ";
  }
  ans += to_string(num);
  for(int i=num-1; i>=0; i--) {
    ans += " " + to_string(i);
  }
  return ans;
}

int main() {
  IOS
  int t;
  cin >> t;
  for(int j=0; j<t; j++) {
    for(int k=0; k<t-j; k++) {
      cout << " " << " "; 
    }
    cout << drawRow(j);
    cout << "\n";
  }
  cout << drawRow(t);
  cout << "\n";
  for(int j=t-1; j>=0; j--) {
    for(int k=0; k<t-j; k++) {
      cout << " " << " "; 
    }
    cout << drawRow(j); 
    cout << "\n";
  }
}

