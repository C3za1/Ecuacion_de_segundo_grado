#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string resp="";
	double a=0.0, b=0.0, c=0.0, f=0.0, s=0.0;
	cout<<"en este programa podras resolver una exprecion algebraica por medio de la ecuacion cuadratica general"<<endl;
	
	do{
		 cout<<"dame el valor para 'a' "<<endl;
		 cin>>a;
		 cout<<"ingresa el valor para 'b'"<<endl;
		 cin>>b;
		 cout<<"ahora ingresa el valor para 'c'"<<endl;
		 cin>>c;
		 cout<<"tus valores asignados son:"<<a<<","<<b<<","<<c<<endl;
		 f=(-b+sqrt(b*b-4.0*a*c ))/2.0*a;
		 s=(-b-sqrt(b*b-4.0*a*c))/2.0*a;
		 cout<<"el valor de  x1 es:"<<f<<endl;
		 cout<<"el valor de  x2 es:"<<s<<endl;
		 
		      cout<<"deseas continuar en el programa?...";
		      cin>>resp;
	}
	while(resp=="si");
	return 0;
}
