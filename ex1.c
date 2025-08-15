#include <stdio.h>
#include <assert.h>

int mult(int a, int b) {
    if(b == 1) return a;
    else return mult(a, b-1) + a;
}

int main() {
    assert(mult(2,3) == 6);
    assert(mult(12,3) == 36);
    return 0;
}
