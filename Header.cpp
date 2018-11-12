#include <string>
#include <iostream>
#include "Header.h"

using namespace std;

//Get User's name
string GetTextFromUser(string prompt) {
	string name;
	cout << prompt;
	cin >> name;
	return name;
}

//Get User's age
int GetNumbersFromUser(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

//First part of the story
void story1(string name, int age) {
	cout << "\nWelcome " << name << ", to the XayZideo.\n";
	cout << "Here is the start of your journey.\n";
	//Different age different pronouciation
	if (age < 21) {
		cout << "Here is where you will make a name for yourself, youngster.\n";
	}
	else {
		cout << "Here is where us warriors will make a name for ourselves, mate.\n";
	}
	cout << "My name is Draguon. It's been a pleasure of meeting you.\n";
	cout << "Now off you go!\n";
	cout << "MAKE THE WORLD KNOWN OF THE NAME!\n";
	cout << name << "!!!" << endl;
}

//Story in between the actions
void inBetweenStory() {
	cout << "\nYou spawn at a random location.";
	cout << "\nYou take a look around explore around.";
	cout << "\nYou were spawned in the middle of a forest.";
	cout << "\nYou decided to head towards a direction";
	cout << "\nin hoping of finding a village or city.";
	cout << "\nAfter sometime, you were able to walk out of the forest";
	cout << "\nonto a dirt road that was paved for travelers and adventurers.";
	cout << "\nAll of a sudden! You hear a scream...";
	cout << "\nAHHHHHHHHHHH! you hear";
	cout << "And a cry for help...";
	cout << "\nYou look around in search for that voice.";
}

//Gets User decision for saving the princess
char princess(string prompt) {
	cout << "\nYou see a girl getting chased by bandits on horses." << endl;
	cout << prompt << endl;
	char save;
	cin >> save;
	return save;
}

//Second part of the story
void story2(char choice) {
	if (toupper(choice) == 'Y') {
		cout << "\nYou have decided to save the girl.";
		cout << "\nYou ran to the girl's rescue,";
		cout << "\ntook her by the hands,";
		cout << "\nand ran into the forest.";
		cout << "\nYou ran and gets cornered on the side of a cliff.\n";
	}
	else {
		cout << "\nYou decided not to save the girl.";
		cout << "\nThe bandits caught up to her";
		cout << "\nkilled her.";
		cout << "\nYou then catches the bandits' eye.";
		cout << "\nThe bandits needs to have no witnesses";
		cout << "\nSo they decide to kill you as well.";
		cout << "\nThat marks the end of your story";
	}
}

//Gets User decision to jump or fight
char jumpOrFight(string prompt) {
	cout << "\nYou are surrounded.";
	cout << "\nAs you stand in front of the girl,";
	cout << "\nyour mind is racing.";
	cout << "\nYou come to one of two choices.";
	cout << "\nYou either take a leap of faith and jump";
	cout << "\nor you fight to your dying breath.\n";
	cout << prompt;
	char decision;
	cin >> decision;
	return decision;
}

//Third part of the story
void story3(char choice) {
	if (tolower(choice) == 'j') {
		cout << "\nYou decided to jump.";
		cout << "\nYou turn around and grab the girl's hand.";
		cout << "\nShe looks at you with hopeless eyes.";
		cout << "\nYou smile and tell the girl,";
		cout << "\nTrust me.";
		cout << "\nAnd then the girl and you jumps off the cliff";
		cout << "\n................";
		cout << "\nYou wake up in on a bed in a unknown village.";
		cout << "\nYou find out that the girl was taken back by her family.";
		cout << "\nShe also left a message for you.";
		cout << "\nIt said thank you for saving her life.";
		cout << "\nIf you ever travel to Excidal,";
		cout << "\nask for Enonia." << endl;
	}
	else if (tolower(choice) == 'f') {
		cout << "\nYou decide to fight.";
		cout << "\nOne of the bandits got cocky";
		cout << "\nand decided to fight you 1 on 1";
		cout << "\nYou manage to kill the bandit and take his sword.";
		cout << "\nThe other bandits witness this and decided to all charge at you.";
		cout << "\nAfter fighting valiantly, you manage to kill every one of the bandits.";
		cout << "\nYou saved the girl.";
		cout << "\nYou fainted due to the countless wounds you received.";
		cout << "\n................";
		cout << "\nYou wake up in on a bed in a unknown village.";
		cout << "\nYou find out that the girl was taken back by her family.";
		cout << "\nShe also left a message for you.";
		cout << "\nIt said thank you for saving her life.";
		cout << "\nIf you ever travel to Excidal,";
		cout << "\nask for Enonia." << endl;
	}
}

//Ending
void story4(string name) {
	cout << "\nAfter resting up,";
	cout << "\nYou take off once again";
	cout << "\non your journey to";
	cout << "\nmake a name for yourself.";
	cout << "\nWith the Sun up high above your head";
	cout << "\nand the village behind you,";
	cout << "\nyou take off on one of the horses";
	cout << "\nthat the villages gave you.";
	cout << "\nThis marks the beginning";
	cout << "\nof your tale, " << name;
	cout << "\nThere is much more to come.";
	cout << "\nMonsters, demons, even other people";
	cout << "\nare waiting for your arrival";
	cout << "\nTo be continue............\n";
}