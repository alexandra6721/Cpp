/*Escribe un programa que lea de la entrada estandar el precio de un
producto y muestre en la salida estandar el precio del producto al a
aplicarle el IVA*/ 

#include<iostream>

using namespace std;

int main (){
	
	int VP,IVA;
    float resultado=0;
	
	cout<<"Digite el valor del producto: ";cin>>VP;
	cout<<"Digite el porcentaje del IVA: ";cin>>IVA;
	
	
	resultado=IVA*VP/100+VP;
	
	cout<<"\nEl precio del producto con iva es de: "<<resultado<<endl;
	
	return 0;
	
}