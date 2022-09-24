//Programa que presenta las operaciones básicas
//Creado por Jeohassin Wilton Orejuela Garcia 
//Fecha: 23-09-2022

#include<iostream>
using namespace std;

int main()
{
	float jwog_x,jwog_y,jwog_s,jwog_m,jwog_d,jwog_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de jwog_x=:";
	cin>>jwog_x;
	cout<<"Ingrese en valor de jwog_jwog_y=:";
	//Operaciones 
	cin>>jwog_y;
	jwog_s=jwog_x+jwog_y;
	jwog_m=jwog_x*jwog_y;
	jwog_d=jwog_x/jwog_y;
	jwog_r=jwog_x-jwog_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<jwog_x<<" + "<<jwog_y<<" = "<<jwog_s<<endl;
	cout<<"Las multiplicacion de "<<jwog_x<<" * "<<jwog_y<<" = "<<jwog_m<<endl;
	cout<<"Las division de "<<jwog_x<<" / "<<jwog_y<<" = "<<jwog_d<<endl;
	cout<<"Las resta de "<<jwog_x<<" - "<<jwog_y<<" = "<<jwog_r<<endl;
	return 0 ;

}

