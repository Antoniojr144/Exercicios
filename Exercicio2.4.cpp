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
/*
  double w[3];
  for ( int i = 0; i<3; i++)
   {
      w[i] = u[i] - 3*v[i];
   }
**/
/*
  double x[3];
  for (int i = 0; i<3; i++)
   {
     x[i] = u[i] - v[i];
   }
  cout << x[0]<< x[1] << x[2] << endl;
**/
/* 
  double y[3];
  for( int i = 0; i < 3; ++i)
   for ( int j = 0; j < 3; ++j)
    for( int k = 0; k < 3; k++)
   {
      y[i] = A[i][j]*u[k];
   }
  cout << y[0] << y[1] << y[2]<< endl;
**/
/*
  double z[3];
  for(int i = 0; i < 3; ++i)
   for(int j = 0; i< 3; ++j)
    for ( int k = 0; k < 3; k++)
    {
       z[i] = A[i][j]*u[k] - v[k];
    }
  cout << z[0] << z[1] << z[2] << endl;
**/
/**
  double c[3][3];
  for(int i = 0; i < 3; ++i)
   for(int j = 0; i< 3; ++j)
   {
     c[i][j] = 4*A[i][j] - 3*B[i][j];
 
   }

  cout << c[0][0][0] <<"\n" 
       << c[1][1][1]<<"\n"
       << c[2][2][2]<< endl;
**/
  double D[3][3];
  for(int i = 0; i < 3; ++i)
   for(int j = 0; i< 3; ++j)
  {
     D[i][j] = A[i][j]*B[i][j];
  }

 cout << D[0][0][0] << D[1][1][1]<< D[2][2][2]<< endl;


  return 0;
}
