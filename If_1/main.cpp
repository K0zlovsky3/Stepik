#include <iostream>

int main() {
    using std::cin;
    using std::cout;
    using std::endl;
    int a, b, c;
    cin >> a >> b >> c;
    bool expr_1 = a >= b && a >= c;
    bool expr_2 = b >= a && b >= c;
    bool expr_3 = c >= a && c >= b;
    if (a >= b && a >= c || expr_1) {
        cout << a;
    }   else if (b >= a && b >= c || expr_2) {
            cout << b;
    }   else if (c >= a && c >= b || expr_3) {
            cout << c;
    }
    else {
        cout << "null";
    }
    return 0;
}
