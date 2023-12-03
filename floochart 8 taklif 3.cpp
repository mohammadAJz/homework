#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,m,t;
	cout<<"please enter n = ";
	cin>>n;
	cout<<"please enter m = ";
	cin>>m;
	while(m!=0){
		t=n%m;
		n=m;
		m=t;
	
  }
  cout<<"B.M.M = "<<n;
}