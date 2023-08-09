#include<iostream>
#include<math.h>
using namespace std;
int main (){
	float a,b,c,x1,x2;
	
	cout<<"\nLa ecuacion a resolver es ax^2+bx+c=0"<<endl;
	cout<<"Digite el valor de a: ";cin>>a;
	cout<<"Digite el valor de b: ";cin>>b;
	cout<<"Digite el valor de c: ";cin>>c;
	
	x1=(-a+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<<"\nSolucion de x1 es: "<<x1;
	cout<<"\nSolucion de x2 es: "<<x2<<endl;
	
	
	
	return 0;
}                                                        