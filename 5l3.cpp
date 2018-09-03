#include <iostream>
//include a needed lib file
using namespace std;
int main(){
	double a;
	cout<<"enter a num:";
	cin>>a;
	cout<<"ur num is "<<(a>0?"+ve":(a<0?"-ve":"zero"))<<endl;
	return 0;
}