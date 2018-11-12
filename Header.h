#ifndef Header_H
#define Header_H

#include <iostream>
#include <string>

#endif 

using namespace std;

//Parts for Part 1 of the story
string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void story1(string name, int age);
//In Between the story, the build up
void inBetweenStory();
//Parts for Part 2 of the story
char princess(string prompt);
void story2(char choice);
//Parts for Part 3 of the story
char jumpOrFight(string prompt);
void story3(char choice);
//Ending
void story4(string name);