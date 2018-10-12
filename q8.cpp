//the library file
#include<iostream>
using namespace std;
//the function adds up digits one by one from the back using the mod
int sum(int s,int i,int a)
{if(a==0)																												{	cout<<s;
	 return 0;}
else{
	i=a%10;
	s+=i;
	a=a/10;
	sum(s,i,a);
	return 0;
}}	
//the main function
int main()
{
int no;
cout<<"Type the number whose sum of digits is required"<<endl;
cin>>no;
sum(0,0,no);cout<<endl;
return 0;
}
