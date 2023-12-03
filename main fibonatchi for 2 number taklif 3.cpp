#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int n,i,f1,f2,t,m,f2m,f1m,t1,i1;
f1=1;
f2=0;
i=1;
t=0;
m=0;
f1m=1;
f2m=0;
t1=0;
i1=1;
cout <<"please enter n = ";
cin>>n;
cout<<"please enter m = ";
cin >>m;
for(i=1;i<=n;i++) {
	t=f1;
	f1=f2;
	f2=f2+t;
} 
 for(i1=1;i1<=m;i1++) {
	t1=f1m;
	f1m=f2m;
	f2m=f2m+t1;
}
cout<<" n = " <<f2<<"\n";
cout <<" m = "<<f2m;
}