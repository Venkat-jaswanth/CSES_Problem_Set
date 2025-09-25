#include <iostream>
using namespace std;
 
int main() {
    long long int n;
    cin >> n;
    long long int a, b, num;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a >= b) {
            if (a % 2 != 0) {
                num = (a - 1) * (a - 1) + b;
            } else {
                num = a * a - b + 1;
            }
        } else {
            if (b % 2 == 0) {
                num = (b - 1) * (b - 1) + a;
            } else {
                num = b * b - a + 1;
            }
        }
        cout << num << endl;
    }
    return 0;
}
