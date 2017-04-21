#include<conio.h>
#include<iostream>
using namespace std;
main(){
	int b,i,n,m,d,t=0;
	cout<<"introduzca un numero: \n";
	cin>>n;
	while(n>0){
		b=n%2;
		n=n/2;
		t=(t*10)+b;
	}
	while(t>0){
		d=t%10;
		t=t/10;
		m=(m*10)+d;
	}	
	cout<<m;
}
