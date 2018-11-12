#include "Header.h"

using namespace std;

int main() {
gamestart:
	//Story Part 1
	cout << "Answer the following questions to start your adventure!\n";
	string name = GetTextFromUser("\nWelcome traveler. What is your name? ");
	int age = GetNumbersFromUser("I see I see...How old are you, mate? ");
	cout << "\n";
	story1(name, age);
	//In between actions
	cout << "\n";
	inBetweenStory();
	//Story Part 2
	cout << "\n";
	char princessSaving = princess("Do you save the girl? Y/N");
	story2(princessSaving);
	//Decides on the adventure's decision.
	if (toupper(princessSaving) == 'N') {
		cout << "\nYou have died....";
		cout << "\nWould you like to start over? Y/N ";
		char startOver;
		cin >> startOver;
		while (toupper(startOver) != 'Y' || toupper(startOver) != 'N') {
			if (tolower(startOver) == 'y') {
				cout << "\n";
				goto gamestart;
			}
			else if (tolower(startOver) == 'n') {
				cout << "\nYour adventures has ended.";
				cout << "\nYou have went down known as the adventure";
				cout << "\nwho was unlucky.";
				cout << "\nThe adventure who came in contact with bandits";
				cout << "\nand was killed.\n";

				system("pause");
				return 0;
			}
			else {
				cout << "Please enter Y or N." << endl;
				cin >> startOver;
			}
		}
	}
	//Story Part 3
	char JF = jumpOrFight("Do you jump or fight? J/F ");
	story3(JF);

	//Ending
	story4(name);

	//Pauses the console for it to not automatically exit the program
	system("pause");
	return 0;
}