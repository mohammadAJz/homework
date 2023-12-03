#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
 float a,b,c;
 int x,y,z; 
	cout <<"please enter x= ";
	cin>>x;
	cout <<"please enter y= ";
	cin >> y;
	cout <<"please enter z= ";
	cin >>z;
	a=(x-y)*(x+z);
b = (x+y+z)*(x+y+z)+1;
c=a/b;
cout<<"awnser= "<<c;
}