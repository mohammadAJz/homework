#include <iostream>
using namespace std;
int pow(int m,int n){
if (n>1){
	return (m*pow(m,n-1));
}

else {
    return m;
}

}

int main(){
	int i,j;
	cout<<"please enter number= ";
	
	cin>>i;
	cout<<"please enter number= ";
	
	cin>>j;
	cout<<i<<"to the power of"<<j<<" is= "<<pow(i,j);

}