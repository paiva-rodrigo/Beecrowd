#include<iostream>
#include<stdlib.h>
#include<iomanip>


using namespace std;

int main(){
	
	double R;
	double p=3.14159;
	cout<<"";
	cin>>R;
	double A = (R*R)*p;
	cout<<fixed<<setprecision(4);
	cout<<"A="<<A<<endl;
		
	return 0;
}
