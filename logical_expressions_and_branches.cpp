#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <cmath>

using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();
void task9();
void task10();

bool square(double, double);
bool rhomb(double, double);
bool circle(double, double);
bool triangle(double, double);

double min(double, double, double);
double min(double, double);
double max(double, double);
double max(double, double, double);


int main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(NULL));

	int number_of_task;

	cout << "List of tasks:\n";
	cout << "\tTask 1 \n\t\tOperators. Arithmetic operations with numbers.\n";
	cout << "\tTask 2 \n\t\tIf else. Logical choice construct if. Ladder if - else if.\n";
	cout << "\tTask 3 \n\t\tSwitch. Calculator. Menu. Homework.\n";
	cout << "\tTask 4 \n\t\tLine output.\n";
	cout << "\tTask 5 \n\t\tThe sum of all odd numbers in a range.\n";
	cout << "\tTask 6 \n\t\tNested structure. Nested loop.\n";
	cout << "\tTask 7 \n\t\tFill the array with random numbers. Unique random number generator. Output of the minimum number.\n";
	cout << "\tTask 8 \n\t\tThe program determines whether a piece will beat another by its position on the chess field \n";
	cout << "\tTask 9 \n\t\tThe program determines whether the point belongs to the shaded area \n";
	cout << "\tTask 10 \n\t\tThe program performs mathematical operations with the maximum, minimum number of the three entered \n";
	cout << "\nSelect which task to enable by entering its number:\n";

	cin >> number_of_task;
	system("cls");

	switch (number_of_task) 
	{
	case 1: task1();
		break;
	case 2: task2();
		break;
	case 3: task3();
		break;
	case 4:task4();
		break;
	case 5: task5();
		break;
	case 6: task6();
		break;
	case 7: task7();
		break;
	case 8: task8();
		break;
	case 9: task9();
		break;
	case 10: task10();
	default: cout << "I think you're confused." << endl;
		break;
	}
	return 0;
}

//Enter three numbers and display the sum, product and arithmetic mean of these numbers.
void task1()
{
	int number1, number2, number3;

	cout << "Enter three numbers:\n";
	cin >> number1 >> number2 >> number3;
	cout << endl;

	cout << "Sum of three numbers: " << number1 + number2 + number3 << endl;
	cout << "Product of three numbers: " << number1 * number2 * number3 << endl;
	cout << "Arithmetic mean of three numbers: " << (double)(number1 + number2 + number3) / 3 << endl;
}

//Write a program that checks the parity of a number entered from the keyboard.
void task2()
{
	int number;

	cout << "Enter a number to check for parity" << endl;
	cin >> number;
	cout << endl;

	if ((number % 2) == 0) {
		cout << "The entered number is even" << endl;
	}
	else {
		cout << "The entered number is odd" << endl;
	}
}

/*Write a simple calculator. The user enters the value of two variables.
Describe the menu in the console for mathematical operations of addition, subtraction, multiplication, division.
Using the switch statement, implement the mathematical operation corresponding to the menu item.*/
void task3()
{
	int number1, number2, operation;

	cout << "Enter two numbers:" << endl;
	cin >> number1 >> number2;
	system("cls");

	cout << "List of operations:\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division" << endl;
	cout << "Select the operation to be performed on numbers:" << endl;
	cin >> operation;
	system("cls");

	switch (operation) {
	case 1:
		cout << "Addition result: " << number1 + number2 << endl;
		break;
	case 2:
		cout << "Subtraction result: " << number1 - number2 << endl;
		break;
	case 3:
		cout << "Multiplication result: " << number1 * number2 << endl;
		break;
	case 4:
		cout << "Division result: " << (float)number1 / number2 << endl;
		break;
	default:
		cout << "Error! I can't do this :( " << endl;
		break;
	}
}

/*Develop a program that displays a line of symbols on the screen.
The number of characters, what character to use, and what line will be - vertical,
or horizontal - specified by the user. */
void task4()
{
	int characters, i = 1;
	char symbol, line;

	cout << "The program draws a line. Set the number of characters." << endl;
	cin >> characters;
	cout << "Specify which symbol to use to draw the line." << endl;
	cin >> symbol;
	cout << "What will the line be? Enter H if horizontal, or v if vertical." << endl;
	cin >> line;
	system("cls");

	if (line == 'H' || line == 'h') {
		while (i <= characters)
		{
			cout << symbol;
			++i;
		}
	}
	else if (line == 'V' || line == 'v') {
		while (i <= characters)
		{
			cout << symbol << endl;
			++i;
		}
	}
	else cout << "Incorrect line type ^_^";
}

/*Write a program that finds the sum of all odd integers in a range specified by the user.*/
void task5()
{
	int number1, number2, sum = 0;

	cout << "Enter the first (First less than first) and last number (Greater than first) in the range in which the sum of all odd numbers will be calculated:"
		<< endl;
	cin >> number1 >> number2;

	while (number1 != number2)
	{
		++number1;
		if (number1 % 2 != 0)
		{
			sum += number1;
		}
	}

	cout << "\nThe sum of all odd numbers in the range is equal to: " << sum << endl;
}

//Write a program that displays a rectangle with the symbol *. 
//Height and width are specified by the user.
void task6()
{
	int height, width;

	cout << "Set the height and width of the rectangle that will be drawn." << endl;
	cin >> height >> width;
	system("cls");

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

//Fill an array of 10 characters with random unique numbers and print the minimum.
void task7()
{
	int number, minimal;
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
		for (int j = 0; (j < i); j++)
		{
			if (arr[j] == arr[i])
			{
				arr[i] = rand() % 100;
				j = -1; 
			}
		}
		cout << arr[i] << endl;
	}

	minimal = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < minimal)
		{
			minimal = arr[i];
		}
	}
	cout << endl << "Minimum value =" << minimal << endl;
}

//The program determines whether a piece will beat another by its position on the chess field
void task8()
{
	int a, b, c, d;

	cout << "Enter the starting position of the shape" << endl;
	cin >> a >> b;
	cout << "Enter the position of the figure for combat" << endl;
	cin >> c >> d;

	if (abs(a - c) == abs(b - d)) { cout << "The bishop will beat the piece" << endl; }
	else { cout << "The elephant will not beat the figures" << endl; };

	if (double(sqrt(pow(a - c, 2) + pow(b - d, 2))) == sqrt(5))
	{
		cout << "The knight will beat the piece" << endl;
	}
	else cout << "The knight will not be able to capture the piece" << endl;

	if (a == c || b == d) { cout << "The rook will capture the piece" << endl; }
	else { cout << "The rook will not be able to capture the piece" << endl; };

	if (a == c || b == d || (abs(a - c) == abs(b - d))) { cout << "The queen will capture the piece" << endl; }
	else { cout << "The queen will not be able to capture the piece" << endl; };
}


//The program determines whether the point belongs to the shaded area
void task9()
{
	double x, y;
	bool result;

	cout << "Enter the coordinates of the point.";
	cin >> x >> y;

	cout << "Does the point belong to the shaded plane of Figure 1?" << endl;
	result = square(x, y);
	result == 1 ? cout << "Belongs" << endl : cout << "Doesn't belong" << endl;

	cout << "Does the point belong to the shaded plane of Figure 2?" << endl;
	result = rhomb(x, y);
	result == 1 ? cout << "Belongs" << endl : cout << "Doesn't belong" << endl;

	cout << "Does the point belong to the shaded plane in Figure 3?" << endl;
	result = circle(x, y);
	result == 1 ? cout << "Belongs" << endl : cout << "Doesn't belong" << endl;

	cout << "Does the point belong to the shaded plane in Figure 4?" << endl;
	result = rhomb(x, y);
	result == 1 ? cout << "Belongs" << endl : cout << "Doesn't belong" << endl;
}

bool square(double x, double y)
{

	if (((x >= -1 && x <= 1) && (y == 1 || y == -1)) || ((x == 1 || x == -1) && (y >= -1 && y <= 1)))
	{
		return 1;
	}
	else return 0;

}

bool rhomb(double x, double y)
{
	if (y <= 1 - x) { return 1; }
	else return 0;
}

bool triangle(double x, double y)
{
	if (y <= 0, 5 * x && x <= 2 && x >= 0) { return 1; }
	else return 0;
}

bool circle(double x, double y)
{
	if (sqrt(pow(x, 2) + pow(y, 2)) <= 1)
	{
		if (((x > -1 || x < 1) && (y > -1 || y < 1))) { return 0; }
		else return 1;
	}
	else return 0;
}

//The program performs mathematical operations with the maximum, minimum number of the three entered
void task10()
{
	double x, y, z, t, t1, u;

	cout << "Enter three numbers: x,y,z" << -2 % 2 << endl;
	cin >> x >> y >> z;

	cout << "min(x , y , z) + max(x, y) = " << min(x, y, z) + max(x, y) << endl;
	cout << "min(x , y , z) * max(x, y) = " << min(x, y, z) * max(x, y, z) << endl;

	t = x;
	x = max(x, y, z);
	t1 = y;
	y = (t + y + z) - (max(t, y, z) + min(t, y, z));
	z = min(t, t1, z);void task0();
	cout << "\nResult of changing variable values: \n" << "x = " << x << " y = " << y << " z = " << z << endl;

	u = (pow(max(x, y, z), 2) - pow(2, x) * min(x, y, z)) / (sin(2) + max(x, y) / min(y, z));
	cout << "\nThe result of the calculation of the expression =" << u << endl;
}

//Finding the minimum number among three numbers
double min(double x, double y, double z)
{

	if (x >= z && y >= z) { return z; }
	else
	{
		if (x >= y && z >= y) { return y; }
		else return x;
	}
}

//Finding the minimum number among two numbers
double min(double x, double y)
{
	if (x >= y) { return y; }
	else return x;
}

//Finding the maximum number among two numbers
double max(double x, double y)
{
	if (x >= y) { return x; }
	else return y;
}

//Finding the maximum number among three numbers
double max(double x, double y, double z)
{
	if (x >= y && x >= z) { return x; }
	else
	{
		if (y >= x && y >= z) { return y; }
		else return z;
	}
}void task0();