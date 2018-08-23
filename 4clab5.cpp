//load the lib
#include<iostream>
using namespace std;
//start the main fn
int main(){
           //displaying the operation
           cout <<endl<<"The triangle ABC contains angles 'a', 'b', and 'c' respectively. Define 'a' and 'b' to get the third angle 'c'."<<endl;
           //defining 'a' and 'b'
           float a, b, c, t;
           //saving 'a' from terminal
           cout <<"Define 'a' from 0 to 180:";
           cin >>a;
           cout <<"a= "<<a<<" degrees."<<endl<<endl;
           //saving 'b' from terminal
           t=180-a;
           //t is the maximum value b can take to define c
           cout <<"Define 'b'from 0 to "<<t<<":";
           cin >>b;
           cout <<"b= "<<b<<" degrees."<<endl<<endl;
           //operating and showing the result on 'c'
           c=180-a-b;
           cout <<"c= "<<c<<" degrees."<<endl<<endl;
           cout <<"Note: If you are getting a negative angle then you have entered the angles for 'a' and 'b' beyond their ranges"<<endl;
           //terminating the program
           return 777;
}
