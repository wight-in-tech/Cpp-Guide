#include<iostream>
#include<cstring>
using namespace std;
/*There are a few functiins that can be performed on a string that we had a look on earlier but cpp still has 
some more exciting functions that can be done on strings with string tokenisers
             1)strtol():string to long 
             2)strtof():string to float
             3)strok(string,delimeters):this will seperate the tokens from the string and return them*/
int main(){
             char a[]="289";
             char b[]="63.89";
             long x=strtol(a,NULL,10);  //we need to pass null pointer and also the type of number we passed i.e if it is decimal(10),binary(2)etc
             float y=strtof(b,NULL);
             cout<<x<<endl<<y<<endl; //thus we get an output of x,y as long and float
             
             //tokenising 
             char c[]="l=0;k=1;j=9;m=8";
             /*char *token=strtok(c,";"); //this will print just first token of the string if we need all of them we need a loop
             cout<<token<<endl;*/
             char *token=strtok(c,"=;");
             while(token!=NULL){
             cout<<token<<endl;
             token=strtok(NULL,";");
             }
             return 0;
}