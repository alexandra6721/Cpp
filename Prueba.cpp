#include<iostream>
#include<math.h>
using namespace std;


int main(){
	float catetoa, catetob, hipotenusa, resultado;
	
	cout<<"Digite el valor del cateto a: "; cin>>catetoa;
	cout<<"Digite el valor del cateto b: "; cin>>catetob;
	
    hipotenusa= (sqrt(pow(catetoa,2))+(pow(catetob,2)));

    cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
    
return 0;
}
	