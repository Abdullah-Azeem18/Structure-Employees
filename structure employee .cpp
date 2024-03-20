#include<iostream>
using namespace std;
struct addr
{
int house_no;
char area[];
};
int main()
{
struct empl
{
char name[100];
int salary ;
addr address;
};
empl e;
cout<<"Enter employee Name :";
cin>>e.name;
cout<<"\nEnter employee Salary:";
cin>>e.salary;
cout<<"\nEnter Employee house no";
cin>>e.address.house_no;
cout<<"\nEnter Employee Area";
cin>>e.address.area;
return 0;
}


