/*
ciclo while
imprimir los numeros pares

*/
///escribir un programa que le pda un numero entrero "n" al usuario
///y que imprima todos numeros pares hasta ese "n"

#include <iostream>
using namespace std;

int main (){

int numeroIngresa;
int resultado;

cout<<"ingresar un numero  ";

cin>>numeroIngresa;

for (int i= 1; i<10; i++) {

resultado= i * numeroIngresa;

cout<< resultado <<endl;
}
return 0;
}
