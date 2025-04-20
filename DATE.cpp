#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

struct Date {
	int day, month, year;
	void operator = (Date dt) {
		day = dt.day;
		month = dt.month;
		year = dt.year;
	}
	Date() {
		day = month = year = 1;
	}
};


istream& operator >> (istream& is, Date& dt);
ostream& operator << (ostream& out, Date dt);
bool isLeap(Date dt);
int cntDay(Date dt);
string dayOfTheWeek(Date dt);
Date nextDate(Date dt);
bool operator == (Date dt1, Date dt2);
bool coincidentDayOfTheWeek(Date dt1, Date dt2);
bool operator < (Date dt1, Date dt2);
int operator - (Date dt1, Date dt2);

int main() {
	//ifstream ifile("DATE.inp");
	Date dt1, dt2;
	cin >> dt1 >> dt2;
	//ifile.close();
	//ofstream ofile("DATE.out");
	cout << dt1 << " " << dayOfTheWeek(dt1) << " " << cntDay(dt1) << " " << nextDate(dt1) << " ";
	if (isLeap(dt1)) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
	cout << dt2 << " " << dayOfTheWeek(dt2) << " " << cntDay(dt2) << " " << nextDate(dt2) << " ";
	if (isLeap(dt2)) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
	if (coincidentDayOfTheWeek(dt1, dt2)) cout << "TRUE" << endl;
	else cout << "FALSE" << endl;
	if (dt1 < dt2) cout << "1 < 2" << endl;
	else if (dt1 == dt2) cout << "1 = 2" << endl;
	else cout << "1 > 2" << endl;
	cout << dt1 - dt2;
	//ofile.close();
	return 0;
}

istream& operator >> (istream& is, Date& dt) {
	do {
		is >> dt.day >> dt.month >> dt.year;
	} while (dt.day <= 0 || dt.day > 31 || dt.month <= 0 || dt.month > 12 || dt.year <= 0);
	return is;
}
ostream& operator << (ostream& out, Date dt) {
	if (dt.day < 10) out << "0" << dt.day;
	else out << dt.day;
	out << "/";
	if (dt.month < 10) out << "0" << dt.month;
	else out << dt.month;
	out << "/";
	//if (dt.year < 10) os << "000" << dt.year;
	//else if (dt.year < 100) os << "00" << dt.year;
	//else if (dt.year < 1000) os << "000" << dt.year;
	out << dt.year;
	return out;
}
bool isLeap(Date dt) {
	return ((dt.year % 4 == 0) && (dt.year % 100 != 0)) || (dt.year % 400 == 0);
}
int cntDay(Date dt) {
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int res = 0;
	if (isLeap(dt)) day[2] = 29;
	for (int i = 1; i < dt.month; i++) {
		res += day[i];
	}
	res += dt.day;
	return res;
}
string dayOfTheWeek(Date dt) {
	if (dt.month < 3) {
		dt.month += 12;
		dt.year--;
	}
	int n = (dt.day + 2 * dt.month + (3 * (dt.month + 1)) / 5 + dt.year + (dt.year / 4)) % 7;
	if (n == 0) return "Sunday";
	else if (n == 1) return "Monday";
	else if (n == 2) return "Tuesday";
	else if (n == 3) return "Wednesday";
	else if (n == 4) return "Thursday";
	else if (n == 5) return "Friday";
	else if (n == 6) return "Saturday";
	return "";
}
Date nextDate(Date dt) {
	Date res;
	dt.day++;
	switch (dt.day) {
		case 32: {
			dt.day = 1;
			if (dt.month == 12) {
				dt.month = 1;
				dt.year++;
			}
			else dt.month++;
			break;
		}
		case 31: {
			switch (dt.month) {
			case 4: case 6: case 9: case 11: {
				dt.day = 1;
				dt.month++;
				break;
			}
			default:
				break;
			}
			break;
		}
		case 30: {
			if (dt.month == 2 && isLeap(dt)) {
				dt.day = 1;
				dt.month = 3;
			}
			break;
		}
		case 29: {
			if (dt.month == 2 && !isLeap(dt)) {
				dt.day = 1;
				dt.month = 3;
			}
			break;
		}
	}
	res.day = dt.day;
	res.month = dt.month;
	res.year = dt.year;
	return res;
}
bool operator == (Date dt1, Date dt2) {
	return (dt1.day == dt2.day) && (dt1.month == dt2.month) && (dt1.year == dt2.year);
}
bool coincidentDayOfTheWeek(Date dt1, Date dt2) {
	return dayOfTheWeek(dt1) == dayOfTheWeek(dt2);
}
bool operator < (Date dt1, Date dt2) {
	if (dt1.year == dt2.year) {
		if (dt1.month == dt2.month) {
			if (dt1.day < dt2.day) return true;
			else return false;
		}
		else if (dt1.month < dt2.month) return true;
		else return false;
	}
	else if (dt1.year < dt2.year) {
		return true;
	}
	else return false;
}
int operator - (Date dt1, Date dt2) {
	if (dt1.year == dt2.year) return abs(dt1.year - dt2.year);
	else {
		Date tmp, tmp1;
		tmp = (dt1.year < dt2.year) ? dt1 : dt2;
		tmp1 = (dt1.year < dt2.year) ? dt2 : dt1;
		int res = 365 - cntDay(tmp);
		if (isLeap(tmp)) {
			res++;
		}
		tmp.year++;
		while (tmp.year < dt2.year || tmp.year < dt1.year) {
			res += 365;
			if (isLeap(tmp)) {
				res++;
			}
			tmp.year++;
		}
		if (tmp.year == tmp1.year) {
			res += cntDay(tmp1);
		}
		return res;
	}
}