#include<iostream>
#include<cstdio>
using namespace std;
int main(){
             int x=2;
             int y=5;
             int z,m,k,d;
             //bitwise operators are operstors that work on the binary values i.e bits
             //some bitwise operators are "&"(and),"|"(or),"^"(x-or),"~"(not),"<<"(shift left),">>"(shift right)
             z=y|x;
             cout<<"z="<<z;
             /*and ,or,not ,x-or operators works same as they do in logical expressions */
             m=~y;
             cout<<"\nm="<<m;
             /*shift operators shift the bits of the number from right or from left 
             thus left shift will multiply the number by 2's power with whatever number is inserted
             for example-*/
             k=x<<1;
             cout<<"\nk="<<k;//x gets multiplied by 2's power 1
             /*similarly when we shift the bits from right, the number will get divided by 2 power whatever number inserted 
             for example- */
             d=x>>1;
             cout<<"\nd="<<d;//x gets divided by 2's power 1



             return 1;

}