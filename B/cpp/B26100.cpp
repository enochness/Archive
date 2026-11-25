/**
 * Enoch Yu
 * ABC240A
 * https://atcoder.jp/contests/abc240/tasks/abc240_a
 */

#include <iostream>

using namespace std;

int num1;
int num2;
int diff;

void connection() {
    cin >> num1 >> num2;

    diff = num1 - num2;

    switch (diff) {
        case 1:
            cout << "Yes\n";
            break;
        case -1:
            cout << "Yes\n";
            break;
        case 9:
            cout << "Yes\n";
            break;
        case -9:
            cout << "Yes\n";
            break;
        default:
            cout << "No\n";
            break;
    }

/*
    if (diff == 1) {
        cout << "Yes\n";
    } else if (diff == -1) {
        cout << "Yes\n";
    } else if (diff == 9) {
        cout << "Yes\n";
    } else if (diff == -9) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
*/
}

int main() {
    connection();

    return 0;
}


