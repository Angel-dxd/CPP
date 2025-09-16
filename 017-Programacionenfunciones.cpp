#include <iostream>
#include <string>
using namespace std;
//Manera de hacer cajas negras en programacion

double suma(double operando1, double operando2){
  double resultado = operando1 + operando2;
  return resultado;
}
int main(){
  cout << suma(4,3) << "\n";
  cout << suma(7,3) << "\n";
  
  return 0;
}
