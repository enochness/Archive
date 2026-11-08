/**
 * Enoch Yu
 * 2018 USACO First Bronze
 * Problem 2. The Bucket List
 *
 * Count the NEED for each cow
 * Sort by s_i (increasing)
 * Update number with each cow
 */

#include <cstdio>
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);

    int N;
    cin >> N;
    vector<array<int,3>> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i][0] >> vec[i][1] >> vec[i][2];
    }

    // Selection Sort
    int minIndex;
    for (int i = 0; i < N; i++) {
        minIndex = i;
        for (int j = i; j < N; j++) {
            if (vec[j][0] <= vec[minIndex][0]) {
                minIndex = j;
            }
        }
        swap(vec[i], vec[minIndex]);
    }

    vector<array<int,2>> buck(N);
    // buck[i][0] -> New required from i
    // buck[i][1] -> Available for i
    buck[0][0] = vec[0][2];
    buck[0][1] = 0;
    int ctr = 0;
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (vec[i][0] > vec[j][1]) {
                ctr++;
                buck[i][1] += buck[j][0];
            } else {
                buck[i][1] -= vec[j][2] - buck[j][0];
            }
        }
        if (ctr == 0) {
            buck[i][0] = vec[i][2];
            buck[i][1] = 0;
        } else {
            if (vec[i][2] > buck[i][1]) {
                buck[i][0] = vec[i][2] - buck[i][1];
            } else {
                buck[i][0] = 0;
            }
        }
        ctr = 0;
    }

    int ANS = 0;
    for (int i = 0; i < N; i++) {
        ANS += buck[i][0];
    }
    cout << ANS;

    return 0;
}


