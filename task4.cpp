#include<iostream>
using namespace std;
main()
{string name;
int marks_1;
int marks_2;
int marks_3;
int marks_4;
int marks_5;
float percent;
float total=500;
float obtained_marks;
cout<<"enter your name:";
cin>>name;
cout<<"enter subject1 numbers: ";
cin>>marks_1;
cout<<"enter subject2 numbers: ";
cin>>marks_2;
cout<<"enter subject3 numbers: ";
cin>>marks_3;
cout<<"enter subject4 numbers: ";
cin>>marks_4;
cout<<"enter subject5 numbers: ";
cin>>marks_5;
obtained_marks=marks_1+marks_2+marks_3+marks_4+marks_5;
percent=(obtained_marks/total)*100;
cout<<"percentage is:"<<percent;
}