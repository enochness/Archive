/**
 * Enoch Yu
 * ABC474B
 * https://atcoder.jp/contests/abc474/tasks/abc474_b
 */

#include <iostream>
#include <vector>
using namespace std;

int sum(int srt, int end) {
    int sum = 0;
    for (int i = srt; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int sumVec(int srt, int end, vector<int> vec) {
    int sum = 0;
    for (int i = srt; i < end; i++) {
        sum += vec[i];
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    int a = N / 10;
    int r = N % 10;

    int counter = 0;
    for (int i = 1; i <= a; i++) {
        if (sum(10*(i-1) + 1, 10*i) == sumVec(10*(i-1), 10*i, vec)) {
            counter++;
        }
    }
    if (sum(10*a + 1, 10*a + r) == sumVec(10*a, 10*a + r, vec)) {
        counter++;
    }

    if (counter == a + 1) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}


