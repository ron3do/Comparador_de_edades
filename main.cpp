#include <iostream>

using namespace std;

int main() {
  int edad1; // se crea una variable para almacenar la primera edad
  int edad2; // se crea una variable para almacenar la segunda edad
  
  cout<<"DIgite la primera edad\n"; /* Se vsualiza en la pantalla el                          mensaje para que se ingrese la primera                              edad*/
  
  cin>> edad1; // se graba la primera edad en la variable             correspondiente
  
  cout<<"DIgite la segunda edad\n"; /* Se vsualiza en la pantalla el                          mensaje para que se ingrese la segunda                              edad*/
  
  
  cin>> edad2; // se graba la segunda edad en la variable             correspondiente
  
  if (edad1==edad2) // se realiza la comparacion de las edades
  
  cout<<"True"; // de ser cierta se visualiza el mensaje TRUE
  
  else 
  
  cout<<"False"; // de ser falsa se visualiza el mensaje FALSE
}


