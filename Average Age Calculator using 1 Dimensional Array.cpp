#include<iostream>
using namespace std;
int main()
{
	int i,j,sum=0,avg;
	cout<<"Enter Number of students: ";
	cin>>i;
	int age[i];
	for(j=1;j<=i;j++)
	{
		cout<<j<<" .Enter Age: ";
		cin>>age[i];
	}
	
	for(j=1;j<=i;j++)
	{
		sum+=age[i];
	}	
avg=sum/i;
cout<<"The Average of "<<i<<" Students age is "<<avg;
return 0;
}