#include <stdio.h>

int obterMaior(int v[], int idx){
    if(idx == 0) 
        return v[idx];
    else{
        int maior = obterMaior(v, idx-1);
        if(v[idx] > maior)
            return v[idx];
        else return maior;
    }
}

int main(){
    int v[6] = {1, 5, 2, 7, 6, 4};
    
    printf("Maior vetor: %d\n", obterMaior(v, 5));
    return 0;
    
}
