#include <iostream>
using namespace std;

int a, b, c;
int sum;

void additionOperator() {
    cin >> a >> b >> c;

    sum = a + b + c;
}

int main() {
   additionOperator();
   cout << sum << endl;

   return 0;
}

