/**
 * Enoch Yu
 * 2016 USACO First Bronze
 * Problem 3. The Cow-Signal
 *
 * K * the original
 */

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K;
    cin >> M >> N >> K;
    vector<vector<int>> vec(M, vector<int>(N,0));
    char temp;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> temp;
            if (temp == 'X') {
                vec[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int l = 0; l < K; l++) {
            for (int j = 0; j < N; j++) {
                if (vec[i][j] == 1) {
                    for (int k = 0; k < K; k++) {
                        cout << 'X';
                    }
                } else {
                    for (int k = 0; k < K; k++) {
                        cout << '.';
                    }
                }
            }
            cout << "\n";
        }
    }

    return 0;
}


