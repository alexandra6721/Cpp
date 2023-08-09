/* Escriba un programa que lea de la entrada estándar de los dos catetos de 
un triángulo rectángulo y escriba en la salida estándar su hipotenusa*/
#include<iostream>
#include<math.h>
using namespace std;


int main(){
	float catetoa, catetob, hipotenusa, resultado;
	
	cout<<"Digite el valor del cateto a: "; cin>>catetoa;
	cout<<"Digite el valor del cateto b: "; cin>>catetob;
	
	hipotenusa=catetoa*catetoa+catetob*catetob;
	resultado= (sqrt(hipotenusa));
	
    cout<<"\nLa hipotenusa es: "<<resultado<<endl;
    
return 0;
}