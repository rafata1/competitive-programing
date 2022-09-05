#include <bits/stdc++.h>

using namespace std;

//int main() {
//    int a, b, c, d, k;
//    cin >> a >> b >> c >> d >> k;
//
//    if (a * b <= c) {
//        cout << 0;
//        return 0;
//    }
//
//    if (k > 1 && d <= c) {
//        cout << 0;
//        return 0;
//    }
//
//    int numOfBacterias = a;
//    for (int i = 0; i < k; i++) {
//        numOfBacterias *= b;
//        numOfBacterias -= min(c, numOfBacterias);
//        numOfBacterias = min(numOfBacterias, d);
//    }
//    cout << numOfBacterias;
//    return 0;
//}
