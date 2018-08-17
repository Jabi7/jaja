#include <iostream>
//include a needed lib file
using namespace std;
int main(){
	//to declare values of vars.
	int a,b;
	float c,d;
	//for user to enter the values
	cout<<"enter 2 integers a & b(<a)\n";
	cin>>a>>b;
	cout<<"enter 2 floats c & d\n";
	cin>>c>>d;
	//to show user values of ur vars.
	cout<<" a = "<<a<<"\n b = "<<b<<"\n c ="<<c<<"\n d = "<<d;
	//to declare arithematic operations
	int sum=a+b, dif=a-b, mod=a%b;
	float pro=c*d, div=c/d;
	//to show user the operations
	cout<<"\n sum of a&b = "<<sum<<"\n difference of a&b = "<<dif<<"\n modulus of a&b = "<<mod<<"\n product of c&d = "<<pro<<"\n division of c&d = "<<div<<"\n";
	return 0;
}