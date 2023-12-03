#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//flochart 6 
	int n,m,p;
	p=1;
	cout<<"please enter n = ";
	cin>>n;
	cout<<"please enter m = ";
	cin>>m;
	while(m>0){
		p=p*n;
		m=m-1;
	}
	cout<<p;
	
}