#include <iostream>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	int a[2],b[2],c[2];
	for(i=0;i<t;i++)
	{ 
	    for(int j=0;j<2;j++)
	   {
	     cin>>a[j];  
	   }
	      for(int j=0;j<2;j++)
	   {
	     cin>>b[j];  
	   }
	      for(int j=0;j<2;j++)
	   {
	     cin>>c[j];  
	   }
	    if (a[0]==b[0])
	    {
	        if(a[1]==b[1])
	         cout<<"1"<<endl;
	         else if (a[0]!=c[0]||a[0]!=c[1])
	         cout<<"0"<<endl;
	         
	    }
	    else if(a[0]==b[1])
	    {
	        if(a[1]==b[0])
	         cout<<"1"<<endl;
	         
	    }
	     else if(a[0]==c[1])
	    {
	        if(a[1]==c[0])
	         cout<<"2"<<endl;
	    }
	    else if(a[0]==c[0])
	    {
	        if(a[1]==c[1])
	         cout<<"2"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }     
	}
	// your code goes here
	return 0;
}
