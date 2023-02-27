#include<iostream>
using namespace std;
//In this program we will take a string from user and convert that string into a string of lower case characters
    
int main()
{
             string str;
             cout<<"Enter your String here:";
             cin>>str;
             cout<<str;
             for(int i=0;str[i]!=0;i++){
                          if(str[i]>=65&&str[i]<97){
                          str[i]=str[i]+32;}
                          else if(str[i]>=97){
                                       str[i]=str[i]-32;
                          }
                          else{
                                       str[i]=str[i];
                          }

                          str[i]=str[i];
             }
             cout<<"\n"<<str;
    
    return 0;
}  
