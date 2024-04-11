
/*
Lista3
Exercicio 4
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){
     int num =0,deci =0;
     cout << "Insira o numero  na forma binario " << endl ;
     cin >> num;
     for (int i = 10,j=0; ; i*=10, j++){
          deci += pow(2,j) *(num%i / (i/10)); // Separao e multiplico por seu repectivo peso 2^j
          if (int(num/i) == 0) break;
     }
     cout << " O numero decimal equivalente e "<< deci;
     return 0;
}
