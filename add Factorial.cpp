#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n ;//this accepts the number for which sum of factorial need to be calculated
	cout<<"Enter the number for which sum of factorial need to be calculated :";
	cin>>n;
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"The sum of factorial of "<<n<<" is : "<< sum;
}
