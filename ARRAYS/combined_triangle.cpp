#include <bits/stdc++.h>
using namespace std;

class solution {
   public:
    void printCombinedTriangle(int n) {
        // Write your code here...
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            int spaces = 4 * (n - i);
            for (int k = 1; k <= spaces; k++) {
                cout << " ";
            }
            for (int j = i; j >= 1; j--) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};