/* ConsoleApplication8.cpp : Defines the entry point for the console application.
Question 2 
Structured Programming Project 
By: Carlos Goncalves 
2/12/2016
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

//Functions
void input1(double,double, double, double, double, double);
double conversion1(double, double, double, double, double, double);
void output1(double, double);
void output3(double, double,double,double);
void input2(double,double, double, double, double, double);
double conversion2(double, double, double, double, double, double);
void output2(double, double);
void output4(double, double,double,double);
double pounds, kilogram, ounces, grams,max1, min1, max2, min2, max3, min3, min4, max4 ;

int main()

{ 
char ans = 'y';
char ans1 = 'y';
int choose = 2;
// Open the menu
do {
	cout << "Please choose one option to make a conversion.\n";
	cout << endl;
	cout << "Enter 1 for the first program to kilograms and grams to pounds and ounces \n";
	cout << "Enter 2 for the second program to convert pounds and ounces to kilograms and grams \n";
	cout << "Pres 0 to exit of the program ";
	cout << endl; 
	cin >> choose;

		system("cls");
		switch (choose) 
		{
			
		case 0:
		{
		return 0;
		}break;

		case 1:
		{
			do{
				input1 (pounds,ounces,min1,max1,min2,max2);
				conversion1(kilogram, grams,min1,max1,min2,max2);
				output1(pounds, ounces);
				cout << endl;
				cout << "Do you want to continue? " <<endl;
				cin >> ans1;
			   }while(ans1 == 'y'||ans1 == 'Y');
		output3(min1, max1, min2, max2);
		}break;
		
		case 2:
		{
			do{
				input2(kilogram,grams,min3,max3,min4,max4);
				conversion2(pounds, ounces,min3,max3,min4,max4);
				output2(pounds,ounces);
				cout << endl;
				cout << "Do you want to continue? " <<endl;
				cin >> ans1;
				cout << endl;
			  }while(ans1 == 'y'||ans1 == 'Y');
		
			output4(min3,max3,min4,max4);
		}break;

		default:
			cout <<"Choose has to be 1 or 2, thanks"<< endl;	
			}

cout << endl;
cout << " If you want to return to menu, please press Y \n";
cin >> ans;
system("cls");
	}while (ans == 'y' || ans == 'Y'); // close of the do;then, we need the while
	system("pause");
	return 0;
}

void input1(double, double, double, double, double, double) //Fuction to enter the values in Kg and gr. 
{
cout << "Please enter the weigth in kilogram: \n" ;
cin >> kilogram;
cout << "Please enter the weigth in grams: \n" ;
cin >> grams;
max1=pounds;
min1=pounds;
max2=ounces;
min2=ounces;
}

double conversion1(double, double, double, double, double, double) //Fuction to convert the values that user entered in Kg and gr. to lb and oz. 
{
 pounds = kilogram * 2.204;
 ounces = grams * (1/28.35);


				if (pounds  > max1)
				{
					max1 = pounds ;
				}
				if (pounds  < min1 &&  pounds>0)
				{
					min1 = pounds ;
				}

				if (ounces  > max2)
				{
					max2 = ounces ;
				}
				if (ounces < min2 &&  ounces >0)
				{
					min2 = ounces ;
				}	

 return pounds, ounces, min1, max1, min2, max2 ;
}

void output1(double, double) //Fuction to display the values in lb and oz.
{cout <<endl;
cout << "The weigth of kilogram in pounds is: " << pounds <<endl;
cout << "The weigth of grams in ounces is: " << ounces <<endl;

}

void output3(double, double, double, double) //Function to display max and min values that user entered converted to pounds and ounces 
{
			cout << min1 << " is your lower number that after you converted to pounds\n";
			cout << "\n";
			cout << max1 << " is your bigger number that after you converted  to pounds\n";
			cout << "\n";
			cout << min2 << " is your lower number that after you converted to ounces \n";
			cout << "\n";
			cout << max2 << " is your bigger number that after you converted  to ounces \n";
}

void input2(double, double, double, double, double, double) //Fuction to enter the values in lb. and oz 
{cout << "Please enter the weigth in pounds: \n" ;
cin >> pounds;
cout << "Please enter the weigth in ounces: \n" ;
cin >> ounces;
max3 = kilogram;
min3 = kilogram;
max4= grams; 
min4= grams;	
}

double conversion2(double, double, double, double, double, double) //Fuction to convert the values that user entered in  lb. and oz. to kg. and gr, 
{
kilogram = pounds / 2.2;
grams = ounces * 28.35;
		if (kilogram > max3)
				{
					max3 = kilogram;
				}
				if (kilogram < min3 &&  kilogram>0)
				{
					min3 = kilogram;
				}


				if (grams > max4)
				{
					max4 = grams;
				}
				if (grams < min4 &&  grams>0)
			
					min4 = grams;


return kilogram, grams, max3, min3, min4, max4;
}

void output2(double, double) //Fuction to display the values in Kg and gr.
{
cout << "The weigth of pound in kilograms is: " << kilogram <<endl;
cout << "The weigth of ounces in grams is: "<< grams <<endl;
}

void output4(double, double, double, double) //Function to display max and min values that user entered converted to Kg. and gr. 
{
			cout << min3 << " is your lower number after you converted to KG \n";
			cout << "\n";
			cout << max3 << " is your bigger number after you converted to KG \n";
			cout << "\n";
			cout << min4 << " is your lower number after you converted to G \n";
			cout << "\n";
			cout << max4 << " is your bigger number after you converted to G \n";
}