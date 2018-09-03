#include <iostream>
//include a needed lib file
using namespace std;
int main(){
	char a;
	cout<<"enter a char : ";
	cin>>a;
	cout<<( ( (a>='a'||a>='A') && (a<='z'||a<='Z') )?"entered is an alphabet":"entered is not an alphabet")<<endl;
	return 0;
}