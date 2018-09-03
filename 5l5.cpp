#include <iostream>
//include a needed lib file
using namespace std;
int main(){
	int a;
	cout<<"enter a num:";
	cin>>a;
	cout<<"ur num is "<<((a%2==0)?"even":"odd")<<endl;
	return 0;
}