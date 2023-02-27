#include<iostream>
using namespace std;
/*Function Overloading:
In C lang we cannot have more than one functions with the same name but in C++ , we can give same
name to different functions carrying out different sets of instruction. This is called function overloading.*/

int add(int x,int y){
    int z;
    z=x+y;
    return z;
}//this function will add 2 integers 


int add(int x,int y,int z){
    int m;
    m=x+y+z;
    return m;
}//the function has same name but here it adds 3 integers and thats what special about this function


//Two functions with same name and parameters, but different return type are not considered oberloaded functions.


/*we can also make our task simple by adding using default arguments instead of function overloading. 
For example: instead of writing this add(int x,int y) and int add(int x,int y,int z) . 
             we could have used int add(int x,int y,int z=0) thus intializing z as zero that can be later redefined */
    
int main()
{
   int c,b;
   c=add(5,7);
   b=add(9,8,5);
   cout<<"c="<<c<<endl;
   cout<<"b="<<b<<endl;
   return 0;
}  
