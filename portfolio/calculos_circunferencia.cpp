#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

double ler(){
  double x, result, d, r, a;
  cout << "Digite o comprimento da circunferência: ";
  cin >> x;
  return x;
}

double raio(double x){
  double r;
  r = (x / 2) * 3.14;
  return r;
}

double diametro(double r){
  double d;
  d = 2 * r;
  return d;
}

double area(double x){
  double a;
  a = (pow(x, 2) / (4 * 3.14));
  return a;
}

void resultado(double d, double r, double a){
  cout << "O diâmetro do círculo é: " << d << endl;
  cout << "O raio do círculo é: " << r << endl;
  cout << "A área do círculo é: " << a << endl;
}

int main() {
  double r, d, a, x, tecla;
  bool verifica;

  do{
    cout << "1 - Executar programa" << endl;
    cout << "2 - Sair" << endl;
    cin >> tecla;

    if(tecla < 1 || tecla > 3){
      cout << "Escreva números válidos!" << endl;
      verifica = true;
    }

    switch((int)tecla){
      case 1: {
        x = ler();
        r = raio(x);
        d = diametro(r);
        a = area(r);
        resultado(d, r, a);
        break;    
      }

      case 2: {
        cout << "Programa finalizado!";
        exit(0);
        break;
      }
    }
  }while(tecla == 1 || verifica == true);
  return 0;
}