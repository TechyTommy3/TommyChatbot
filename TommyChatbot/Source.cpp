#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <shellapi.h>
using namespace std;
int Chatbot() {
	string message;
	string YouTubeURL;
	cout << "You:";
	getline(cin, message);
	if (message == "Who are you?") {
		cout << "This is TommyChatbot. This is not copyrighted.";
	}
	else if (message == "I have a virus.") {
		cout << "I would reccomend doing a full scan of your antivirus of choice.";
	}
	else if (message == "I have a rootkit on my computer.") {
		cout << "I would backup your files and format your C: drive. Do you want me to format your drive for you? (NOTE: THIS WILL NOT BACKUP YOUR COMPUTER)\nYou: ";
		cin >> message;
		string dss;
		dss = "Test";
		if (message == "Yes") {
			system("format C:");
		}
		else if (dss == "Test") {
			Chatbot();
		}
		else if (message == "What is the best free antivirus?") {
			cout << "I would reccomend Windows Defender.";
		}
	}
	cout << "\n";
	return 0;
}
int main() {
	while (0 == 0) {
		Chatbot();
	}
}