#include<iostream>
using namespace std;
int main()
{
int a=33;
int b=a&(1<<5);
cout<<b<<endl;
long long x=0;
x=x|(1<<5);
x=x|(1<<1);
cout<<x;


}