#include <stdio.h>

int P(int n, int x, int c[]){
    if(n == 0) return c[0];
    return P(n-1, x, c)*x + c[n];
}    

int main() {
    int c[4] = {3, 4, 2, -7};
    int x = 1;
    printf("Resultado: %d\n", P(3, x, c));
    return 0;
}
