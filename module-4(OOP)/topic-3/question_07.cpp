//Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
//// Include member functions to set and get these variables, as well as to validate if the date is valid///

#include<iostream>
using namespace std;
class Date{

	private:
		int day;
		int month;
		int year;
	public:
		//constructor//
		Date(int d,int m,int y):day(d),month(m),year(y){}
		
		// set data//
		void setDate(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
		}
		
		int getday()
		{
			return day;
		}
		int getmonth()
		{
			return month;
		}
		int getyear()
		{
			return year;
		}
		
		bool validDate()
		{
			// if condition to check valid-month//
			if(month<1 || month>12)
			{
				return false;
			}
			//if condition to check valid-date//
		    if(day<1 || day>31)
		    {
		    	return false;
			}
			//if condition to check valid month as per day//
			if((month==4 ||month==6 || month==9 ||month==11) && day>30)
			{
				return false;
			}
			if(month==2)
			{
				if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
				{
                    if (day > 29)
                    {
                    	return false;
					}
			    }
			    else 
				{
                   if (day > 28)
                   {
                   	  return false;
				   }
                }
		    }
		//if date is valid//
		return true;	
	    }
		
};
	
int main()
	{
		// date obj//
		Date date(0,0,0);
		
		int day,month,year;
		cout<<"enter the day:"<<endl;
		cin>>day;
		cout<<"enter the month:"<<endl;
		cin>>month;
		cout<<"enter the year:"<<endl;
		cin>>year;
		
		date.setDate(day,month,year);
		
		cout<<"Date:"<<date.getday()<<"/"<<date.getmonth()<<"/"<<date.getyear()<<endl;
		
		if(date.validDate())
	    	{
			  cout<<"date is valid"<<endl;
	    	}
		else
		    {
			 cout<<"invalid date"<<endl;
	     	}
	
    }
		
