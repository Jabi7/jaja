//load the lib
#include<iostream>
#include<math.h>
using namespace std;
//start the main fn
int main(){
           //displaying the operation
           cout <<endl<<"An equilateral triangle has its sides equal to 'a'. Define 'a' to get the area of the equilateral triangle."<<endl;
           //defining 'a' and 'area'
           float a;
           double area;
           //saving a and operating it
           cout <<"Define 'a':";
           cin >>a;
           cout <<"a= "<<a<<" units."<<endl<<endl;
           area=(sqrt(3)/4)*a*a;
           //showing the result
           cout <<"Area of the triangle with its side: "<<a<<" units ="<<area<<" sq units."<<endl<<endl;
           //terminating the program
           return 777;
}
