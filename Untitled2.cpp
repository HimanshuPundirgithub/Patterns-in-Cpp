#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    
    while(i<=n)
    {
		int j=1;
		
		while(j<=n-i+1)
		{
			cout<<j<<" ";
			j=j+1;
		}
		int star1=i-1;
		while(star1)
		{
			cout<<"*"<<" ";
			star1=star1-1;
		}
		int star2=i-1;
		while(star2)
		{
			cout<<"*"<<" ";
			star2=star2-1;
		}
		int start=j-1;
		while(start)
		{
			cout<<start<<" ";
			start=start-1;
		
		}
		
		
		cout<<endl;
		i=i+1;
	}

      
      

}
