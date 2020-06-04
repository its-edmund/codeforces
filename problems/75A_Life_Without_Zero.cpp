#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ar array

int main() {
  IOS;
  int a,b,c;
  cin >> a >> b;
  c = a+b;
  string astring = to_string(a);
  string bstring = to_string(b);
  string newAString = "";
  string newBString = "";
  string cstring = to_string(c);
  string newCString = "";
  for(int i=0; i<cstring.size(); i++) {
    if(cstring[i]!='0') {
      newCString+=cstring[i];
    }
    
  }
  for(int i=0; i<astring.size(); i++) {
    if(astring[i]!='0') {
      newAString+=astring[i];
    }
    if(bstring[i]!='0') {
      newBString+=bstring[i];
    }
  }
  if(stoi(newAString)+stoi(newBString) == stoi(newCString)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

