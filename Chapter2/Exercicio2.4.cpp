/**
 * * ** \ingroup Exercicios/Chapter2
 * * **
 * * ** \brief Exercicio 2.4
 * * **
 * * ** Solução do exercicio 4 do capitulo 2 do livro "Guide 
 * * ** to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
 * * ** segunda edição; 
 * * **
 * * ** \author Antonio Francisco Jr. (UEL)
 * * **
 * * ** \version 0.1
 * * **
 * * ** \date 05/03/2020
 * * **
 * * ** contact: antoniofranciscojr144@hotmail.com
 * * **/
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main ( int argc, char*argv[]){

  double u[3] = {1.0, 2.0, 3.0};
  double v[3] = {6.0, 5.0, 4.0};
  double A[3][3] = { { 1.0, 5.0, 0.0},
                   {7.0, 1.0, 2.0},
                   {0.0, 0.0, 1.0}};
  double B[3][3] = {{-2.0, 0.0, 1.0},
                   {1.0,  0.0, 0.0},
                   { 4.0, 1.0, 0.0}};

  double w[3];
  for ( int i = 0; i<3; i++)
   {
      w[i] = u[i] - 3*v[i];
   }

  double x[3];
  for (int i = 0; i<3; i++)
   {
     x[i] = u[i] - v[i];
   }
  cout << x[0]<< " " << x[1] << " " << x[2] << endl;


  double y[3];
  for( int i = 0; i < 3; ++i)
  {
    double soma = 0;
    for ( int j = 0; j < 3; ++j)
    {
      soma += A[i][j]*u[j];
    }
    y[i]=soma;
  }
  cout << y[0] << " " << y[1] << " " << y[2]<< endl;


  double z[3];
  for(int i = 0; i < 3; ++i)
  {
   double soma = 0;  
   for(int j = 0; j< 3; ++j)
    {
       soma += A[i][j]*u[j];
    }
    z[i] = soma - v[i];
  }
  cout << z[0] << " " << z[1] << " " << z[2] << endl;

  double c[3][3];
  for(int i = 0; i < 3; ++i)
  {
    for(int j = 0; j < 3; ++j)
    {
      c[i][j] = 4*A[i][j] - 3*B[i][j];
      cout << c[i][j] << " ";
    }
    cout << endl;
  }

  double D[3][3];
  for(int i = 0; i < 3; ++i)
  {
    for(int j = 0; j < 3; ++j)
    {
      double soma = 0;
      for(int k = 0; k < 3 ; ++k)
      {
        soma += A[i][k]*B[k][j];
      }
      D[i][j] = soma;
      cout << D[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
