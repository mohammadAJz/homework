#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float n1,n2,r;
char op ;
cout <<"please enter expression = ";
cin>>n1>>op>>n2;
switch (op) {
	case '+' : 
	r=n1 + n2;
	break;
	case '-' : 
	r=n1 - n2;
	break;
	case '*':
		r=n1 * n2;
		break;
		case '/' :
		r= n1 / n2;
} 
cout<<"result = "<<r;
}