#include<iostream>
using namespace std;

int main()
{
	int jwog_i=0,jwog_l;
	float jwog_x,jwog_s=0;
	cout<<"ingrese el limite jwog_l="; cin>>jwog_l;
	do{
		
	cout<<"ingrese el numero jwog_x="; cin>>jwog_x;
	jwog_i=jwog_i+1;
	jwog_s=jwog_s+jwog_x;



	}while(jwog_i<jwog_l);
	cout<<"Se ingresaron "<<jwog_l<<" numeros "<< "que sumaron "<<jwog_s<<endl;
	return 0;



}
