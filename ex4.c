#include <stdio.h>
#include <assert.h>

int potencia(int x, int n){
    if(n == 0) return 1;
    return x * potencia(x, n -1);
}

int fatorial(int n){
    if (n == 0) return 1;
    return n * fatorial(n -1); 
}

int somatoria(int x, int n){
    if(n == 0) return 1;
    return potencia(x,n)/fatorial(n) + somatoria(x, n-1);
}

int main() { 
    assert(somatoria(3,0) == 1);
    assert(somatoria(3,1) == 4);
    assert(somatoria(3,2) == 8);
    assert(somatoria(3,3) == 12);
    
    return 0;
}
