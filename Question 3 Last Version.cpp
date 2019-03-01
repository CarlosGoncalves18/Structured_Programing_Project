/* ConsoleApplication8.cpp : Defines the entry point for the console application.
Question 3
Structured Programming Project 
By: Carlos Goncalves 
2/12/2016
*/

#include "stdafx.h"
#include <iostream>
#include <string> 
using namespace std;

struct Course
{
    char Course_Number[50];
	string Title, title2;
	int Hours_week;
	char Session[50];
} courses[10];

int main()
{
int index;
char ans;

    cout << "Enter information of your Courses: " << endl;
	cout << endl;

	index = 1;
    // storing information
   
	do
	{	cout << "Enter the Course number: " << endl;
        cin >> courses[index].Course_Number;

        cout << "Enter the Title of the course: " << endl;
        cin >> courses[index].Title >> courses[index].title2;

	    cout << "Enter the hours per week of the course: " << endl;
        cin >> courses[index].Hours_week;

		cout << "Enter the Session of the course: " << endl;
        cin >> courses[index].Session;
		
		index = index + 1;
		cout << endl;
		cout << " More Courses? (Y/N) ";
		cin >> ans;
		cout << endl;
	}	while ((ans == 'Y') || (ans == 'y'));

    cout << "Displaying Information: " << endl;

    // Displaying information

	system("cls");

    for(int i = 1; i < index; ++i)
    {
		cout << "The Course number is: " << courses[i].Course_Number << endl;
        cout << "the Title of the course is:" << courses[i].Title << " " << courses[i].title2 << endl;
		cout << "The hours per week of the course is: " << courses[i].Hours_week << endl;
		cout << "The Session of the course is:" << courses[i].Session << endl;
		cout << endl;      
    }

	system ("pause");
    return 0;
}
