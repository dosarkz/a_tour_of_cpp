#include <iostream>
using namespace std;

double square(double x) {
    return x * x;
}

void print_square(double x) {
// include (‘‘import’’) the declarations for the I/O stream library // make names from std visible without std:: (§3.4)
// square a double precision floating-point number
    cout << "the square of " << x << " is " << square(x) << "\n";
}

int main() {
    print_square(1.234); // print: the square of 1.234 is 1.52276
}
