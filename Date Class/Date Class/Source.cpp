//******************Including Libraries*************************
#include<iostream>

#include<stdio.h>

#include<string>

using namespace std;
//*********************User Defined Class as Date**********************
//******************that will be keeping track of***********************
//******************date of joining of the employee**********************
//*************Variables Having month day and year**********************
//****************With Different Geters ans Setters*********************
//**************And a specialized function to print the date************ 
class Date {
	int day = 0;
	int month = 0;
	int year = 0;

public:
	//default constructor
	Date();
	//overloaded constructor
	Date(int a, int b, int c);
	//setter of day
	void setDay(int d);
	//setter of month
	void setMonth(int m);
	//setter of year
	void setYear(int y);
	//getter of day
	int getDay() const;
	//getter of month
	int getMonth() const;
	//getter of year
	int getYear() const;
	//specialized function to print date
	string getDate() const;
	//destructor
	virtual~Date();
};
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::setDay(int d) {
	if (d > 0 && d < 32) {
		day = d;
	}
}
void Date::setMonth(int m) {
	if (m > 0 && m < 13) {
		month = m;
	}
}
void Date::setYear(int y) {

	year = y;
}
int Date::getDay() const {
	return day;
}
int Date::getMonth() const {
	return month;
}
int Date::getYear() const {
	return year;
}
string Date::getDate() const {
	string to_ret;

	to_ret = to_string(getDay());
	to_ret = to_ret + "/";
	to_ret = to_ret + to_string(getMonth());
	to_ret = to_ret + "/";
	to_ret = to_ret + to_string(getYear());
	return to_ret;

}
Date::~Date() {

}