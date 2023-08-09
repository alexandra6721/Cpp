/*Escriba un programa que lea la nota final de cuatro alumnos y calcule 
la nota final media de los cuatro alumnos.*/
#include<iostream>
using namespace std;
 
int main(){
	int a,b,x,y,resultado;
	
	cout<<"Digite la nota final a: ";cin>>a;
	cout<<"Digite la nota final b: ";cin>>b;
	cout<<"Digite la nota final x: ";cin>>x;
	cout<<"Digite la nota final y: ";cin>>y;
	
	resultado=((a+b+x+y)/4);
	
	cout<<"El resultado es: "<<resultado<<endl;

	return 0;
}