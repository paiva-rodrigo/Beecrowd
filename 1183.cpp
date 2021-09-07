#include<iostream>
using namespace std;


int Soma(int matriz[12][12]){
	int soma=0;
	for(int i=0;i<12;i++){
  	for(int j=0;j<12;j++){
  		if(j>i){
  			soma+=matriz[i][j];
		  }
  		
  	}
  }
		
	return soma;
}

int main(){
	
	int matriz[12][12];
	string st;
	  for(int i=0;i<12;i++){
	  	for(int j=0;j<12;j++){
	  		cout<<"Digite o numero da "<<j+1<<"coluna e linha "<<i+1<<endl;
	  		cin>>matriz[i][j];
	  	}
	  }
	cout<<"Digite S para soma e A para a media:  ";
	cin>>st;
	if(st == "S"){
		int a = Soma(matriz);	
		cout<<"Valor da soma: "<<a<<endl;
	}else{
		int b = Soma(matriz)/66;	
		cout<<"Valor da média: "<<b<<endl;
	}		
}
