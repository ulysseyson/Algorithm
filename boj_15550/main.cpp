#include <iostream>
using namespace std;
int main() {
    int a = 99999998;
    float b = 99999999;
    int c = 9999999;
    if (a == b && b == c && c != a) {
        cout << "true" << '\n';
    } else {
        cout << "false" << '\n';
    }
    return 0;
}