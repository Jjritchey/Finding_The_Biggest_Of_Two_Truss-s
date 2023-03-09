#include <bits/stdc++.h>

using namespace std;


//Another potential challenge project
//The user will enter 2 inputs for both Truss'. You need to accept these and find which 
//which one has the bigger area and then print the output with 6 decimals places


void main()
{

	float b1, b2, h1, h2, area1, area2;                  //floats for both base,heights and areas for each truss

	cout << "Enter first truss' base and height: ";    //getting first truss info
	cin >> b1 >> h1;

	cout << "\n" << "Enter second truss' base and height: ";   //getting second truss info
	cin >> b2 >> h2;

	area1 = (b1 * h1) / 2;                                 //calucating the areas for both trusses
	area2 = (b2 * h2) / 2;

	cout << setprecision(6) << fixed;                     //setting the decmial places to 6 for any output


	if (area1 > area2)                            //if area 1 is largrer than area 2
	{
		cout << "\nThe Greate area is the first truss: " << area1;
	}
	else if(area2 > area1)                       //if area 2 is larger
	{
		cout << "\nThe Greate area is the second truss: " << area2;
	}
	else                         //if they are the same size
	{
		cout << "The truss are equal in size: " << area1;
	}

}


 



