#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main(){
	
	double a,b,c;
	double p = 3.14159;
	cout<<"";
	cin>>a;
	cout<<"";
	cin>>b;
	cout<<"";
	cin>>c;
	double Cir = (c*c)*p;
	double Tri = (c*a)/2;
	double Tra = ((a+b)*c)/2;
	double Qua = (b*b);
	double Ret = b*a;
	
	cout<<fixed<<setprecision(3);
	cout<<"TRIANGULO: "<<Tri<<endl;
	cout<<"CIRCULO: "<<Cir<<endl;
	cout<<"TRAPEZIO: "<<Tra<<endl;
	cout<<"QUADRADO: "<<Qua<<endl;
	cout<<"RETANGULO: "<<Ret<<endl;
		
	return 0;
}
