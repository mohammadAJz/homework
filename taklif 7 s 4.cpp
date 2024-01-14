#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int r,n,m,c,i;
	cout<<"please enter m= ";
	cin>>m;
	cout<<"please enter n= ";
	cin>>n;
	if(n>m){
		c=n;
		n=m;
		m=c;
	} 
	for(i=1;i<=n;i++){
		if (m%i==0 && n%i==0){
			r=i;
		}
	} 
	cout<<"b.m.m= "<<r;
}