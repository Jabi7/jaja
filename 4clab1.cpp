//load the library
#include<iostream>
using namespace std;
//start the main fn.
int main(){
           //displaying the operation we will be using
           cout <<endl<<"Converting 'a' from centimeter to meter and kilometer."<<endl;
           //asking the user to define 'a'
           cout <<"Define 'a':";
           //saving the variable 'a'
           float a;
           cin >>a;
           cout <<"a="<<a<<" cm."<<endl<<endl;
           //operating on 'a' to get it in meter and kilometer
           float am=(a/100);
           float akm=(a/100000);
           //displaying the results
           cout <<"a= "<<am<<" metres."<<endl;
           cout <<"a= "<<akm<<" kilometres."<<endl<<endl;
           //terminate the program
           return 777;
}
