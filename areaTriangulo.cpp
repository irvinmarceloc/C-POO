/* Calcular el área de un triángulo (1/2*b*h). Imprimir los datos de entrada y el resultado.*/
#include <iostream>
using namespace std;
class Triangulo{
	/*Bloque de declaración de variables*/
	float altura, base;

	/*Definicion de metodos*/
public: 
	void asignar(float a, float b){
		altura = a;
		base = b;
	}
	float calcular_area(){
		float area;
		area = 0.5*altura*base;
		return area;
	};
};
//Programa principal 
int main(int argc, char const *argv[])
{
	/* Bloque de Declaración de variables y objetos */
	/* Declaración de variables */
	float a,b;
	float area;
	/* Se crea el objeto */
	Triangulo obj_triangulo;
	/* Bloque de Declaración de instrucciones*/	
		cout<<"Entrar altura : ";
		cin>> a;
		cout<<"Entrar base : ";
		cin>> b;
	/* Activación de mensajes */
		obj_triangulo.asignar(a,b);
		area = obj_triangulo.calcular_area();
	/* Imprimir area */
		cout<<"Area del triángulo es "<<area;
	return 0;
}
