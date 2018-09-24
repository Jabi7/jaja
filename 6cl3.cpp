#include <iostream>
using namespace std;
int fMax(int,int);					//func declaration for call by value
void findMax(int&,int&,int&);		// call by reference
int main()
{
	int a,b=0;
	cout<<"Using call by value."<<endl;				
	cout<<"Enter a number :"<<endl;				// main func
	cin>>a;
	cout<<"Enter another number :"<<endl;
	cin>>b;
	int max=fMax(a,b);		// func call ( call by val)
	cout<<"The maximum is "<<max<<endl;
	cout<<"Using call by refernece :"<<endl;
	max=0;
	cout<<"Enter a number :"<<endl;
	cin>>a;
	cout<<"Enter another number:"<<endl;
	cin>>b;
	findMax(a,b,max);		// func call ( call by ref)
	cout<<"The maximum is "<<max<<endl;
	return 0;
}
int fMax(int x, int y)		// func defintion (call by val)
{
	if(x>y)
	return x;
	else
	return y;
}
void findMax(int& x, int& y, int& m)		// func defintion (call by ref)	
{
	if(x>y)
	m=x;
	else 
	m=y;
}
