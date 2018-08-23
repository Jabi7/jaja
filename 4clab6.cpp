//load the lib
#include<iostream>
using namespace std;
//start the main fn
int main(){
           //displaying the operation
           cout <<"A triangle has its base length 'b' and its height from this base 'h'. Define 'b' and 'h' to get the area of the triangle."<<endl;
           //defining 'b' and 'h'
           float b, h;
           //saving 'b'
           cout <<"Define 'b':";
           cin >>b;
           cout <<"b= "<<b<<" units."<<endl;
           //saving 'h'
           cout <<"Define 'h':";
           cin >>h;
           cout <<"h= "<<h<<" units."<<endl<<endl;
           //operating on area
           float area=(b*h)/2;
           cout <<"Area of the triangle with base: "<<b<<" units and height: "<<h<<" units ="<<area<<" sq units."<<endl<<endl;
           //terminating the fn
           return 777;
}
