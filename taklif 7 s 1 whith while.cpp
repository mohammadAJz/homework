#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int m,n,p=1;
cout<<"enter m: ";
cin>>m;
cout<<"enter n: ";
cin>>n;
while (n>0)
{
	p=p*m;
	n=n-1;
}

cout<<"result is = "<<p;
}