#include<iostream>
using namespace std;
/*enumerators =
enumerated data type is used to define user-define
datatype ...(you can use your own defined data type )*/
enum year{fe,se,te,be};//this is how and enum is defined ... first value is always assigned "0" and the next follows along sides . Enums are constants
enum pens{red,blue=9,black, white};//if a data type is assigned a number the number next to it will get next number as its value


/*type - definition:
sometimes while writing code the programmer uses short forms of the variables to save time and thus ,creates confusion.... 
Using type-def we can give meaningful names to the variables annd create a more readable code */
typedef  int rollno;
int main(){
             //enumerators
             year c;
             c=be;
             cout<<"c="<<c;
             cout<<"\nbe="<<be;
             pens u;
             u=black;
             cout<<"\nu="<<u;
             cout<<"\nblue="<<blue;


             //typedef 
             rollno r1,r2,r3;
             r1=7;//i wont have to specify that r1 ,r2,r3 are roll numbers since i already mentioned it in typedef
             cout<<"\nr1="<<r1;
 return 1;

}