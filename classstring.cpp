#include <iostream>
#include <string>
using namespace std;
/*Until now everything that was studied was string using arrays which was a traditional way of defing strings
in C language. We shall now look upon string class which is in c++.*/

// class string needs a head file <string> to perform various functions on it lets learna bout each of them
int main()
{
             string str1;
             cout << "enter your string here:";
             getline(cin, str1); // this function will get everything from the user including spaces
             cout << "\n"
                  << str1 << endl;

             
             

            /*Other basic functions on strings:
                                       1)s.lenght()
                                       2)s.size()
                                       3)s.capacity()
                                       4)s.clear()
                                       5)s.empty()
                          All these do exactly whats in their name ....they will get size and length of the object s. There arealot of 
             other functions that can be performed on strings but I guess we will see them in STL later */

             /*one of useful feature of string is replacing and swapping elements we will use s.replace() for this operation
             So what replace function does is replace the number of elements from give index and swap them'
                          we use str.replace("index from which elements are to be replace","number of elements we want to replace","replacing elements")*/
             
             //lets see swapping and replacing with an example :

             string str="Good Morning";
             str.replace(5,7,"Night");//this shall replace "Morning to Night "
             cout<<str;                           
             return 0;
}
