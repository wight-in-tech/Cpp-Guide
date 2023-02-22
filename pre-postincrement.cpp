#include<iostream>
#include<cstdio>
using namespace std;
int main(){
             int x = 8;
             int y;
             //pre-increment operator= first increment and then assigning 
             y=++x;//x is incremented first and then added 
             cout<<"x="<<x;
             cout<<"\ny="<<y;
             //post-increment operator=first assigning and then incrementing
             y=x++;
             cout<<"\nx="<<x;
             cout<<"\ny="<<y;
             return 1;

}