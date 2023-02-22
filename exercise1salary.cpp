#include<iostream>
using namespace std;
//Write a program to calculate net salary



/*net salary= ns
basic salary = bs
percentage allowance = pa
percentage deduction = pd*/


// formula
//Net Salary =basicsalary+basic*percentAllowance/100-basicsalary*percentDeductance/100

int main(){
int bs;
float ns,pa,pd;
cout<<"\nenter basic salary:";
cin>>bs;
cout<<"\nenter percent allowance:";
cin>>pa;
cout<<"\nenter percent deduction: ";
cin>>pd;
ns=bs+(bs*pa/100)-bs*(pd/100);
cout<<"net salary is :"<<ns;
return 0;
} 