#include<iostream>
#include<cstdio>
using namespace std;
/*there are two conditional statements in c++ if and else 
they can be given condtions using relational operators or logical operators
realtional operators - >=,==,<=,!=
logical operators - &&(and),!(not),||(or)  they are used to write compound conditional statemnts */


//lets take an example for the compound conditional statement where we have to decide if the age entered is young or not
//young age should be between 12 to 50

int main(){
             int age;
             cout<<"enter a age :"<<endl;
             cin>>age;
             if(age>=12 && age<=50){
                          cout<<"the age entered is young";
             }
             else{
                          cout<<"the age entered is not young";
             }
             return 0;
}