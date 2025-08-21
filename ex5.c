#include <stdio.h>

void troca(int v[], int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void inverte(int v[], int i, int f){
    if(i < f){
        troca(v, i, f);
        inverte(v, i+1, f-1);
    }
}

void mostrar(int v[], int n){
    for(int i = 0;i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){
    int v[6] = {1, 5, 2, 7, 6, 4};
    inverte(v, 0, 5);
    mostrar(v, 6);
    return 0;
}
