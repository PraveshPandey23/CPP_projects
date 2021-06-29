#include<iostream>
using namespace std;
int main()
{
	int number,sum=0,n;
	cout<<"Enter a number "<<endl;
	cin>>number;
    n=number;
	while(number>0)
	{
		sum=number+sum;
		number--;
	}
	cout<<"The sum of the first " <<n <<" natural number is:" <<sum;
	return 0;
}