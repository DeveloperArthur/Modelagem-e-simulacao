/*A primeira lei de Ohm afirma que, ao percorrer um resistor (R) a corrente elétrica (i) é diretamente proporcional à
tensão (U) ou seja, U = R * i
onde: U: tensão (V); R: resistência do resistor ou condutor; i: corrente elétrica(A)

(Faça uma simulação que estima a tensão (U) para R = 5.2 e a corrente (i) variando de 0 a 30 A com incremento de 5 A)

simulação abaixo:*/

#include <iostream>

using namespace std;

int main(){
    
    float R = 5.2;
    for (int i=0; i<=30; i=i+5){
        
        cout << "U = " << R*i << endl;
        
    }
       
}
