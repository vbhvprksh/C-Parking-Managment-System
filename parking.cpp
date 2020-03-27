#include<iostream>
using namespace std;
int main()
{
int car =0;
int rickshaw =0;
int bus =0;

int u_input;
int amount=0,count=0;
while (true)
{
cout<<"Welcome to Our Parking\n";
cout<<"\nPress 1 for Rikshaw\n";
cout<<"\nPress 2 for Car\n";
cout<<"\nPress 3 for Bus\n";
cout<<"\nPress 4 to show the record\n";
cout<<"\nPress 5 to delete the record\n";
cin>>u_input;
if (u_input==1)
{
if (count <=50)
{
rickshaw=rickshaw+1;
amount = amount + 100;
count = count +1;
}
else
cout<<"Parking is Full\n";
}
else if (u_input==2)
{
if (count <=50)
{
car=car+1;
amount = amount + 200;
count = count +1;
}
else
cout<<"Parking is Full\n";
}
else if (u_input==3)
{
if (count <=50)
{
bus=bus+1;
amount = amount + 300;
count = count +1;
}
else
cout<<"Parking is Full\n";
}
else if (u_input==4)
{
if (count <=50)
{
cout<<"The total amount = "<<amount<<endl;
cout<<"The total no of vechiles parked = "<<count<<endl;
cout<<"The total no of Rickshaw Parked= "<<rickshaw<<endl;
cout<<"The total no of Car parked = "<<car<<endl;
cout<<"The total no of Buses Parked = "<<bus<<endl;
}
else if (u_input==5)
{
amount = 0;
count = 0;
}
else 
{
cout<<"\ninvalid no\n";
}
}
}
return 0;
}
