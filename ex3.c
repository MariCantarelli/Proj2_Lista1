#include <stdio.h>
#include <assert.h>

int potencia(int x, int n){
    if(n == 0) return 1;
    return x * potencia(x, n -1);
}

int main() { 
    assert(potencia(2, 3) == 8);
    assert(potencia(5, 2) == 25);
    assert(potencia(3, 3) == 27);
    
    return 0;
}
