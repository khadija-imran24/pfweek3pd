#include<iostream>
using namespace std;
main()
{float initial_velocity;
float final_velocity;
float time;
float acceleration;
cout<<"enter initial velocity:";
cin>>initial_velocity;
cout<<"enter time:";
cin>>time;
cout<<"enter acceleration:";
cin>>acceleration;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"final velocity is:"<<final_velocity;
}