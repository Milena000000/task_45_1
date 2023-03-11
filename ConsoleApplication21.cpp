#include <iostream>
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int GetRandomNumber(int min, int max, int seed)
{

	srand(time(NULL)+seed);
	
	int num = min + rand() % (max - min + 1);

	return num;
}

void main()
{
	int number3;

	int number, number1, number2;

	
	do {
		cout << GetRandomNumber(0, 10,1 ) << " - " << GetRandomNumber(0, 10, 4) << " + " << GetRandomNumber(0, 10, 5) << " = ";
		cin >> number3;

	} while ();

	


}