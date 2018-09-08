#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter size of squar : ";
	cin>>a;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if (j!=0 && j!=a-1 && i!=0 && i!=a-1)
			cout<<" ";
			
			else
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}