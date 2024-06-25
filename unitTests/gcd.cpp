#include "gcd.h"

int GCD::gcd(int a, int b) {
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
