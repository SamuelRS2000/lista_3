
/*
Lista3
Exercicio 5
Autor: Samuel Rodrigues dos Santos
Data: 28/03/2024
*/
#include <iostream>
using namespace std;
int main(){
     char carac;
     cout << "Digite o caracter";
     cin >> carac;

     switch(carac) {
      case 'a':
        cout << " E a vogal \"a\" ";
        break;
      case 'e':
        cout << " E a vogal \"e\" ";
        break;
      case 'i':
        cout << " E a vogal \"i\" ";
        break;
      case 'o':
        cout << " E a vogal \"o\" ";
        break;
      case 'u':
        cout << " E a vogal \"u\" ";
        break;

      default:
        cout << "Não e uma vogal";
    }
    return 0;
    }
