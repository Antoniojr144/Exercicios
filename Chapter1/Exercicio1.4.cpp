/**
 ** \ingroup Exercicios/Chapter1
 **
 ** \brief Exercicio 1.4
 **
 ** Solução do exercicio 4 do capitulo 1 do livro "Guide 
 ** to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
 ** segunda edição; 
 **
 ** \author Antonio Francisco Jr. (UEL)
 **
 ** \version 0.1
 **
 ** \date 17/02/2020
 **
 ** contact: antoniofranciscojr144@hotmail.com
 **/

#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){

  double i,j,A,B,C,D;// Matrizes com ponto flutuante e i j para soma e multiplicação de matrizes.
  
  double array1[2][2] = { {5, 3}, {2,3}};
  double array2[2][2] = { {7.3,56},{3.9,6}};

  cout << "Primeira Matriz A:" << array1[2][2]<<" "
       << array1[2][2] << " "
       << array1[2][2] << endl;
  cout << "Segunda Matriz B:" << array2[2][2]<<" "
       << array2[2][2] << " "
       << array2[2][2] << endl;

  for ( i = array1[0]; i < array1[4]; i= j+1)
    for ( j = array1[0]; i < array2[4]; j = j+1)

  C = array1[0]+ array2[0] 

  D = array1[0]*array2[0] 

  cout << "A Matriz C é:" << C << endl;
  cout << "A Matriz D é:" << D << endl;

  return 0;
}
