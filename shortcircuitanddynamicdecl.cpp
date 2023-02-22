#include<iostream>
using namespace std;
/*ShortCircuit:
             Shortcircuit is a condition that occurs while using logical operators.It is a condition in cpp where only first condition of the given two statements is checked.... since it is sufficient for
determing the final true or false output of the give logical operators (&&,||)
let us try to understand the term using an example */
int main()
{
	int a=10,b=5,i=5;
        
    if(a>b && ++i<=b)
    {
                
    }
    cout<<i<<endl;
    if(a<b || ++i<=b)
    {
                
    }
    cout<<i<<endl;
        
    return 0;
        
}
/*Dynamic Declaration:
                        while excecuting the program the varaibles declared are stored in stack , if we dont always need a variable in the 
program it can be written inside the if block and thus nsave us space . this term was not available in C , it came as an upgrade in c++.
declaration of variable can also be done in the condition itself , an update in C++17.
the life of variables in c++ is limited to the given block 

lets see that with a example :


{
    int a=10,b=5;
        
    if(true)
    {
        int c=a+b;
        cout<<c<<endl;
    }
    {
        int d=a-b;
        
        if(true)
        {
            cout<<d<<endl;
        }
    }
    
        if(int e=a*b)
        {
            cout<<e<<endl;
        }
            
    return 0;
        
}*/