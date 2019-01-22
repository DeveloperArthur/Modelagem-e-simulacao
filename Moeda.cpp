/*Uma moeda é lançada 3 vezes. Suponha que a moeda seja "honesta"
isto é, P(cara) = P(coroa) = 1/2. Repare que o resultado de um lançamento
não tem influência alguma no resultado de qualquer outro.
Desejamos calcular qual é a probabilidade de se obter duas caras.
Para tanto, podemos usar o modelo da distribuição de probabilidade Binomial.
onde n é o número de repetições do experimento, k é a probabilidade do fracasso

Supondo que a moeda seja lançada 10 vezes, qual é a probabilidade de se obter 7 coroas?

simulação da probabilidade abaixo: */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int k=7, n=10, kmn = n-k;
    float fatDeN, fatDeKN, fatDeK;
    
    for (fatDeN = 1; n>1; n=n-1){
        fatDeN = fatDeN*n;
    }
    for (fatDeK = 1; k>1; k=k-1){
        fatDeK = fatDeK*k;
    }
    for (fatDeKN = 1; kmn>1; kmn=kmn-1){
        fatDeKN = fatDeKN*kmn;
    }
    
    k=7; n=10;
    
    printf("%.2f", fatDeN / (fatDeK*(fatDeKN))*pow(0.5, k+(n-k)));
    
}
