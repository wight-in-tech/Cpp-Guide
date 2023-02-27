#include <iostream>
#include <cstring>
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
        char k[100] = "string as an array"; // here we declared string in the form of arrays of character
        string l = "string using class";    // class string is used to define string
        cout << k << endl
             << l << endl;

        char name[50];
        // while taking input from user we might face issues if the string entered has spaces in them... thats where get() and getline() functions come in
        cout << "enter your name here:";
        cin.get(name, 50);
        cout << "welcome " << name << endl;

        /*before we dive deep into functions of string ... just know about these two header files so you dont get overwhlemed by them later
        #include<cstring> --->this library contains C language function
        #include<string>  --->this contains C++ class for string
*/
        /*Functions on String:
                            1)strlen: gives length of the string
                            2)strcat(destination,source): concatenate the destination string and source string
                            3)strcpy(destination,source): copy string source to destination*/
        cout << "length of name:" << strlen(name) << endl; // just keep in mind that strlen function needs "string" as a header file or else generates error
        char f1[5] = "str1";
        char f2[5] = "str2";
        strcat(f1, f2);
        cout << f1 << endl; // this will add the stringf2 into destination string that is f1

        // also I can specify how many letters I want to concatenate from source string using "strn(destination,source,lenght to be added)"... lets see an example here
        char s1[10] = "hello";
        char s2[10] = "fellas";
        strncat(s1, s2, 2);
        cout << s1 << endl;

        //you can also copy limited characters from source string using "strncpy"
        strcpy(f2,s2);
        cout<<f2; //this willl copy all the elements of s2 into f2 string


        /*more functions on string==>

                          1)strstr(main,substring):finding a substring from main string

                          2)strchr(main,char):find occurence of a character in a main string

                          3)strcmp(str1,str2):if first string comes first in dictionary , returns positive value
                                              if second string comes first returns negative values
                                              if both the strings are same it returns "0" */

        char a[]="publishing";
             char b[]="lish";
             cout<<strstr(a,b)<<endl;  //will give output from "lishing"
             cout<<strchr(a,'l')<<endl; //will print from l
             cout<<strcmp(b,b)<<endl;

        return 0;
}
