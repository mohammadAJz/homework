#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float n,h,r ;

cout<<"please enter n= ";
cin>>n;
if (n<6000000){
	cout<<n;
}
else if (n>=6000000&&n<8000000){
	h=n*0.05;
}
else if (n>=8000000&&n<10000000){
	h=n*0.10;
}
else if (n>=10000000&&n<14000000){
	h=n*0.15;
}	
	else if (n>=14000000&&n<18000000){
		h=n*0.20;
	}
	else if (n>=18000000&&n<25000000){
		h=n*0.25;
	}
	else if (n>=25000000){
		h=n*0.35;
	}

	//tax.h=maliat
	//total salary = hoghogh
	cout<<"tax.h= "<<h<<"\n";
	r=n-h;
	cout<<"total salary= "<<r;
}