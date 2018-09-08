#include<iostream>
using namespace std;
int main()
{
	int a,o;
	cout<<"enter size of rombus : ";
	cin>>a;
	cout<<"enter the slanding option in number : (1)right (2)left : ";
	cin>>o;
	for(int i=0;i<a;i++){
		if(o==1){
			for(int j=0;j<2*a-i;j++){
			
			if (j<a-i)
			cout<<" ";
			
			else
			cout<<"*";
			
			}
		}
		else{
		for(int j=0;j<a+i;j++){
			
			if (j<i)
			cout<<" ";
			
			else
			cout<<"*";
			
		}
		}
		cout<<endl;
		
	}
	return 0;
}