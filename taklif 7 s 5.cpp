#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int n,i,j;
cout<<"please enter n= ";
cin>>n;
for(i=2;i<n;i++)
	for(j=2;j*j<=i;j++)
 
if (i%j==0){
	break;
} 
else if (j+1>sqrt(i)){
	cout<<"= "<<i<< "  ";
}
}