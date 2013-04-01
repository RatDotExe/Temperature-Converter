//
// Rat_Dot_Exe's Temperature Converter
// Written in C++
//

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;
int main() {
	
	int a = 32;
	double b = 1.8;
	int t;
	int r;
	string u;
	
	cout << "What's the unit?\n";
	cin >> u;
	
	cout << "What's the number?\n";
	cin >> t;
	
	if (u == "celcius") {
			r = t * b + a;
		    u = "F";
	}
		
    	if (u == "fahrenheit") {
			r = t - a / b;
			u = "C";
	}
	
	if (u == "c") {
		r = t * b + a;
		u = "F";
	}
	
	if (u == "f") {
		r = t - a / b;
	    u = "C";
	}
	cout << "Result: " << r << u;
	
	return 0;
}