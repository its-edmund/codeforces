#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.first != p2.first) {
        return p1.first > p2.first;
    } else {
        return p1.second < p2.second;
    }
}

int main() {
    int q;
    cin >> q;
    vector<int> mc;
    vector<pair<int, int>> pc;
    int num = 1;
    string ans;
    while(q--) {
        int a;
        cin >> a;
        if(a == 1) {
            int m;
            cin >> m;
            pc.push_back(pair<int, int>(m, num));
            mc.push_back(num);
            num++;
        } else if(mc.size() == 1) {
            ans = ans + to_string(mc[0]) + " ";
            mc.clear();
            pc.clear();
        } else if(a == 2) {
            int j = mc[0];
            for(int i = 0; i < (int) pc.size(); i++) {
                if(pc[i].second == j) {
                    pc.erase(pc.begin() + i);
                }
            }
            mc.erase(mc.begin());
            ans = ans + to_string(j) + " ";
        } else {
            sort(pc.begin(), pc.end(), comp);
            int j = pc[0].second;
            for(int i = 0; i < (int) mc.size(); i++) {
                if(mc[i] == j) {
                    mc.erase(mc.begin() + i);
                }
            }
            pc.erase(pc.begin() + 0);
            ans = ans + to_string(j) + " ";
        }
    }
    cout << ans;
}