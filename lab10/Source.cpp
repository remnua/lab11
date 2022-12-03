#include <iostream>
using namespace std;

struct Date {
	int hours;
	int minutes;
};

//int main() {
//	Date date;
//	int timeLeft;
//	cout << "Enter the hours: ";
//	cin >> date.hours;
//	while (date.hours >= 24 || date.hours < 0) {
//		cout << "Eror, put the number from 0 to 23" << endl;
//		cin >> date.hours;
//	}
//	cout << "Enter the minutes: ";
//	cin >> date.minutes;
//	while (date.minutes >= 60 || date.minutes < 0) {
//		cout << "Eror, put the number from 0 to 59" << endl;
//		cin >> date.minutes;
//	}
//	cout << "Enter the time left: ";
//	cin >> timeLeft;
//	date.hours += timeLeft / 60;
//	date.minutes += timeLeft % 60;
//	while (date.minutes >= 60) {
//		date.hours++;
//		date.minutes -= 60;
//	}
//	while (date.hours >= 24) {
//		date.hours -= 24;
//	}
//	cout << "Time after changing: ";
//	if (date.minutes < 10) {
//		cout << date.hours << ":0" << date.minutes;
//	}
//	else
//	{
//		cout << date.hours << ":" << date.minutes;
//	}
//}

int main() {
	Date start, end, result;
	int timeLeft;
	cout << "Enter the start hours: ";
	cin >> start.hours;
	while (start.hours >= 24 || start.hours < 0) {
		cout << "Eror, put the number from 0 to 23" << endl;
		cin >> start.hours;
	}
	cout << "Enter the start minutes: ";
	cin >> start.minutes;
	while (start.minutes >= 60 || start.minutes < 0) {
		cout << "Eror, put the number from 0 to 59" << endl;
		cin >> start.minutes;
	}
	cout << "Enter the end hours: ";
	cin >> end.hours;
	while (end.hours >= 24 || end.hours < 0) {
		cout << "Eror, put the number from 0 to 23" << endl;
		cin >> end.hours;
	}
	cout << "Enter the end minutes: ";
	cin >> end.minutes;
	while (end.minutes >= 60 || end.minutes < 0) {
		cout << "Eror, put the number from 0 to 59" << endl;
		cin >> end.minutes;
	}
	result.hours = end.hours - start.hours;
	result.minutes = end.minutes - start.minutes;
	while (result.minutes < 0) {
		result.hours--;
		result.minutes += 60;
	}
	while (result.hours < 0) {
		result.hours += 24;
	}
	cout << "Time of start event: ";
	if (start.minutes < 10) {
		cout << start.hours << ":0" << start.minutes << endl;
	}
	else
	{
		cout << start.hours << ":" << start.minutes << endl;
	}
	cout << "Time of end event: ";
	if (end.minutes < 10) {
		cout << end.hours << ":0" << end.minutes << endl;
	}
	else
	{
		cout << end.hours << ":" << end.minutes << endl;
	}
	cout << "Time of event continues: ";
	if (result.minutes < 10) {
		cout << result.hours << ":0" << result.minutes << endl;
	}
	else
	{
		cout << result.hours << ":" << result.minutes << endl;
	}
}