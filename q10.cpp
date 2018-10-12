//include the library file
#include<iostream>
using namespace std;
//defining the function
//for fibonacci sequence the function needs to store the last 2 digits and take up its sum
int fibn(int n,int s,int s1,int t)
{if (t>n)
{cout<<"the nth fibonacci number is"<<s;
return 0;
}
else
{int q=s;
s=s+s1;
s1=q;
t=t+1;
fibn(n,s,s1,t);
return 0;
}
}
//the main function
int main(){
int n;
cout<<"Type the fibonacci number you want "<<endl;
cin>>n;
fibn(n,1,0,1);
return 0;
}
