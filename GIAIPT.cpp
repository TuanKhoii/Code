#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	if ((a == 0) && (b == 0)&&(c==0)) {
		cout << "VSN";
		return 0;
	}
	if ((a == 0) && (b == 0) && (c != 0)){
	    cout<<"VN";
	    return 0;
	}
	if ((a == 0) && (b != 0)){
		x1 = c/-b;
		if(x1==0) x1=0;
		cout << fixed << setprecision(4) << x1;
		
		return 0;
	}
	if(a!=0){
	    d = b*b - 4 * a*c;
	    if (d<0){
	    	cout <<"VN";
	    	return 0;
    	}
    	if (d == 0){
    		x1 = (-b )/ (2 * a);
    		if(x1==0) x1=0;
    		cout<<fixed<<setprecision(4) << x1;
    		return 0;
	    }
    	if (d>0){
	    	x1 = (-b - sqrt(d)) / (2 * a);
	    	if(x1==0) x1=0;
	    	x2 = (-b + sqrt(d)) / (2 * a);
	    	if(x2==0) x2=0;

	    	if(x1,x2){
	    	    double temp=x1;
	    	    x1=x2;
	    	    x2=temp;
	    	}
	    	cout << fixed<<setprecision(4) << x1<<endl;
	    	cout <<fixed<< setprecision(4) << x2;
    	}
	}
	return 0;
}