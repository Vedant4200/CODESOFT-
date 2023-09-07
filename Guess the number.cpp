#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number,num_guess, tries = 0;
	//seed random number generator
	srand(time(0)); 
	// random number selected between 1 and 100
	number = rand() % 100 + 1; 
	cout<<"********* Vedant Agrawal**********"<<endl;
	cout << "Guess My Number Game"<<endl<<endl;

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> num_guess;
		tries++;

		if (num_guess > number)
			cout << "Too high!"<<endl<<endl;
		else if (num_guess < number)
			cout << "Too low!"<<endl<<endl;
		else
			cout <<endl<<"Correct! You got it in " << tries << " guesses!"<<endl;;
	} while (num_guess != number);

	return 0;
}
