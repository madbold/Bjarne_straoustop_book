#include "Date.h"
Date Date::default_date = Date(1, Jan, 2001);
map<int, string> Date::_mnth{ {1,"Jan"},{2,"Feb" }, {3,"March"}, {4,"April"}, {5,"May"},
{6,"June"},{ 7,"July"},{ 8,"Aug"},{ 9,"Sept"} ,{10,"Oct"},{ 11 , "Nov" }, { 12,"Dec" } };

Date::Date(int dd, Month mm, int yy)
{
    this->dd= dd ? dd : default_date.dd;
    this->mm = mm ? mm : default_date.mm;
    this->yy =  yy ? yy : default_date.yy;  
 
}

ostream& operator<<(ostream& out, Date& d)
{
    out << '(';
    out << d.dd << ',' <<d._mnth[d.mm]<<',' <<d.yy;
    out << ')';
    return out;
}
