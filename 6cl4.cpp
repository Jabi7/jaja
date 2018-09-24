#include <iostream>
using namespace std;
int fMin(int,int);					//func declaration for call by value
void findMin(int&,int&,int&);		// call by reference
int main()
{
	int a,b=0;
	cout<<"Using call by value."<<endl;				
	cout<<"Enter a number :"<<endl;				// main func
	cin>>a;
	cout<<"Enter another number :"<<endl;
	cin>>b;
	int min=fMin(a,b);		// func call ( call by val)
	cout<<"The minimum is "<<min<<endl;
	cout<<"Using call by refernece :"<<endl;
	min=0;
	cout<<"Enter a number :"<<endl;
	cin>>a;
	cout<<"Enter another number:"<<endl;
	cin>>b;
	findMin(a,b,min);		// func call ( call by ref)
	cout<<"The minimum is "<<min<<endl;
	return 0;
}
int fMin(int x, int y)		// func defintion (call by val)
{
	if(x<y)
	return x;
	else
	return y;
}
void findMin(int& x, int& y, int& m)		// func defintion (call by ref)	
{
	if(x<y)
	m=x;
	else 
	m=y;
}
