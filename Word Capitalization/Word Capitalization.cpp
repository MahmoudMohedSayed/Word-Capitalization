/*Capitalization is writing a word with its first letter as a capital letter.
Your task is to capitalize the given word.*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
	string word;
	char firstLetter;

	cout << "enter the word\n";
	getline(cin, word);

	firstLetter = word[0];
	word[0] = toupper(firstLetter);

	cout << "the word is : " << word;
}