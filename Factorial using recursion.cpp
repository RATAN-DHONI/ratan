#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return(n*factorial(n-1));
}
int main()
{
	int n;
	cout<<"enter n values:";
	cin>>n;
	cout<<"factorial of"<<n<<"="<<factorial(n);
	return 0;
}