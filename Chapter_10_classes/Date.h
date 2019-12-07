#include <iostream>
#include <ostream>
#include <map>
using namespace std;
class Date
{
public:
	
	enum  Month { Jan = 1, Feb, March, Apr, June, July, Aug, Sept, Oct, Nov, Dec };
	Date(int dd=0, Month mm=Month(0), int yy=0);
	void setDefaultDate(Date d);
	Date& add_month();
	Date& add_day();
	Date& add_year();
	string str(Date& d);
	Date& operator==(Date& d);
	friend ostream& operator<<(ostream& out, Date& d);

private:
	int dd, yy;
	Month mm;
	static map<int, string> _mnth;
	static Date default_date;

};
