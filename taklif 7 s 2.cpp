#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int m,n,i;
cout <<"please enter m= ";
cin>>m;
cout<<"please enter n= ";
cin>>n;
for(i=0;n<=m;i++){
	m=m-n;
}
cout<<"baghimande= "<<m<<"kharege gesmat= "<<i;
}