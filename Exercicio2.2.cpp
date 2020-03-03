/**
** \ingroup Exercicios/Chapter2
**
** \brief Exercicio 2.2
**
** Solução do exercicio 2 do capitulo 2 do livro "Guide 
** to Scientific Computing in C++", de J. Pitt-Francios e J. Whiteley, 
** segunda edição; 
**
** \author Antonio Francisco Jr. (UEL)
**
** \version 0.1
**
** \date 28/02/2020
**
** contact: antoniofranciscojr144@hotmail.com
**/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char*argv[]){

  double p,q,x,y;
  int j;
  cout << " Digite p:" << endl;
  cin >> p;
  cout << " Digite q:"<< endl;
  cin >>  q;
  cout << " Digite j:"<< endl;
  cin >> j;

  /*/1
  if ( ( p >= q ) || ( j != 10 ) )
  { 
     x = 5;
  }*/
  
  //2
  if ( ( y >= q ) && ( j == 20 ) )
  { 
    x = 5;
  }
  else 
  { 
     x = p;
  }

  /*3 
  if( p > q )
  {
    x = 0;
  }
  else if( ( p <= q ) && j == 10 )
  {
    x = 1;
  }
  else
  { 
    x = 2;
  }
  */

  cout << "X = " << x << endl;

  return 0;
}
file:///usr/share/doc/HTML/index.html
