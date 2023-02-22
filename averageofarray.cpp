#include<iostream>
using namespace std;
/*Writing a program to take input array from user and print average of all elements in array*/
    
int main()
{
    int sum=0,avg;
    int n;
    cout<<"Enter Number of elements in Array:";
    cin>>n;
    int A[n];
    cout<<"Enter elements in Array:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(auto x:A){
        cout<<"Array is:";
        cout<<"["<<x<<"]"<<endl;
    }
    for(int i=0;i<n;i++){
        sum=sum + A[i];
    }
    avg=sum/n;
    cout<<"the Average of all elements in given Array is:"<<avg;

    
    return 0;
}  
