#include <stdio.h>
#include <assert.h>

int somaImpares(int n){
    if (n == 1) return 1;
    return (2*n-1) + somaImpares(n-1);
}

int main(){
    assert(somaImpares(5) == 25);
    assert(somaImpares(4) == 16);
    assert(somaImpares(6) == 36);
    
    return 0;
}
