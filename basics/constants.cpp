constexpr double square(double x) { return x * x; }

constexpr double max1 = 1.4 * square(17); // OK 1.4*square(17) is a constant expression
constexpr double max2 = 1.4 * square(var); // error: var is not a constant expression
const double max3 = 1.4 * square(var); // OK, may be evaluated at run time

constexpr double nth(double x, int n) // assume 0 <= 0
{
    double res = 1;
    int i = 0;
    while (i < n) {
        res *= x;
        ++i;
    }
    return res;
}