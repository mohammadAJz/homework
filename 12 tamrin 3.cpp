#include <iostream>
using namespace std;
 int bmm(int b, int c){
 	if (c==0){
 	return b;
	 }
	else{
	return bmm(c,b%c);
	}
 }
int main() {
int x,y;
cout<<"please enter x= ";
cin>>x;

cout<<"please enter y= ";
cin>>y;

cout<<"gcd of"<<x<<","<<y<<"is= "<<bmm(x,y);
}