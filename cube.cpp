#include <bits/stdc++.h>

using namespace std;

void printRes(int a, int b, int c, int d, int e, int f, int g) {
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " ";
    return;
}

//int main() {
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    if (a == 2 && b == 1 && c == 1) {
//        printRes(1, 0, 0, 0, 0, 0, 1);
//        return 1;
//    }
//
//    if ((a == b && a == 2) || (a == c && a == 1) || (b == c && b == 1)) {
//        printRes(1, 0, 0, 0, a * b * c - 2, 2, 0);
//        return 1;
//    }
//
//    if (min(a, min(b, c)) == 2) {
//        int x = max(a, max(b,c));
//        int y = a + b + c - x - 2;
//        printRes(1, 0, (x - 2) * (y - 2), 2 * max(0, a - 2) + 2 * max(0, b - 2) + 2 * max(0, c - 2), 4, 0 , 0);
//        return 1;
//    }
//
//    printRes((a - 3) * (b - 2) * (c - 2), 2 * max(0, (a - 2) * (b - 2)) + 2 * max(0, (a - 2) * (c - 2)) + 2 * max(0, (b - 2) * (c - 2)), max(0, 4 * (a - 2)) + max(0, 4 * (b - 2)) + max(0, 4 * (c - 2)), 8 , 0 , 0, 0);
//    return 1;
//}