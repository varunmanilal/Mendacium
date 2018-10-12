//the library file
#include<iostream>
using namespace std;
//the function counts up the even numbers
int add(int i,int no,int ans)
{if (i>no){
	return ans;}
else{ans+=i;
	i=i+2;
	add(i,no,ans);
	return add(i,no,ans);}
}
int main(){
int a;
cout<<"Type the number upto which the sum of even numbers is to be displayed"<<endl;
cin>>a;
int b=add(0,a,0);
cout<<b<<endl;
return 0;
}
