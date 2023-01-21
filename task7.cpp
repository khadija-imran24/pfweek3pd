#include<iostream>
using namespace std; 
main()
{
string name;
int adult_price;
int child_price;
int child_sold;
int adult_sold;
int percent;
int adult_total;
int child_total;
int total_after_donation;
int total;

cout<<"enter movie name:";
cin>>name;
cout<<"enter the price of child ticket:";
cin>>child_price;
cout<<"enter the price of adult ticket:";
cin>>adult_price;
cout<<"enter the number of child ticket sold:";
cin>>child_sold;
cout<<"enter the number of adult ticketsold:";
cin>>adult_sold;
cout<<"enter percentage to donate:";
cin>>percent;
child_total=child_price*child_sold;
adult_total=adult_price*adult_sold;
total=child_total+adult_total;
cout<<"total amount generated:"<<total<<endl;
total_after_donation=total-total*percent/100;
cout<<"amount after donation:"<<total_after_donation;

}