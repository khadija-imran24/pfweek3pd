#include<iostream>
using namespace std;
main()
{
int bag_size;
int cost;
int sq_area;
int cost_in_pound;
int sq_area_cost;
cout<<"enter bag size in pounds:";
cin>> bag_size;
cout<<"enter cost of the bag:";
cin>>cost;
cout<<"enter area covered by eachbag in square feet:";
cin>>sq_area;
cost_in_pound=cost/bag_size;
sq_area_cost=cost/sq_area;
cout<<"cost of the fertilizer per pound:"<<cost_in_pound;
cout<<"cost of fertilizing the area per square feet:"<<sq_area_cost;

}