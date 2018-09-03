#include<iostream>
using namespace std;
int main()
{
int v,n,s=0;
cout<<"Enter any num : ";
cin>>v;
n=v;
while(n!=0){
      s=s+(n%10);
      n=n/10;
}
cout<<"the sum of digits is "<<s<<endl;
return 0;
}