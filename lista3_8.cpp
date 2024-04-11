
/*
Lista2
Exercicio 8
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>

using namespace std;

int main(){
     float num1,num2;
     char op;
     
     cout << "Insira o primeiro número";
     cin >> num1;
     cout << "Insira o segundo número";
     cin >> num2;
     cout <<"Escolha a operação (\"+\" , \"-\" , \"*\" ou \"/\")";
     cin >> op;
      
     switch(op) {
        case '+':
          cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
          break;
        case '-':
          cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
          break;
        case '*':
          cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
          break;
        case '/':
          cout << num1 << " / "  << num2 << " = " << num1/num2 << endl;
          break;
        default :
          cout << " Operação inválida (escolha entre  \"+\" , \"-\" , \"*\" ou \"/\")";
     }
return 0;

}
