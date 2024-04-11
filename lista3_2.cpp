
/*
Lista_3
Exercicio 2
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;
int main(){
  float gas =0, etan =0;
        cout << "Valor do etanol" << endl;
        cin >> etan;
        cout << "Valor da gasolina" << endl;
        cin >> gas;
        if(etan/gas < 0.70) cout << "Abasteça com etanol" << endl;
        else cout << "Abasteça com gasolina ";
return 0;
}
