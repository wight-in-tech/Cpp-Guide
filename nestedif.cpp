#include<iostream>
using namespace std;
/*Sometimes we need to check conditions more than once, in that case we can use multiple if else conditions just like shown below */

void Grades(int m1,int m2,int m3)
{
    float Total,Avg;
    
   Total=m1+m2+m3;
   Avg=Total/3;
   if(Avg>=60){
       cout<<"A";
   }
   else{
       if(Avg>=35&&Avg<60){
       cout<<"B";
   }
       else{
           cout<<"C";
       }
   }
}
/*Multiple if else statements can be written using else-if ladder that is nothing but "else if" together instead of making blocks seperately
the else in the next line is the else for "else if" we wrote earlier
lets see an example :
here we return the day using the day number given to us (day can be from 1 to 7) */
void day(int day){
             {
    if(day==1)
        cout<<"sunday";
    else if(day==2)
        cout<<"monday";
    else if(day==3)
        cout<<"tuesday";
    else if(day==4)
        cout<<"wednesday";
    else if(day==5)
        cout<<"thursday";
    else if(day==6)
        cout<<"friday";
    else
        cout<<"saturday";
    
}
             

}
int main(){
       //Grades(60,59,80);    function calling for grade 
       day(5);

       return 0;
}