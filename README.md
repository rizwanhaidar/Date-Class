# Date-Class
This is a Date class (User Defined) that takes the values in integers and then you can access full date in string format. Initialized with multiple constructors.

//default constructor
## Date();
	//overloaded constructor
## Date(int a, int b, int c);
	//setter of day
## void setDay(int d);
	//setter of month
## void setMonth(int m);
	//setter of year
## void setYear(int y);
	//getter of day
## int getDay() const;
	//getter of month
## int getMonth() const;
	//getter of year
## int getYear() const;
	//specialized function to print date
## string getDate() const;
	//destructor
## virtual~Date();
