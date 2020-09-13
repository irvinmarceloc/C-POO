/*Algoritmo que calcula la hipotenusa dado dos catetos, usando el método de programación orientada a objetivo POO*/

#include <math.h>
#include <iostream.h>
#include <conio.h>


class Hipotenusa {

	float cat1, cat2;

	public:

	void asignar_val(float a , float b)
	{ 	
		cat1 = a ;
		cat2 = b;
	}

	float calcular_hip( )
	{ 
		float h ;
		h = sqrt (pow(cat1,2) + pow(cat2, 2));
		return(h); 
	}
};

//Programa Principal 
void main( )
{
	float a, b;
	float res;
	clrscr( );
	/* se crea el objeto */
	Hipotenusa obj_hip;

	cout << “Entrar el valor de a : “;
	cin>> a;

	cout << “Entrar el valor de b : “;
	cin>> b;

	// Activación de mensajes
	obj_hip.asignar_val(a, b);
	res = obj_hip.calcularhip();
	cout<<”Hipotenusa es= “<< res;
	getch();
}