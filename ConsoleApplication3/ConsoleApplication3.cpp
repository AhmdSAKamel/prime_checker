#include <iostream>
#include <cmath>
#include <string> 
using namespace std;


enum enCheckPrimeNumber {Prime = 1, NotPrime = 2};

short ReadNum(string Message)
{
	short Num;

	cout << Message ;
	cin >> Num;

	if (Num <= 0)
	{
		do
		{
			cout << "Prime Number must be > 0\n\n";
			cin >> Num;
		
		} while (Num <= 0);
	}

	return Num;
}

enCheckPrimeNumber CheckPrimeNumber(short Num)
{	
	for (short Counter = 2; Counter < Num; Counter++)
	{
		if (Num % Counter == 0)
		{
			return enCheckPrimeNumber::NotPrime;
		}
	}

	return enCheckPrimeNumber::Prime;
}

void Print(enCheckPrimeNumber PrimeNumber)
{
	if (PrimeNumber == enCheckPrimeNumber::NotPrime)
		cout << "Your entered number is not a prime number";
	else
		cout << "Your entered number is a prime number";
}



int main()
{
	Print(CheckPrimeNumber(ReadNum("Please enter a Number: ")));
}

