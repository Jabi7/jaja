#include <iostream>
#include <cstring>					// includes string lib
using namespace  std;
float read(string);  
float calc(float,float,float);					//func declerations
void disp(float,float,float,float,float);
int main()
{
	float unitCost=read("cost of per unit :");							
	float unitsPurch=read("number of units purchased :");		//func call 
	float taxRate=read("tax rate applicable :");
	float salesTax=calc(unitCost,unitsPurch,taxRate);
	float totalDue=unitCost*unitsPurch+salesTax;
	disp(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}
float read(string s)
{
	float value;
	cout<<"Enter the "<<s<<endl;		//func to  read unit cost, unit purchased, tax rate
	cin>>value;
	return value;
}
float calc(float price,float units,float rate)
{
	return (price*units*rate/100.0f);		//func to calculate sales tax
}
void disp(float c,float u,float r,float t, float p)
{
	cout<<"The number of units purchased at the rate of Rs "<<c<<" per unit is "<<u<<endl;		//func to no: of units purchased , sales tax, toel price 
	cout<<"The sales tax payable at the rate of "<<(r/100.0f)<<"% is Rs "<<t<<endl;
	cout<<"The total price payable is Rs "<<p<<endl;
}

