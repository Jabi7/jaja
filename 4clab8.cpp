//load the lib
#include<iostream>
using namespace std;
//start the main fn
int main(){
           //displaying the operation
           cout <<endl<<"Define the marks scored out of 25 for the five subjects Phy, Chem, Math, Eng and CSc to get the total, average and percentage."<<endl;
           //defining the subjects
           float phy, chem, math, eng, csc;
           //saving the marks
           cout <<"Physics(Out of 25):";
           cin >>phy;
           cout <<endl<<"Chemistry(Out of 25):";
           cin >>chem;
           cout <<endl<<"Mathematics(Out of 25):";
           cin >>math;
           cout <<endl<<"English(Out of 25):";
           cin >>eng;
           cout <<endl<<"Computer Science(Out of 25):";
           cin >>csc;
           cout <<endl<<endl;
           //operating on the marks
           float tot, avg, per;
           tot=phy+chem+math+csc+eng;
           avg=tot/5;
           per=avg*4;
           //showing the results
           cout <<"Total marks scored: "<<tot<<"/125"<<endl;
           cout <<"Average marks: "<<avg<<"/25"<<endl;
           cout <<"Percentage secured: "<<per<<" %"<<endl;
           cout <<"Note: If the numerator is more than the denominator or if the percent is more than 100 then you have entered the marks of the subject beyond their ranges."<<endl<<endl;
           //terminating the program
           return 777;
}
