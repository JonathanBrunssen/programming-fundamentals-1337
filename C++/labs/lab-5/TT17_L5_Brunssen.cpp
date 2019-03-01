/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 5
Purpose: calculate the amount of people in prairieville
*/
#include <iostream>
#include <iomanip>
#include<fstream>
using namespace std;
int count_population( int people = 0){
	int s = people/1000;
	return s;
}
int main(){
	ifstream inputFile; inputFile.open("people.txt");
	if(!inputFile){
		cout << "404 error: could not find correct file looking for file named 'people.txt'\n";
	}
	else{
		int n;
		int y{};//census number
		int s{};//number of stars
		int year = 1910;
		cout << "Prairieville Population Growth\n" << "(each * represents 1000 people)\n";
		while(inputFile >> n){
			s = count_population(n);	
			cout << year + (y*20) << " ";
			for( s; s > 0; s--)
			{
			cout << "*";
			} 
			cout<< endl;
			++y;
		}
	}
	return 0;
}
/*
Prairieville Population Growth
(each * represents 1000 people)
1910 **
1930 ****
1950 *****
1970 *********
1990 **************
2010 ******************
2030 **********************
2050 **************************

--------------------------------
Process exited after 0.0362 seconds with return value 0
Press any key to continue . . .*/
