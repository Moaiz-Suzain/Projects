#include <stdio.h>

int main() {

    int a, b, c, d, e, f = 17;
    a = ++f;
    f = a++;
    b = --a;
    d = ++a;
    e = f--;
    c = d++;
    a = b;
    b = c;
    c = d;
    d = e;
    printf("a: %d, b: %d, c: %d, d: %d, e: %d, f: %d", a, b, c, d, e, f);

    return 0;

}