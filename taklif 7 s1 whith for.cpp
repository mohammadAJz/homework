#include <iostream>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int m,n,s=1,i;
	cout <<"please enter m= ";
	cin>>m;
	cout <<"please enter n= ";
	cin>>n;
	for(i=1;i<=n;i++){
	s=s*m;	
	}
	cout<<s;
}