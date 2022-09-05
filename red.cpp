//#include <bits/stdc++.h>
//
//using namespace std;
//
//int b[100005];
//map<int, vector<int>> mp;
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    for (int i =0; i < n; i ++) {
//        int x;
//        cin >> x;
//        b[i] = x;
//        mp[b[i]].push_back(i);
//    }
//
//    for (int i = 0; i < k; i ++) {
//        int pos;
//        cin >> pos;
//        pos -= 1;
//
//        vector<int>::iterator lower = lower_bound(mp[b[pos]].begin(), mp[b[pos]].end(), pos);
//        int l = lower - mp[b[pos]].begin();
//        int r = mp[b[pos]].size() - l - 1;
//        cout << l << " " << r << "\n";
//    }
//}
