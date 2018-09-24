#include <iostream>
using namespace std;
int add(int,int);         //func declr (call by val)
void findSum(int&,int&,int&);	//func declr (call by ref)
int main()
{
	cout<<"Using call by value."<<endl;
	int n1,n2=0;
	cout<<"Enter the first number."<<endl;
	cin>>n1;
	cout<<"Enter a second number."<<endl;
	cin>>n2;
	int result=add(n1,n2);		//func call
	cout<<"The sum of the two numbers is "<<result<<endl;	
	cout<<"Using call by reference now."<<endl;
	cout<<"Enter the first number."<<endl;
	cin>>n1;
	cout<<"Enter a second number."<<endl;
	cin>>n2;
	result=0;
	findSum(n1,n2,result);
	cout<<"The sum of the two numbers is "<<result<<endl;
	return 0;
}
int add(int a, int b)
{	
	int sum=a+b;
	return sum;					//func def
}
void findSum(int& a,int& b,int& sum)
{
	sum=a+b;
}
