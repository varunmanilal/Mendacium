//include the library file
#include<iostream>
using namespace std;
//the function which involves reversing the number
int rev(int a)
{if (a==0)
  return 0;
 else 
{ cout<< a%10;
  a=a/10;
  rev(a);
  return 0;
}
}
//the main function
int main(){
int a;
cout<<"give the number which is to be reversed"<<endl;
cin>>a;
rev(a);
return 0;
}


