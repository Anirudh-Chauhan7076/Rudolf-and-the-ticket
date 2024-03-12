#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> b;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }

        vector<int> c;
        for (int i = 0; i < m; i++) { 
            int temp;
            cin >> temp;
            c.push_back(temp);
        }

        int count = 0; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (b[i] + c[j] <= k) {
                    count++; 
                }
            }
        }
        cout << count << endl; 
    }
    return 0;
}
