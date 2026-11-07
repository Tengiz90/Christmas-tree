#include <iostream>
using namespace std;

int q,f,p,c,v,n,k;


int main()
	{
	cin>>p;
		c=p;
		f=p;
		q=f+2*(f-2);
	for(int n=1; n<=c;n++)
{
		for(int i=n*2-1,k=1; i>=1; --i, k++){
	
	for(int j=1; j<=i; ++j)
	{
 cout<<" ";}

	for(int v=0; v<q; v++){
		cout<<" ";
		//;
	}
	
	cout<<"^";

if(i==n*2-1)
cout<<"^";	
if(i==n*2-2)
cout<<"^^^";
for(int l=2; l<k; l++)
cout<<" ";
if(i<n*2-2 && i>0 )
cout<<"^^";
for(int m=2; m<k; m++)
cout<<" ";
if(i<n*2-2 && i>0)
cout<<"^";
	cout<<endl;  

}

for(int v=0; v<q; v++){
		cout<<" ";
		}
for(int i=0; i<4*n; i++)
cout<<"^";
q=q-2;
cout <<endl;

}
return 0;

}