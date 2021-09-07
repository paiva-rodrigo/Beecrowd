#include<iostream>
#include<stdlib.h>
#include<iomanip>
# define p 3.14159

using namespace std;

int main(){
	
	float a,b;
	cout<<"";
	cin>>a;
	cout<<"";
	cin>>b;
	float Med = (a*3.5+b*7.5)/11;
	cout<<fixed<<setprecision(5);
	cout<<"MEDIA = "<<Med<<endl;
	
	
	return 0;
}
