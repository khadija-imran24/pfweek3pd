#include<iostream>
using namespace std;
main()
{
int num;
int sum=0;
cout<<"enter 4 digit number";
cin>>num;
int remainder=num%10;
sum=sum+remainder;
num=num/10;
remainder=num%10;
sum=sum+remainder;
num=num/10;
remainder=num%10;
sum=sum+remainder;
num=num/10;
remainder=num%10;
sum=sum+remainder;
cout<<"sum is:"<<sum;

}