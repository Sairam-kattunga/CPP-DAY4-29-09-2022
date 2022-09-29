#include<iostream>
using namespace std;
int main()
{
int income,tax;
cout<<"Enter the income :";
cin>>income;

if(income>=0 & income<=150000)
{
    cout<<" no tax ";
}


else if(income>=150001 & income <=300000)
{
    tax=income*0.1;
    cout<<" tax ="<<tax;
}


else if(income>=300001 & income<=500000)
{
	tax=income*0.2;
    cout<<"tax ="<<tax;
}


else if(income>500000)
{
tax=income*0.3;
cout<<"tax ="<<tax;
}


else
{
	cout<<"invalid input ";
}


return 0;
}
