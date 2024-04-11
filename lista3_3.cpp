
/*
Lista3
Exercicio 3
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;
int main(){
    int  num =0;
    cout << " Digite numero de 5 digitos inteiros" << endl;
    cin >> num;
    if( ((num %10) == (num % 100000 / 10000 ) ) && ( (num % 100 / 10) == (num % 10000 / 1000 )))
      cout << "e um palíndromo.";
    else cout << "não e um palíndromo.";

    return 0;

}
