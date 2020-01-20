#include "iostream"
#include "cstdlib"
#include "math.h"
#include "cstdlib"
using namespace std;

int main() {
  float a, b, c, delta, x1, x2;
  int tecla;
  bool verifica;

  do{

    cout << "1 - Executar o programa" << endl;
    cout << "2 - Sair" << endl;
    cin >> tecla;

    if(tecla < 1 || tecla > 2){
      cout << "Escreva números válidos!" << endl;
      verifica = true;
    }

    switch ((int) tecla){
      case 1 :{
      cout << "Digite o primeiro valor do coeficiente A: ";
      cin >> a;

      if (a == 0){
        cout << "Não é uma equação do 2° Grau! O valor de A deve ser <> de 0! Tente novamente!" << endl;
        break;
      }

      cout << "Digite o segundo valor do coeficiente B: ";
      cin >> b;

      cout << "Digite o terceiro valor do coeficiente C: ";
      cin >> c;

      delta = b * b - 4 * a * c;

      cout << "Delta é: " << delta << endl << endl;

      if (delta > 0 || delta == 0){

        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;

        cout << "O valor da primeira raiz (X1) é: " << x1 << endl;

        cout << "O valor da segunda raiz (X2) é: " << x2 << endl;
      } else if (delta < 0){
          cout << "Sem soluções no conjunto dos reais!" << endl;
        }
        break;
      }

      case 2 :{
        cout << "Programa finalizado!";
        exit(0);
      }
    }
  }while(tecla == 1 || verifica == true);
  
return 0;
}
