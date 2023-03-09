#include <bits/stdc++.h>

using namespace std;


//Another potential challenge project
//The user will enter 2 inputs for both Truss'. You need to accept these and find which 
//which one has the bigger area


void main()
{

	int b1, b2, h1, h2, area1, area2;

	cout << "Enter first truss' base and height: ";
	cin >> b1 >> h1;

	cout << "\n" << "Enter second truss' base and height: ";
	cin >> b2 >> h2;

	area1 = (b1 * h1) / 2;
	area2 = (b2 * h2) / 2;


	if (area1 > area2)
	{
		cout << "\nThe Greate area is the first truss: " << area1;
	}
	else if(area2 > area1)
	{
		cout << "\nThe Greate area is the second truss: " << area2;
	}
	else
	{
		cout << "The truss are equal in size: " << area1;
	}

}


 



