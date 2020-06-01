#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    vector<int> round;
    int n, m, k;
    cin >> n >> m >> k;

    int maxCards = n/k;

    if (maxCards >= m) {
      cout << m << "\n";
    } else {
      int ans = maxCards-((m - maxCards)/(k-1));
      if((m - maxCards)%(k-1) != 0) {
        ans--;
      }
      if(ans < 0) {
        cout << 0 << "\n";
      } else {
        cout << ans << "\n";
      }
    }
  }
}
