/**
 * Enoch Yu
 * ABC220A
 * https://atcoder.jp/contests/abc220/tasks/abc220_a
 */

#include <iostream>

using namespace std;

int A;
int B;
int C;
int Q1;
int Q2;
int X;

void checker() {
    cin >> A >> B >> C;

    while (
            1 <=A &&
            A <= B &&
            B <= 1000 &&
            1 <= C &&
            C <= 1000
            ) {
        Q1 = B / C;
        Q2 = A / C;

        if (Q1 == Q2 && A != C) {
            cout << "-1\n";
            break;
        } else {
            X = Q1 * C;
            cout << X << endl;
            break;
        }
    }
}

int main() {
    checker();

    return 0;
}


