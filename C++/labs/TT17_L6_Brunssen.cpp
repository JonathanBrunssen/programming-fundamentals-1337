/*
Author: Jonathan Brunssen
Course: COSC 1337
Spring 2019 TT17
Instructor: Thayer
Lab: 6
Purpose: Display the distance between two items: letters, numbers, or points.
*/
#include <iostream>
#include <typeinfo>
using namespace std;

int dist(char a, char b){//return the distance between two letters
}

double dist(double d1, double d2){//return the distance between 2 numbers
}

double dis(double x1, double y1, double x2, double y2){//return the distance between 2 points
}


int main(){
	cout << "Display the distance between two items: letters, numbers, or points.\n" << endl;
	
	while(true){
		cout << "Options: l)etter; n)umber; p)oint; q)uit: ";
		char option{}; cin >> option; option = tolower(option);
		switch(option){
			case 'l':
				char l1;
				char l2;
				do{
					cout << "Enter first letter (a-z): ";
					cin >> l1; l1 = tolower(l1);
					cout << "Enter second leter (a-z): ";
					cin >> l2; l2 = tolower(l2);
					if(isdigit(l1) || isdigit(l2)){
						cout << "Sorry, try again.\n";
					}			
				}while(cin && isdigit(l1) || isdigit(l2));
				dist(l1,l2);
				break;
				
			case 'n':
				int n1;
				int n2;
				
					do{
						cout << "Enter the first number (-100,100): ";
						cin >> n1;
						if(n1 < -100 || n1 > 100){
							cout << "number not in range try again.\n";
						}
					}while(cin && typeid(n1) != typeid(int) && n1 < -100 || n1 > 100);
					
					do{
						cout << "Enter the first number (-100,100): ";
						cin >> n2;
						if(n2 < -100 || n2 > 100){
							cout << "number not in range try again.\n";
						}
					}while(cin && typeid(n2) != typeid(int) && n2 < -100 || n2 > 100);
				break;
			case 'p':
				break;
			case 'q':
				return false;
				break;
		}
	}
	return 0;
}
