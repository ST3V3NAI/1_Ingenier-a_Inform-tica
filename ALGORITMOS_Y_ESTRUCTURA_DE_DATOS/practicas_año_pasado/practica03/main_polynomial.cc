// AUTOR: Steven Abolaji Ibidokun
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 3
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 
// COMPILACIÓN: g++ -g main_polynomial.cc -o main_polynomial
// EJECUCIÓN: ./main_polynomial < data_polynomial.txt

// pauta de estilo google: comentarios multilínea usando solo "/**/"
#include <iostream>

#include "polynomial.h"

using namespace std;

int main()
{
  Polynomial p1, p2, p3; //creamos tres polinomios
  
  cin >> p1 >> p2 >> p3; //se piden
  cout << "p1= " << p1; //se muestran
  cout << "p2= " << p2;
  cout << "p3= " << p3;
  cout << endl;

   // Fase II
  SparsePolynomial sp1(p1), sp2(p2), sp3(p3); //creamos el sparse de cada uno
  cout << "sp1= " << sp1; //se muestran
  cout << "sp2= " << sp2;
  cout << "sp3= " << sp3;
  cout << endl;

  // Fase III
  double x1, x2, x3; //Esto muestra cuanto vale cada polinomio si sustituimos x por un numero
  cin >> x1 >> x2 >> x3;
  cout << "p1(" << x1 << ")= " << p1.Eval(x1) << endl; //todas las opciones posibles
  cout << "p1(" << x2 << ")= " << p1.Eval(x2) << endl;
  cout << "p1(" << x3 << ")= " << p1.Eval(x3) << endl;
  cout << "p2(" << x1 << ")= " << p2.Eval(x1) << endl;
  cout << "p2(" << x2 << ")= " << p2.Eval(x2) << endl;
  cout << "p2(" << x3 << ")= " << p2.Eval(x3) << endl;
  cout << "p3(" << x1 << ")= " << p3.Eval(x1) << endl;
  cout << "p3(" << x2 << ")= " << p3.Eval(x2) << endl;
  cout << "p3(" << x3 << ")= " << p3.Eval(x3) << endl;
  cout << endl;

  cout << "sp1(" << x1 << ")= " << sp1.Eval(x1) << endl; //todas las opciones posibles
  cout << "sp1(" << x2 << ")= " << sp1.Eval(x2) << endl;
  cout << "sp1(" << x3 << ")= " << sp1.Eval(x3) << endl;
  cout << "sp2(" << x1 << ")= " << sp2.Eval(x1) << endl;
  cout << "sp2(" << x2 << ")= " << sp2.Eval(x2) << endl;
  cout << "sp2(" << x3 << ")= " << sp2.Eval(x3) << endl;
  cout << "sp3(" << x1 << ")= " << sp3.Eval(x1) << endl;
  cout << "sp3(" << x2 << ")= " << sp3.Eval(x2) << endl;
  cout << "sp3(" << x3 << ")= " << sp3.Eval(x3) << endl;
  cout << endl;

  // Fase IV
  cout << "p1 == p1? " << (p1.IsEqual(p1) ? "true" : "false") << endl; //todas las igualdades posibles para equal
  cout << "p2 == p2? " << (p2.IsEqual(p2) ? "true" : "false") << endl;
  cout << "p3 == p3? " << (p3.IsEqual(p3) ? "true" : "false") << endl;
  cout << "p1 == p2? " << (p1.IsEqual(p2) ? "true" : "false") << endl;
  cout << "p2 == p1? " << (p2.IsEqual(p1) ? "true" : "false") << endl;
  cout << "p1 == p3? " << (p1.IsEqual(p3) ? "true" : "false") << endl;
  cout << "p3 == p1? " << (p3.IsEqual(p1) ? "true" : "false") << endl;
  cout << "p2 == p3? " << (p2.IsEqual(p3) ? "true" : "false") << endl;
  cout << "p3 == p2? " << (p3.IsEqual(p2) ? "true" : "false") << endl;
  cout << endl;

  cout << "sp1 == sp1? " << (sp1.IsEqual(sp1) ? "true" : "false") << endl; //lo mismo con los sparses
  cout << "sp2 == sp2? " << (sp2.IsEqual(sp2) ? "true" : "false") << endl;
  cout << "sp3 == sp3? " << (sp3.IsEqual(sp3) ? "true" : "false") << endl;
  cout << "sp1 == sp2? " << (sp1.IsEqual(sp2) ? "true" : "false") << endl;
  cout << "sp2 == sp1? " << (sp2.IsEqual(sp1) ? "true" : "false") << endl;
  cout << "sp1 == sp3? " << (sp1.IsEqual(sp3) ? "true" : "false") << endl;
  cout << "sp3 == sp1? " << (sp3.IsEqual(sp1) ? "true" : "false") << endl;
  cout << "sp2 == sp3? " << (sp2.IsEqual(sp3) ? "true" : "false") << endl;
  cout << "sp3 == sp2? " << (sp3.IsEqual(sp2) ? "true" : "false") << endl;
  cout << endl;

  cout << "sp1 == p1? " << (sp1.IsEqual(p1) ? "true" : "false") << endl; 
  cout << "sp2 == p2? " << (sp2.IsEqual(p2) ? "true" : "false") << endl;
  cout << "sp3 == p3? " << (sp3.IsEqual(p3) ? "true" : "false") << endl;
  cout << "sp1 == p2? " << (sp1.IsEqual(p2) ? "true" : "false") << endl;
  cout << "sp2 == p1? " << (sp2.IsEqual(p1) ? "true" : "false") << endl;
  cout << "sp1 == p3? " << (sp1.IsEqual(p3) ? "true" : "false") << endl;
  cout << "sp3 == p1? " << (sp3.IsEqual(p1) ? "true" : "false") << endl;
  cout << "sp2 == p3? " << (sp2.IsEqual(p3) ? "true" : "false") << endl;
  cout << "sp3 == p2? " << (sp3.IsEqual(p2) ? "true" : "false") << endl;
  cout << endl; 

 // ---------------Modificación------------------------------------------------------------------------------------- 

cout << "Mostrare por pantalla los monomios cuyos coeficientes sean ceros" << endl;


  sparse_vector_t mod;

  //valor que desea ver
  int valor = 0; 

  //calculo para cada polinomio
  double result = sp1.QueValorEs(valor);
  cout << "El valor del coeficiente que es 0 para SP1 es:  " << result << endl;

  double result2 = sp2.QueValorEs(valor);
  cout << "El valor del coeficiente que es 0 para el SP2 es:  " << result2 << endl;
  
  double result3 = sp3.QueValorEs(valor);
  cout << "El valor del coeficiente que es 0 para SP3 es:  " << result3 << endl;




  return 0;
}

