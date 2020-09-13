/*Algoritmo que calcula la hipotenusa dado dos catetos, usando el método de programación orientada a objetivo POO*/
#include <math.h>
#include <iostream>
using namespace std;
class Hipotenusa
{
	float cat1, cat2;
public:
	void asignar_val(float a, float b){
		cat1 = a;
		cat2 = b; 
	}
	float calcular_hip(){
		float h;
		h = sqrt(pow(cat1,2) + pow(cat2,2));
		return (h);
	};
};
// Programa Principal 
int main(){
	/* Declaración de variables y objetos */
	/* Declaración de variables */
	float a,b;
	float res;
	/*	se crea el objeto  */
	Hipotenusa obj_hip;
	cout<<"Entrar el cateto a: ";
	cin>> a;
	cout<<"Entrar el cateto b: ";
	cin>> b;
	//Activación de mensajes
	obj_hip.asignar_val(a,b);
	res = obj_hip.calcular_hip();
	cout<<"Hipotenusa es "<<res;
    return 0;
}
