#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    vector<pair<ll, ll>> schedule;
    while(n--) {
        ll a,b;
        cin >> a >> b;
        schedule.push_back(pair<ll, ll>(a, b));
    }
    sort(schedule.begin(), schedule.end());
    ll currExam = -1;
    for(int i = 0; i < (int) schedule.size(); i++) {
        if(currExam <= schedule[i].second) {
            currExam = schedule[i].second;
        } else {
            currExam = schedule[i].first;
        }
    }
    cout << currExam;
}
