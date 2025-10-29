#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long findPascalElement(int r, int c) {;
        int k = c - 1;
        int n = r - 1;

        long long result = 1;

        for (int i = 0; i < k; i++) {
            result *= (n - i);
            result /= (i + 1);
        }

        return result;
    }
};

int main() {
    Solution sol;
    int r = 5, c = 3;
    cout << sol.findPascalElement(r, c);
    return 0;
}
