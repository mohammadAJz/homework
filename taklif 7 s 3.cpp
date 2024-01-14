#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int n,i;
cout<<"please enter n= ";
cin>>n;
for( i=2;i<=n/2;i++){
	if (n%i==0)
	cout<<i<<"\t";
}
}