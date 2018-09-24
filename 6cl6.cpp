#include<iostream>   
using namespace std;

int sodd(int x, int y){
     int s=0;                            
	for (int i = x+1; i < y;i+=2)		//func to return sum of odd numbers. (func definition) 
	{	
		if(i%2==0) i++;
		s=s+i;
	}
	return  s;
}

int seven(int x, int y){
     int s=0;                            
	for (int i = x+1; i < y;i+=2)	//func to return sum of even numbers. (func definition)
	{	
		if(i%2==1) i++;
		s=s+i;
	}
	return  s;
}

int sevensqr(int x, int y){
     int s=0;                            
	for (int i = x+1; i < y;i+=2)	//func to return sum of square of even numbers. (func definition)
	{	
		if(i%2==1) i++;
		s=s+(i*i);
	}
	return  s;
}

int soddsqr(int x, int y){
     int s=0;                            
	for (int i = x+1; i < y;i+=2)	//func to return sum of square of odd numbers. (func definition)
	{	
		if(i%2==0) i++;
		s=s+(i*i);
	}
	return  s;
}
int main()			
{
	int a,b;	
	cout<<"enter two nums : ";cin>>a>>b;
	cout<<"ur odd sum is : "<<sodd(a,b)<<endl;			//main func.
	cout<<"ur even sum is : "<<seven(a,b)<<endl;
	cout<<"ur odd square sum is : "<<soddsqr(a,b)<<endl;
	cout<<"ur even square sum is : "<<sevensqr(a,b)<<endl;

	return 0;
}