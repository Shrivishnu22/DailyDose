/*
A food court facilitates their customers with a featured App where the customers can view the Menu Card and place their order. The order may be delivered on-premises as per policies.
Write a code to take the order from the customers by pressing menu number Quantity
After one customer completes the process of placing the order by pressing the Menu number and Quantity. Your code should accept y to continue taking order or n for stopping the process of order taking Final output should be the calculated total amount.

Menu card is given as

Number Name Price

1. Veg sandwich 80.0
2. Cheese sandwich 130.0
3. Veg Grilled sandwich 100.0
4. SadaDosa 80.0
5. Masala Dosa 90.0
6. Onion RavaSadaDosa 110.0
7. Onion Rava Masala Dosa 120.0
8. Spring Dosa 140.0
9. Plain Uttapam 70.0
10. Onion Uttapam 80.0

You can use any suitable data structure to hold the menu card items with price.

Inputs for Menu Number and Quantity should be integers greater than 0 and less than 21.

For any other input, return as output: INVALID INPUT

Example 1

INPUT VALUES
1 //for enter menu number
2 //for enter quantity
Y //Do you want to order
More Items? (y/n)
2 //for enter menu number
3 //for enter quantity
N //Do you want to order
More items? (y/n)

Output values

Total Amount : 550.0 INR
Note: Input prompt should not be the part of code
(Only accept values as input in order as given above)
Output should be in the format given above.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[10] = {80, 130, 100, 80, 90, 110, 120, 140, 70, 80};
	int m, a, out = 0;
	char op;
	while (true) {
		cout << "Enter the item number and quantity" << endl;
		cin >> m >> a;
		out += (arr[m - 1] * a);
		cout << "Do you want more items: " << endl;
		cin >> op;
		if (op == 'n' || op == 'N')
			break;
	}
	cout << "Total amount: " << out << endl;
	cout << "Thank you.";
	return 0;
}


o / p

Enter the item number and quantity
1
2
Do you want more items:
y
Enter the item number and quantity
2
3
Do you want more items:
n
Total amount: 550
Thank you.