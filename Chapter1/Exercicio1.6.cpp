/**
 * \ingroup Exercicios/Chapter1
 *
 * \brief Exercicio 1.6
 *
 * Solução do exercicio 6 do capitulo 1 do livro "Guide 
 * to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
 * segunda edição; 
 *
 * \author Antonio Francisco Jr. (UEL)
 *
 * \version 0.1
 *
 * \date 21/02/2020
 *
 * contact: antoniofranciscojr144@hotmail.com
 */

#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main( int argc, char* argv[] ){

  cout << " Exercicio 1.6:\n";

  int carros[5];
  for( int i = 0; i < 5; ++i){
    cout << "Carros do dia " << i+1 << ":" << endl;
    cin >> carros[i]; 
  }

  double media = 0;
  for( int i = 0; i < 5; ++i){
    media+=carros[i];
  }
  media=media/5;

  cout << "A media é:" << media << endl;
  return 0;
}
