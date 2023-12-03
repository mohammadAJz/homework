#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int n,i,f1,f2,t;
f1=1;
f2=0;
i=1;
t=0;
cout <<"please enter number = ";
cin>>n;
for(i=1;i<=n;i++) {
	t=f1;
	f1=f2;
	f2=f2+t;
} 
cout<<"= " <<f2;
}