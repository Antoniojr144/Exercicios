/**
 * \ingroup Exercicios/Chapter1
 *
 * \brief Exercicio 1.2
 *
 * Solução do exercicio 2 do capitulo 1 do livro "Guide 
 * to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
 * segunda edição; 
 *
 * \author Antonio Francisco Jr. (UEL)
 *
 * \version 1.0
 *
 * \date 17/02/2020
 *
 * contact: antoniofranciscojr144@hotmail.com
 */

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){

  int num1, num2, prod;

  cout << "Digite o primeiro número\n";
  cin >> num1;
      
  cout <<"Digite o segundo número\n";
  cin >> num2;
  
  prod = (num1)*(num2);
  cout << "O produto é " << prod << "." << endl;

  return 0;
}	
