/* O resfriamento da cerveja pode ser modelado a partir da seguinte equação: 
T(t) = T0e elevado a -k*t
onde: T0: temperatura inicial(ºC); k: coeficiente de resfriamento; t: tempo(min)

Faça uma simulação que estima a temperatura (ºC) para T0=20º
e o tempo variando de 0 a 40min com incremento de 5min, a partir 
da inserção do parâmetro k>0 

simulaçao abaixo: */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float T = 20.0, k=-3.7;
    
    for (int i=0; i<=40; i=i+5){
        
        printf("%.4e\n", exp(k*i)*T);
        
    }
    
}
