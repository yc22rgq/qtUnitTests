#include "gcd.h"

int GCD::gcd(int a, int b) {
    if (a == 0 || b == 0) return 0;

    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }
    while (a % b != 0) {
        a = a % b;
        int t = a;
        a = b;
        b = t;
    }
    return b;
}

int GCD::lcm(int a,int b) {
    if (gcd(a, b) == 0) return 0;
    return a/gcd(a,b) * b;
}
