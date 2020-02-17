/**
 * \ingroup Exercicios/Chapter1
 *
 * \brief Exercicio 1.3
 *
 * Solução do exercicio 3 do capitulo 1 do livro "Guide 
 * to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
 * segunda edição; 
 *
 * \author Antonio Francisco Jr. (UEL)
 *
 * \version 0.1
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

  double sp, mod1, mod2; // Salar product and moduluses, defined later

  double array1[3] = { 7.2, 1e-2, 47 };
  double array2[3] = { 45, 142, 12 }; 

  cout << "Primeiro vetór: " << array1[0] << " "  
       << array1[1] << " " 
       << array1[2] << endl;

  cout << "Segundo vetór: " << array2[0] << " " 
       << array2[1] << " " 
       << array2[2] << endl;

  sp = array1[0]*array2[0] + array1[1]*array2[1] + array1[2]*array2[2];
  cout << "Produto escalar: " << sp << endl;

  mod1 = sqrt(pow(array1[0],2)+
              pow(array1[1],2)+
	      pow(array1[2],2));
  mod2 = sqrt(pow(array2[0],2)+
              pow(array2[1],2)+
	      pow(array2[2],2));
  cout << "Modulus primeiro vetór: " << mod1 << endl;
  cout << "Modulus segundo vetór: "  << mod2 << endl;

  return 0;
}	
