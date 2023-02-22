#include<iostream>
using namespace std;
int main(){
             int A[10]={6,8,9,14,15,18,19,21,26,35};
             int h =9,l =0,key=19,mid;

             while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"Found at"<<mid;
			return 0;
		}
		else if(key<A[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	    
	//cout<<"Not Found";
	
	return 0;
}