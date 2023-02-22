#include<iostream>
using namespace std;
/*Strings:
        Strings, at their core, are essentially collections of characters.
Some examples include "Hello World", "My name is Jason", and so on.They're enclosed in double quotes ".
A String can be declared with 2 ways i.e 
                                        1)Using char Array
                                        2)USing string class
    1)char [] 
            char str[10]=“Hello”; is a C style string. It can contain set of
characters which has Null at the end "\0"
    2)class string :
            string is a builtin class in C++ to store a string.Internally it contains an array of characters.
It will create array of characters in heap.It has many functions for performing string operations 



lets See strings declaration with an example.*/
int main()
{
    char a[100]="string as an array";//here we declared string in the form of arrays of character 
    string b="string using class";//class string is used to define string
    cout<<a<<endl<<b<<endl;

    char name[50];
    //while taking input from user we might face issues if the string entered has spaces in them... thats where get() and getline() functions come in
    cout<<"enter your name here:";
    cin.get(name,50);
    cout<<"welcome "<<name;
    /*Functions on String:
                        1)strlen
                        2)*/

    
    return 0;
}  
