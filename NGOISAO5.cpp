#include<iostream>
using namespace std;

int main(){

	int h;
	cin >> h;

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j < i; j++){
			cout << " ";
		}
		for (int k = 1; k <= 2 * (h - i) + 1; k++){
			cout << "*";
		}
		for (int j = 1; j < i; j++){
			cout << " ";
	    }
	
	    if (i != h){
	        cout << endl;
	    }
	}

	return 0;
}