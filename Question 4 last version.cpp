/* ConsoleApplication8.cpp : Defines the entry point for the console application.
Question 4
Structured Programming Project 
By: Carlos Goncalves 
2/12/2016
*/

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

struct Phone_Structure
{
	char international[1];
	char country[2];
	char regional[3];
	char home[7];
};
struct Student_Structure
{
	int student_id;
	string email, name, family_name;
	Phone_Structure phone;
};

int main()
{
int choice, index, find_id;
char ans;
char star;
bool found;
Student_Structure student[50];

do
{cout << "_____________________________________________________________________________________________________________\n";
cout << "--------------------------------------- Student Management Application --------------------------------------- \n";
cout << "_____________________________________________________________________________________________________________\n";
cout << endl;
cout << " 1. Create and add a student \n";
cout << " 2. Search for a student by number \n";
cout << " 3. Display the student list \n";
cout << " 4. Exit the application \n";
cout << endl;
cout << "Enter your choice: ";
cout << endl;
cin >> choice;
system("cls");

  switch (choice)
	{
	case 1:
	{
	 index = 0;
	cout << "Please enter the data to add a new student: \n";
		do
		{
		cout << "Please enter the student number: ";
		cin >> student[index].student_id;
		cout << "Please enter the student's first name: ";
		cin >> student[index].name;
		cout << "Please enter the student's family name: ";
		cin >> student[index].family_name;
		cout << "Please enter the student's e-mail adress: ";
		cin >> student[index].email;
		cout << "Please enter the student's phone # ";
		cout << "Enter the student's phone number. \n";
		cout << endl;
		cout << "Use the international code format: X XX XXX XXXXXXX: ";
		cout << endl;
		cin >> student[index].phone.international;
		cin >> student[index].phone.country;
		cin >> student[index].phone.regional;
		cin >> student[index].phone.home;
		index = index + 1;
		cout << endl;
		cout << "Do you want to add another student?\n";
		cin >> ans;
		} while ((ans == 'Y') || (ans == 'y'));
		
	}break;

	case 2:
	{
	cout << "Search by student-number \n";
	    do
		{
		cout << endl;
		cout << "Please enter the student ID: ";
	    cin >> find_id;
		  for (int i = 0; i < index; i++)
		  {
		  if (student[i].student_id == find_id)
		   {
			cout << "Student's first name: ";
			cout << student[i].name << "\n";
			cout << "Student's family name: ";
			cout << student[i].family_name << "\n";
			cout << "Student's e-mail adress: ";
			cout << student[i].email << "\n";
			cout << "Student's phone #: ";
			cout << student[i].phone.international; // << " " << student[i].phone.country << " " << cout << student[i].phone.regional << " " <<cout << student[i].phone.home << endl;
						found = true;
						break;
					  }
				  }
				  if (!found)
					  {
						  cout << find_id << " Is invalid \n";
					  }
				  cout << endl;
				  cout << endl;
				  cout << "Do you want add a new student? ";
				  cin >> ans;
				  cout << "\n";
			} while ((ans == 'Y') || (ans == 'y'));
		break;
		}
		case 3:
		{
			  cout << "This are the student that you have entered\n";
			  for (int i = 0; i < index; i++)
			  {
				cout << "This is the student ID for student: " << i <<endl;
				cout << student[i].student_id << endl;
				cout << "This is the student first name for student: " << i <<endl;
				cout << student[i].name << endl;
				cout << "This is the student family name for student: " << i <<endl;
				cout << student[i].family_name << endl;
				cout << "This is the student e-mail adress for student: " << i <<endl;
				cout << student[i].email << endl;
				cout << "This is the student phone for student: " << i <<endl;;
				cout << student[i].phone.international; //<< " " << student[i].phone.country << " " << cout << student[i].phone.regional << " " <<cout << student[i].phone.home << endl;
				cout << endl;
			  }
		system("pause");
		}
			break;

		case 4:
		{
		return 0;
		} while (choice != 4);

			break;
	
	default:
			cout <<"Wrong Selection, try again thanks"<< endl;	
			}

cout << endl;
cout << " If you want to return to menu, please press Y \n";
cin >> star;
system("cls");
	}while (star == 'y' || star == 'Y'); // close of the do;then, we need the while
	system("pause");
	return 0;
}