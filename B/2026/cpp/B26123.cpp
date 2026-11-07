/**
 * Enoch Yu
 * 2017 USACO First Bronze
 * Problem 2. The Bovine Shuffle
 *
 * Loop through, find the first mismatch,
 * move the mismatch -> mismatch -> mismatch...
 * If loop stop, find the first mismatch again
 */

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int> back(int N, vector<int> row, vector<int> ID) {
    vector<int> TEMPID(N);
    for (int i = 0; i < N; i++) {
        TEMPID[i] = ID[row[i]-1];
    }
    return TEMPID;
}

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int N;
    cin >> N;
    vector<int> row(N);
    for (int i = 0; i < N; i++) {
        cin >> row[i];
    }
    vector<int> ID(N);
    for (int i = 0; i < N; i++) {
        cin >> ID[i];
    }

    vector<int> PREVID = back(N, row, ID);
    PREVID = back(N, row, PREVID);
    PREVID = back(N, row, PREVID);
    for (int i = 0; i < N; i++) {
        cout << PREVID[i] << "\n";
    }

    return 0;
}


