#include <iostream>
//include a needed lib file
using namespace std;
int main(){
	double a,b,c;
	cout<<"enter 3 nums: \n";
	cin>>a>>b>>c;
	cout<<"the grater num is : "<<(a>b?(a>c?a:c):(b>c?b:c));
	return 0;
}