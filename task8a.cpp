#include<iostream>
using namespace std;
main()
{
float vegCost;
float fruitCost;
float vegPrice;
float fruitPrice;
float total;
float RP=1.94;
int vegKG;
int fruitKG;
cout<<"enter price of vegetables:";
cin>>vegPrice;
cout<<"enter price of fruits:";
cin>>fruitPrice;
cout<<"enter total kilograms of vegetables :";
cin>>vegKG;
cout<<"enter total kilograms of fruits :";
cin>>fruitKG;
vegCost=vegPrice*vegKG;
fruitCost=fruitPrice*fruitKG;
total=(vegCost+fruitCost)/RP;
cout<<"total:"<<total;
}