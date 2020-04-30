/*
  This program will keep track of a volleyball game score between
  Buffalo State and Notre Dame. The game ends when a team reaches at
  least 15 points and is ahead by two.

  Programmer: Tianna Hatch
  Date:      4/11/2020
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	int buffstate, // Buffalo State Score
	    notredame; // Notre Dame Score
char ch;
char a;
char b;


	// Continue playing as long as the game is not over
    // (a team does not have a score of 15 or more
    // with a difference of at least 2)
buffstate = 0;
notredame = 0;
ch = 0;
a = 0;
b = 0;


	while (!(buffstate >= 15 && buffstate - notredame >= 2 || notredame >= 15 && notredame - buffstate >= 2 ))

	{


		cout << "Who scored the point? ";
		cout << "\nb = Buffalo State     n=Notre Dame\n";
		cin >> ch;


		// increment the appropriate score
switch (ch)
{
case 'b':
buffstate = buffstate + 1;

break;

case 'n':
notredame = notredame + 1;

break;

}


		cout << "Current Score: Buffalo State: " << buffstate
                 << "   Notre Dame: " << notredame << endl;
	}
    // print final score
    if (notredame > buffstate)
		cout << "\nBoo, Notre Dame: " << notredame <<
                 "  Buffalo State: " << buffstate;
    else
		cout << "\nYeah, Buffalo State: " << buffstate <<
                 "  Notre Dame: " << notredame;
    cout << "\n\n";

    return 0;
}
