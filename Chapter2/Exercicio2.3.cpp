/**
* ** \ingroup Exercicios/Chapter2
* **
* ** \brief Exercicio 2.2
* **
* ** Solução do exercicio 3 do capitulo 2 do livro "Guide 
* ** to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
* ** segunda edição; 
* **
* ** \author Antonio Francisco Jr. (UEL)
* **
* ** \version 0.1
* **
* ** \date 03/03/2020
* **
* ** contact: antoniofranciscojr144@hotmail.com
* **/
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int soma, nota;
  soma = 0;
  
  cout << " Forneça a nota ou -1 para finalizar: ";
  cin >> nota;
/**
   while ( nota != -1) {
   soma = soma + nota;
   cout << " Forneça a nota ou -1 para finalizar :";
   cin >>  nota;
**/
/**   
   while ( nota != -1) {
   soma = soma + nota;
   cout << " Forneça a nota ou -1 para finalizar :";
   cin >>  nota;
   if ( soma >= 100)
   break;
}
**/
   while ( nota != -1) {
   soma = soma + nota;
   cout << " Forneça a nota ou -1 para finalizar :";
   cin >>  nota; }
   for ( nota = -2 ; soma = 0; soma = soma + nota) 
  
  cout <<  " A soma é :" << soma << endl;
  return 0;
}
