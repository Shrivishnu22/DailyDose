/*
FULLY AUTOMATIC VENDING MACHINE 
dispenses your cuppa on just press of button. A vending machine can serve range of products as follows: 
Coffee 
1 Espresso Coffee 
2 Cappuccino Coffee 
3 Latte Coffee 

Tea 
1. Plain Tea 
2. Assam Tea 
3. Ginger Tea 
4. Cardamom Tea 
5. Masala Tea 
6. Lemon Tea 
7. Green Tea 
8. Organic Darjeeling Tea 

Soups 
1. Hot and Sour Soup 
2. Veg Corn Soup 
3. Tomato Soup 
4. Spicy Tomato Soup 

Beverages
1 Hot Chocolate Drink 
2 Badam Drink 
3 Badam-Pista Drink 

Write a program to take input for main menu & sub menu and display the name of sub menu selected in the following format (enter the first letter to select main menu): Welcome to CCD Enjoy your <name of sub menu> Example 1: Input c 1 Output Welcome to CCD! Enjoy your Espresso Coffee! Example 2: Input t
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string menu[4][10] = {{"Espresso Coffee", "Cappuccino Coffee", "Latte Coffee"}, {"Plain Tea", "Assam Tea", "Ginger Tea", "Cardamom Tea", "Masala Tea", "Lemon Tea", "Green Tea", "Organic Darjeeling Tea"}, {"Hot and Sour Soup", "Veg Corn Soup", "Tomato Soup", "Spicy Tomato Soup"}, {"Hot Chocolate Drink", "Badam Drink", "Badam-Pista Drink"}};
	char ch;
	int op;
	cin >> ch >> op;
	cout << "Welcome to CCD!" << endl;
	if (ch == 'c' && op <= 3)
		cout << "Enjoy your " + menu[0][op - 1];
	else if (ch == 't' && op <= 8)
		cout << "Enjoy your " + menu[1][op - 1];
	else if (ch == 's' && op <= 4)
		cout << "Enjoy your " + menu[2][op - 1];
	else if (ch == 'b' && op <= 3)
		cout << "Enjoy your " + menu[3][op - 1];
	else
		cout << "INVALID OUTPUT!";


	return 0;
}
