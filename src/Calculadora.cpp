//============================================================================
// Name        : Calculadora.cpp
// Author      : Mariano De La Vitta
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void gotoxy ( int column, int line)
{
COORD coord;
coord.X = column;
coord.Y = line;
SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ), coord);
}

int main()
{
	double num_1;
	double num_2;
	char oper;
	double total;
	short int state;
	short int oper_val;
	char cont_sn;
	short int cont_val;
	short int div_cero;

	num_1 = 0;
	num_2 = 0;
	state = 0;
	oper_val = 0;
	while (state != 1)
	   {
		  cont_val = 0;
		  div_cero = 0;
		  gotoxy(30,8);
		  cout << "Calculadora";
		  gotoxy(25,10);
		  cout << "Ingrese el primer numero: ";
		  cin >> num_1;
		  while (oper_val != 1)
		   	 {
			    gotoxy(25,12);
			    cout <<"Operadores + - * o /";
			    gotoxy (46,13);
			    cout << " ";
			    gotoxy (25,13);
			    cout << "Ingrese el operador: ";
			    cin >> oper;
			    if (oper=='+' || oper=='-' || oper=='*' || oper=='/')
			  	  	{
			  		  	oper_val = oper_val+1;
			  	  	}
			  	 else
			  	  	{
			  		  	gotoxy(25,14);
			  		  	cout <<"Ingrese un operador valido";
			  		}
		   	 }
		  oper_val = 0;
		  gotoxy(25,14);
		  cout << "Ingrese el segundo numero: ";
		  cin >> num_2;
		  if (oper =='+')
		  	  {
			  	  total = num_1 + num_2;
		  	  }
		  else
		  	  {
			  	  if (oper =='-')
			  	  {
			  		  total = num_1 - num_2;
			  	  }
			  	  else
			  	  	  {
			  		  	  if (oper =='*')
			  		  	  	  {
			  		  		  	  total = num_1 * num_2;
			  		  	  	  }
			  		  	  else
			  		  	  	  {
			  		  		  	  if (num_2 != 0)
			  		  		  	  	  {
			  		  		  		  	  total = num_1 / num_2;
			  		  		  	  	  }
			  		  		  	  else
			  		  		  	  	  {
			  		  		  		  	  gotoxy (25,16);
			  		  		  		  	  cout << "No se puede dividir por 0";
			  		  		  		  	  div_cero = div_cero + 1;
			  		  		  	  	  }
			  		  	  	  }
			  	  	  	  }
		  	  	  }
		  	  	  if (div_cero != 1)
		  	  	  	  {
		  	  		   	 gotoxy(25,16);
		  	  		   	 cout << "El resultado es: " << total;
		  	  	  	  }
			  	  while (cont_val != 1)
			  	  	  {
			  		  	  gotoxy (57,17);
			  		  	  cout << " ";
			  		  	  gotoxy(20,17);
			  		  	  cout << "Desea realizar otra operacion? (S/N) ";
			  		  	  cin >> cont_sn;
			  		  	  if (cont_sn =='s' || cont_sn =='S')
			  		  	  	  {
			  		  		  	  cont_val =cont_val + 1;
			  		  		  	  system ("CLS");
			  		  	  	  }
			  		  	  else
			  		  	  	  {
			  		  		  	  if (cont_sn =='n' || cont_sn=='N')
			  		  		  	  	  {
			  		  		  		  	  state = state + 1;
			  		  		  		  	  cont_val = cont_val + 1;
			  		  		  	  	  }
			  		  		  	  else
			  		  		  	  	  {
			  		  		  		  	  gotoxy (25,19);
			  		  		  		  	  cout << "Ingrese una opcion valida";
			  		  		  	  	  }
			  		  	  	  }
			  	  	  	  }
	   }
	gotoxy(25,19);
	cout << "Gracias por utilizarme   ";
	gotoxy(20,20);
	system("pause");
	return 0;
}
