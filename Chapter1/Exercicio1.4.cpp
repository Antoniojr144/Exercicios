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

  // possibilidade 1: declaração e inicialização juntos
  double A[2][2] = {{5, 3}, {2,3}};
  // possibilidade 2: primeiro declaração e depois assinação
  double B[2][2], C[2][2], D[2][2],E[2][2];
  B[0][0] = 7.3;
  B[0][1] = 56;
  B[1][0] = 3.9;
  B[1][1] = 6;

  cout << "Primeira Matriz A:\n" << A[0][0]<<" "
       << A[0][1] << "\n"
       << A[1][0] << " "
       << A[1][1] << endl;
  cout << "Segunda Matriz B:\n" << B[0][0]<<" "
       << B[0][1] << "\n"
       << B[1][0] << " "
       << B[1][1] << endl;

  for ( int i = 0; i < 2; ++i )
    for ( int j = 0; j < 2; ++j ){
      C[i][j]=A[i][j]+B[i][j];
      D[i][j]=A[i][j]*B[i][j];// multiplicação elemento por elemento
      E[i][j]=0;
      for( int k = 0; k < 2; ++k )
        E[i][j]+=A[i][k]*B[k][j];
    }

  cout << "Matriz soma: C=A+B:\n" << C[0][0]<<" "
       << C[0][1] << "\n"
       << C[1][0] << " "
       << C[1][1] << endl;
  cout << "Matriz produto elemento por elemento: D=AXB\n" << D[0][0]<<" "
       << D[0][1] << "\n"
       << D[1][0] << " "
       << D[1][1] << endl;
  cout << "Matriz produto linha por coluna: E=A*B\n" << E[0][0]<<" "
       << E[0][1] << "\n"
       << E[1][0] << " "
       << E[1][1] << endl;


  return 0;
}
