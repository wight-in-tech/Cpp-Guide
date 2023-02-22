#include<iostream>
using namespace std;
/*Loops:
             Loops are iterative statements . they are block of statements are repeatedly executed as long as condition is true.
condition must be false to come out of the loop.


Four types of loops:

• pre-tested loop while()
• post-tested loop do..while()
• counter controlled loop for()
• for each loop for Collections for()
*/
/*
loops usage :
1. While and doWhile are similar, they are used when we don’t know
number of times of repetitions
2. For is used when we know the number of iterations.
3. For each is used with array or STL. */

int main()
{
             //while loop
             int a=0;
             while(a<10)
             {
             cout<<"a "<<a;//condition is checked and then process is done 
             a++;}

             //do while loop
             int b=0;
             do
             {
             cout<<"b "<<b;
             b++;
             }while(b<10);//process is done and then condition is checked 

             //for loop
             for(int i=0;i<10;i++)
             {
             cout<<"i "<<i;//for(initialization ,condition , updation) all the things related to counter are written in first parenthesis
             }
             //infinite loop
             return 0;
}
/*

a program for counting factorial of a given number :


int fact (){
             int n,i;
             int fact=1;
             cout<<"enter a number :"<<endl;
             cin>>n;
             for (i=n;i>0;i--){
                          fact=fact*i;
             }
             cout<<"factorial of the number is :"<<fact;

             }

             */