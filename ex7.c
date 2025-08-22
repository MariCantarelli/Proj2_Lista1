#include <stdio.h>

int conta_digitos(int n, int k){
    if(n == 0) return 0;
    // return conta_digitos(n/10,k) + (n % 10 == k);
    else{
        if(n % 10 == k)
            return conta_digitos(n/10,k) + 1;
        else return conta_digitos(n/10, k);
    }
}

int main() {
    int n, k;
    n = 291129269;
    k = 2;
    printf("%d\n", conta_digitos(n,k));
    return 0;
}

