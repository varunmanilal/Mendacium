//include the library file
#include<iostream>
using namespace std;
//the function-for power i, multiply the number with itself i times
int pw(int res,int no,int num)
{
if (no==0){
return res;}
else {
res=num*pw(res,(--no),num);
return res;}
}
//the main function
int main(){
int a,b;
cout<<"Type the number and the power whose result you want"<<endl;
cin>>a;
cin>>b;
int q=pw(1,b,a);
cout<<q;
return 0;}

