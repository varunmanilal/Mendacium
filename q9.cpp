//include the library file
#include<iostream>
using namespace std;
int fact(int a)
//for factorial just keep on multiplying the previous no. to the current no.
{if (a<1)
	return 1;
else
{	a*fact(a-1);
	return a*fact(a-1);
}}
//the main function
int main(){
int no;
cout<<"type the number upto which you want its factorial"<<endl;
cin>>no;
int i=fact(no);
cout<<i<<endl;
return 0;
}
