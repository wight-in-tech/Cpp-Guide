#include<iostream>
using namespace std;
int main(){
             int n;
             cout<<"enter a number:";
             cin>>n;
             int rev=0;
             int m=n;
             int r;
             int ret=0;
             int f;
    
             while(n>0)
             {
             r=n%10;
             n=n/10;
             rev=rev*10+r;
             }
             cout<<"the number:"<<m<<" in words is: ";
             
             while(rev>0){
             f=rev%10;
             rev=rev/10;
             ret=(ret*10)+f;
             switch(f){
                          case 0:cout<<"zero ";
                                       break;
                          case 1:cout<<"one ";
                                 break;
                          case 2:cout<<"two ";
                                       break;
                          case 3:cout<<"three ";
                                 break;
                          case 4:cout<<"four ";
                                       break;
                          case 5:cout<<"five ";
                                 break;
                          case 6:cout<<"Six ";
                                       break;
                          case 7:cout<<"Seven ";
                                 break;
                          case 8:cout<<"Eight ";
                                       break;
                          case 9:cout<<"Nine ";
                                 break;
                                 }
             
             }


             return 0;
}         
