#include<iostream>
#include<string>
#include<array>
#include <cwchar>
#pragma warning(disable : 4996).
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
struct Time {
	int hours;
	int minutes;
};
struct Theater {
	string hall_id;
	int capacity[7];
	int reseved_seats[7];
};
struct Screen_info {
	Theater hall;
	Time time;
};
struct movie {
	string title;
	string Director;
	string Actors[4];
	float rating;
	Screen_info screen_info;
}movies[5];
int Globtime = 600;
/*
	10:00AM		600
	11:00AM		660
	12:00PM		720
	01:00PM		780
	02:00PM		840
	03:00PM		900
	04:00PM		960
	05:00PM		1020
	06:00PM		1080
	07:00PM		1140
	08:00PM		1200
	09:00PM		1260
	10:00PM		1320
	11:00PM		1380
*/
string name;
void fullscreen();
void cinemabookingsystem(int i);
void cinemabookingsystem1(int i);
void cinemabookingsystem2();
void cinemabookingsystem3(int i);
void mainmainmenu();
void font_size();
void font_size_reset();
void font_size_reset1();
void intializer();
void main_menu();
void display(char n);
void info(char user_choose);
void the_movie_info(int i);
void another_description(char user_choose);
void halls1_2();
void halls3_4_5();
void input();
void comparison(int movienum, int screennum, int numticket);
void comparison_movie_1_2(int numtickets, int movienum, int screennum, int time, string movietime);
void comparison_movie_3_4_5(int numtickets, int movienum, int screennum, int time, string movietime);
void suggestion_of_screens_1_2(int numtickets, int movienum, string movietime, int screennum);
void suggestion_of_screens_3_4_5(int numtickets, int movienum, string movietime, int screennum);
void choices_of_remtickets(int movienum, int screennum, int numtickets);
void reservationiscompleted(int movienum, int screennnum, int numtickets, string movietime);
void about_us();
void end();
void error();
void fullscreen()
{
	system("mode con COLS=700");
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0);
}
int main() {
	fullscreen();
	font_size();
	intializer();
	mainmainmenu();
	main_menu();
	return 0;
}
void cinemabookingsystem(int i)
{
	for (int j = 0; j <= i - 4; j++)
		cout << "\t";
	cout << "\033[38;5;" << 1 + rand() % 255 << "m CINEMA BOOKING SYSTEM\033[0m";
	cout.flush();
	Sleep(3 * 100);
	system("CLS");
}
void cinemabookingsystem1(int i)
{
	for (int j = 0; j <= i - 7; j++)
		cout << "\n";
	for (int j = 0; j < 3; j++)
		cout << "\t";
	cout << "\033[38;5;" << 1 + rand() % 255 << "m CINEMA BOOKING SYSTEM\033[0m";
	cout.flush();
	Sleep(3 * 100);
	system("CLS");
}
void cinemabookingsystem2()
{
	for (int j = 0; j < 7; j++)
		cout << "\n";
	for (int j = 0; j < 3; j++)
		cout << "\t";
	cout << "\033[38;5;" << 1 + rand() % 255 << "m CINEMA BOOKING SYSTEM\033[0m";
	cout.flush();
	Sleep(2 * 100);
	system("CLS");
}
void cinemabookingsystem3(int i)
{
	if (i <= 26)
		switch (i) {
		case 21:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		case 22:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout << "\033[1;33mStart\033[0m";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		case 23:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout << "\033[1;33mto start\033[0m";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		case 24:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout << "\033[1;31mname\033[0m \033[1;33mto start\033[0m";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		case 25:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout << "\033[1;31myour name\033[0m \033[1;33mto start\033[0m";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		case 26:
			cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
			cout << "\033[1;31mType your name\033[0m \033[1;33mto start\033[0m";
			cout.flush();
			Sleep(3 * 100);
			system("CLS");
			break;
		}
	else {
		cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM\n";
		for (int j = 0; j < i - 26; j++)
			cout << "\t";
		cout << "\033[1;31mType your name\033[0m \033[1;33mto start\033[0m";
		cout.flush();
		Sleep(3 * 100);
		system("CLS");
	}
}
void mainmainmenu()
{
	for (int i = 0; i < 28; i++) {
		if (i <= 3) {
			switch (i) {
			case 0:
				Sleep(3 * 100);
				break;
			case 1:
				cout << "\033[38;5;1mSYSTEM\033[0m";
				cout.flush();
				Sleep(3 * 100);
				system("CLS");
				break;
			case 2:
				cout << "\033[38;5;2mBOOKING SYSTEM\033[0m";
				cout.flush();
				Sleep(3 * 100);
				system("CLS");
				break;
			case 3:
				cout << "\033[38;5;3mCINEMA BOOKING SYSTEM\033[0m";
				cout.flush();
				Sleep(3 * 100);
				system("CLS");
				break;
			}
		}
		else if (i < 6)
			cinemabookingsystem(i);
		else if (i < 14)
			cinemabookingsystem1(i);
		else if (i < 21)
			cinemabookingsystem2();
		else
			cinemabookingsystem3(i);
	}
	cout << "\n\n\n\n\n\n\n\t\t\t CINEMA BOOKING SYSTEM";
	cout << "\033[1;31m\n\t\t\tType your name\033[0m \033[1;33mto start\033[0m";
	cout << "\n\t\t\t";
	cin >> name;
	system("CLS");
}
void font_size()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 40;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void intializer()
{
	movies[0].title = "Spider-man:No Way Home";
	movies[0].Director = "Jon Watts";
	movies[0].screen_info.hall.hall_id = "Hall 1";
	movies[0].screen_info.time.hours = 2;
	movies[0].screen_info.time.minutes = 28;
	movies[0].Actors[0] = "Tom Holland";
	movies[0].Actors[1] = "Tobey Maguire";
	movies[0].Actors[2] = "Andrew Garfield";
	movies[0].rating = 8.5;
	movies[1].title = "The Batman";
	movies[1].Director = "Matt Reeves";
	movies[1].screen_info.hall.hall_id = "Hall 2";
	movies[1].screen_info.time.hours = 2;
	movies[1].screen_info.time.minutes = 56;
	movies[1].Actors[0] = "Robert Pattinson";
	movies[1].Actors[1] = "Zo� Isabella Kravitz";
	movies[1].Actors[2] = "Jeffrey Wright";
	movies[1].rating = 8.3;
	movies[2].title = "Red Notices";
	movies[2].Director = "Rawson Marshall Thurber";
	movies[2].screen_info.hall.hall_id = "Hall 3";
	movies[2].screen_info.time.hours = 1;
	movies[2].screen_info.time.minutes = 58;
	movies[2].Actors[0] = "Dwayne Johnson";
	movies[2].Actors[1] = "Ryan Reynolds";
	movies[2].Actors[2] = "Gal Gadot";
	movies[2].rating = 6.4;
	movies[3].title = "Encanto";
	movies[3].Director = "Jared Bush";
	movies[3].screen_info.hall.hall_id = "Hall 4";
	movies[3].screen_info.time.hours = 1;
	movies[3].screen_info.time.minutes = 42;
	movies[3].Actors[0] = "Stephanie Beatriz";
	movies[3].Actors[1] = "Mar�a Cecilia Botero";
	movies[3].Actors[2] = "John Leguizamo";
	movies[3].rating = 7.3;
	movies[4].title = "Scream";
	movies[4].Director = "Matt Bettinelli-Olpin";
	movies[4].screen_info.hall.hall_id = "Hall 5";
	movies[4].screen_info.time.hours = 1;
	movies[4].screen_info.time.minutes = 54;
	movies[4].Actors[0] = "Neve Campbell";
	movies[4].Actors[1] = "Courteney Cox";
	movies[4].Actors[2] = "David Arquette";
	movies[4].rating = 6.5;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++) {
			movies[i].screen_info.hall.capacity[j] = 100;
			if (j == 0)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			else if (j == 1)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			else if (j == 2)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			else if (j == 3)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
		}
	}
	for (int i = 2; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			movies[i].screen_info.hall.capacity[j] = 100;
			if (j == 0)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			if (j == 1)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			if (j == 2)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			if (j == 3)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			if (j == 4)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
			if (j == 5)
				movies[i].screen_info.hall.reseved_seats[j] = 1 + rand() % 100;
		}
	}
}
void main_menu()
{
	font_size_reset();
	char n;
	cout << "\033[1;31mPress 1\033[0m \033[1;33mto show all movies\033[0m\n";
	cout << "\033[1;31mPress 2\033[0m \033[1;33mto show timing of each hall\033[0m\n";
	cout << "\033[1;31mPress 3\033[0m \033[1;33mto book a ticket\033[0m\n";
	cout << "\033[1;31mPress 4\033[0m \033[1;33mto show credit\033[0m\n";
	cout << "\033[1;31mPress 5\033[0m \033[1;33mto exit the program\033[0m\n";
	cin >> n;
	system("CLS");
	display(n);
}
void font_size_reset()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 30;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void display(char n)
{
	string user_choose;
	char user_choose1;
	switch (n) {
	case '1':
		for (int i = 0; i < 5; i++) {
			cout << "\033[4;1;5;94m" << i + 1 << "." << movies[i].title << "\033[0m" << "\n\033[1;31mPress " << i + 1 << "\033[0m" << " \033[1;33mfor description\033[0m\n";
		}
		cout << "\n\033[1;31mPress 0\033[0m \033[1;33mfor main menu\033[0m \n\033[1;31mPress 9\033[0m \033[1;33mto exit the program\033[0m \n\033[1;31mPress 8\033[0m\ \033[1;33mfor reservation\033[0m \n";
		cin >> user_choose1;
		system("CLS");
		info(user_choose1);
		break;
	case '2':
		for (int i = 0; i < 2; i++) {
			cout << "\033[4;38;2;255;165;0mHall " << i + 1 << " [" << movies[i].title << "] (3 hours)\033[0m" << endl;
			halls1_2();
		}
		for (int i = 2; i < 5; i++) {
			cout << "\033[4;38;2;255;165;0mHall " << i + 1 << " [" << movies[i].title << "] (2 hours)\033[0m" << endl;
			halls3_4_5();
		}
		cout << "\n\033[1;31mPress 0\033[0m \033[1;33mfor main menu\033[0m  \n\033[1;31mPress 9\033[0m \033[1;33mto exit the program\033[0m \n\033[1;31mPress 1\033[0m \033[1;33mfor reservation\033[0m \n";
		cin >> user_choose1;
		system("CLS");
		if (user_choose1 == '1') {
			input();
		}
		else if (user_choose1 == '0') {
			main_menu();
		}
		else if (user_choose1 == '9') {
			cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
			exit(0);
		}
		else {
			cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
			display('2');
		}
		break;
	case '3':
		input();
		break;
	case '4':
		about_us();
		end();
		break;
	case '5':
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
		break;
	default:
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		end();
	}
}
void info(char user_choose)
{
	switch (user_choose) {
	case '0':
		main_menu();
		break;
	case '1':
		the_movie_info(0);
		another_description(user_choose);
		break;
	case '2':
		the_movie_info(1);
		another_description(user_choose);
		break;
	case '3':
		the_movie_info(2);
		another_description(user_choose);
		break;
	case '4':
		the_movie_info(3);
		another_description(user_choose);
		break;
	case '5':
		the_movie_info(4);
		another_description(user_choose);
		break;
	case '8':
		input();
		break;
	case '9':
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
		break;
	default:
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		display('1');
	}
}
void the_movie_info(int i)
{
	cout << "\033[1;4;33mThe director :\033[0m " << movies[i].Director << endl;
	for (int j = 0; j < 3; j++)
		cout << "\033[1;4;36mThe major actors are :\033[0m " << movies[i].Actors[j] << endl;
	cout << "\033[1;4;36mThe duration of the film :\033[0m " << movies[i].screen_info.time.hours << ":" << movies[i].screen_info.time.minutes << " hours\n";
	cout << "\033[1;4;36mIMDB rating of the movie is :\033[0m " << movies[i].rating << "/10\n";
}
void another_description(char user_choose)
{
	char x;
	cout << "\033[1;31mDo you want to view another description(y/n)?\033[0m\n\n";
	cout << "\033[1;31mpress 0 \033[0m\033[1;33mFor main menu\033[0m\n\033[1;31mpress 9\033[0m \033[1;33mFor exit the program\033[0m \n\033[1;31mPress 8\033[0m \033[1;33mFor reservation\033[0m\n";
	cin >> x;
	system("CLS");
	if (x == 'Y' || x == 'y') {
		system("CLS");
		display('1');
	}
	if (x == 'N' || x == 'n') {
		system("CLS");
		end();
	}
	else if (x == '0')
		main_menu();
	else if (x == '9') {
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
	}
	else if (x == '8')
		input();
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		info(user_choose);
	}
}
void halls1_2()
{
	cout << "\033[38;5;6m1.From \t10:00AM \t To \t 1:00PM\n";
	cout << "2.From \t1:30PM \t\t To \t 4:30PM\n";
	cout << "3.From \t5:00PM \t\t To \t 8:00PM\n";
	cout << "4.From \t8:30PM \t\t To \t 11:30PM\n\033[0m";
}
void halls3_4_5()
{
	cout << "\033[38;5;6m1.From \t10:00AM \t To \t 12:00PM\n";
	cout << "2.From \t12:30PM \t To \t 2:30PM\n";
	cout << "3.From \t3:00PM \t\t To \t 5:00PM\n";
	cout << "4.From \t5:30PM \t\t To \t 7:30PM\n";
	cout << "5.From \t8:00PM \t\t To \t 10:00PM\n";
	cout << "6.From \t10:30PM \t To \t 12:30AM\n\033[0m";
}
void input() {
	char movienumchar, screennumchar;
	int numticket;
	string num;
	bool okay = true;
	for (int i = 0; i < 5; i++)
		cout << "\033[4;1;5;94m" << i + 1 << "." << movies[i].title << "\033[0m" << endl;
	cout << "\033[5;35mEnter movie number:\033[0m" << endl;
	cout << "\n\033[1;31mPress 0\033[0m \033[1;33mFor main menu\033[0m \n\033[1;31mPress 9\033[0m \033[1;33mto exit the program\033[0m \n";
	cin >> movienumchar;
	int movienum = movienumchar - '0';
	system("CLS");
	if (movienum == 1 || movienum == 2) {
		halls1_2();
		okay = false;
	}
	else if (movienum > 2 && movienum < 6) {
		halls3_4_5();
		okay = false;
	}
	else if (movienum == 0)
		main_menu();
	else if (movienum == 9) {
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
	}
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		error();
	}
	if (okay == false) {
		cout << "\033[38;5;168mEnter party number:\033[0m" << endl;
		cout << "\n\033[1;31mPress 0\033[0m \033[1;33mfor main menu\033[0m \n\033[1;31mPress 9\033[0m \033[1;33mfor exit the program\033[0m \n";
		cin >> screennumchar;
		int screennum = screennumchar - '0';
		system("CLS");
		if (movienum == 1 || movienum == 2) {
			if (screennum == 0) {
				main_menu();
				okay = true;
			}
			else if (screennum == 9) {
				cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
				exit(0);
				okay = true;
			}
			if (screennum > 4 || screennum < 1 && okay == false) {
				cout << "\033[1;38;5;1mOut of range\n\033[0m";
				error();
				okay = true;
			}
		}
		else if (movienum == 3 || movienum == 4 || movienum == 5) {
			if (screennum == 0) {
				main_menu();
				okay = true;
			}
			else if (screennum == 9) {
				cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
				exit(0);
				okay = true;
			}
			if (screennum > 6 || screennum < 1) {
				cout << "\033[1;38;5;1mOut of range\n\033[0m";
				error();
				okay = true;
			}
		}
		if (okay == false) {
			cout << "\033[38;5;26mNumber of tickets available : " << movies[movienum - 1].screen_info.hall.capacity[screennum - 1] - movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] << "\033[0m" << endl;
			cout << "\033[38;5;202mThe price of the ticket is : 100 L.E.\033[0m \n";
			cout << "\033[38;5;26mEnter number of tickets:\033[0m" << endl;
			cout << "\n\033[1;31mType (main)\033[0m \033[1;33mfor main menu\033[0m \n\033[1;31mType (exit)\033[0m \033[1;33mto exit the program\033[0m \n";
			cout << "\033[1;33m(Check the spelling and all thre lettlers are lowercase)\033[0m\n";
			cin >> num;
			system("CLS");
			if (num == "exit") {
				cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
				exit(0);
			}
			else if (num == "main")
				main_menu();
			try {
				numticket = stoi(num);
				if (numticket > 100) {
					cout << "\033[1;38;5;1mOut of range\n\033[0m";
					error();
				}
				else if (numticket < 1)
					cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
				comparison(movienum, screennum, numticket);
			}
			catch (exception e) {
				cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
				input();
			}
		}
	}
}
void comparison(int movienum, int screennum, int numticket) {
	if (movienum == 1 || movienum == 2) {
		if (screennum == 1)
			comparison_movie_1_2(numticket, movienum, screennum, 615, "10:00AM");
		else if (screennum == 2)
			comparison_movie_1_2(numticket, movienum, screennum, 825, "01:30PM");
		else if (screennum == 3)
			comparison_movie_1_2(numticket, movienum, screennum, 1035, "05:00PM");
		else if (screennum == 4)
			comparison_movie_1_2(numticket, movienum, screennum, 1245, "8;30PM");
	}
	else
		if (screennum == 1)
			comparison_movie_3_4_5(numticket, movienum, screennum, 615, "10:00AM");
		else if (screennum == 2)
			comparison_movie_3_4_5(numticket, movienum, screennum, 765, "12:30PM");
		else if (screennum == 3)
			comparison_movie_3_4_5(numticket, movienum, screennum, 915, "03:00PM");
		else if (screennum == 4)
			comparison_movie_3_4_5(numticket, movienum, screennum, 1065, "05:30PM");
		else if (screennum == 5)
			comparison_movie_3_4_5(numticket, movienum, screennum, 1215, "08:00PM");
		else if (screennum == 6)
			comparison_movie_3_4_5(numticket, movienum, screennum, 1365, "10:30PM");
}
void comparison_movie_1_2(int numtickets, int movienum, int screennum, int time, string movietime)
{
	char choice;
	if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] <= movies[movienum - 1].screen_info.hall.capacity[screennum - 1]) {
		cout << "\033[38;5;209mTotal price of the tickets : " << numtickets * 100 << "L.E.\n\033[0m";
		cout << "\033[1;31mDo you want to contiue? (y/n)\n\033[0m";
		cin >> choice;
		system("CLS");
		if (choice == 'y' || choice == 'Y') {
			reservationiscompleted(movienum, screennum, numtickets, movietime);
			cout << "\033[38;5;34mregistration is completed\n\033[0m";
			movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] += numtickets;
			cout << "\033[38;5;142mYour movie will be in " << movies[movienum - 1].screen_info.hall.hall_id << "\n\033[0m";
			cout << "\033[38;5;214mTotal price : " << numtickets * 100 << " L.E.\n\n\033[0m";
			end();
		}
		else if (choice == 'n' || choice == 'N')
			end();
		else {
			cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
			comparison_movie_1_2(numtickets, movienum, screennum, time, movietime);
		}
	}
	else if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] > movies[movienum - 1].screen_info.hall.capacity[screennum - 1]) {
		if (movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] == 100) {
			cout << "\033[1;38;5;1mThere are not any seats in that time\n\033[0m";
			end();
		}
		else {
			choices_of_remtickets(movienum, screennum, numtickets);
		}
	}
	else if (Globtime > time) {
		suggestion_of_screens_1_2(numtickets, movienum, movietime, screennum);
	}
}
void comparison_movie_3_4_5(int numtickets, int movienum, int screennum, int time, string movietime)
{
	char choice;
	if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] <= movies[movienum - 1].screen_info.hall.capacity[screennum - 1]) {
		cout << "\033[38;5;209mTotal price of the tickets : " << numtickets * 100 << "L.E.\n\033[0m";
		cout << "\033[1;31mDo you want to contiue? (y/n)\n\033[0m";
		cin >> choice;
		system("CLS");
		if (choice == 'y' || choice == 'Y') {
			cout << "\033[38;5;34mregistration is completed\n\033[0m";
			movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] += numtickets;
			cout << "\033[38;5;142mYour movie will be in " << movies[movienum - 1].screen_info.hall.hall_id << "\n\033[0m";
			cout << "\033[38;5;214mTotal price : " << numtickets * 100 << " L.E.\n\n\033[0m";
			end();
		}
		else if (choice == 'n' || choice == 'N')
			end();
		else {
			cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
			comparison_movie_3_4_5(numtickets, movienum, screennum, time, movietime);
		}
	}
	else if (Globtime <= time && numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] > movies[movienum - 1].screen_info.hall.capacity[screennum - 1]) {
		if (movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] == 100) {
			cout << "\033[1;38;5;1mThere are not any seats in that time\n\033[0m";
			end();
		}
		else {
			choices_of_remtickets(movienum, screennum, numtickets);
		}
	}
	else if (Globtime > time) {
		suggestion_of_screens_3_4_5(numtickets, movienum, movietime, screennum);
	}
}
void suggestion_of_screens_1_2(int numtickets, int movienum, string movietime, int screennum) {
	char choice;
	int Movietime[4] = { 600, 810, 1020,1230 };
	cout << "\033[38;5;27mYou are late for " << movietime << "\033[0m\n";
	cout << "\033[38;5;63mSuggest another screen? (y/n)\n";
	cin >> choice;
	system("CLS");
	if (choice == 'n' || choice == 'N') {
		end();
	}
	else if (choice == 'y' || choice == 'Y') {
		int screennum_clone = 0;
		for (int j = 1; j < 4; j++) {
			if (j > screennum - 1 && Globtime <= Movietime[j]) {
				if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[j] <= movies[movienum - 1].screen_info.hall.capacity[j]) {
					cout << "\033[38;5;51mthere are available seats at screen number:" << j + 1 << "\033[0m\n";
					cout << "\033[38;5;81mDo you want to register? (y/n)\n\033[0m";
					cin >> choice;
					system("CLS");
					if (choice == 'n' || choice == 'N')
					{
						end();
					}
					else if (choice == 'y' || choice == 'Y') {
						cout << "\033[38;5;34mregistration is completed\n\033[0m";
						movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] += numtickets;
						cout << "\033[38;5;142mYour movie will be in " << movies[movienum - 1].screen_info.hall.hall_id << "\n\033[0m";
						cout << "\033[38;5;214mTotal price : " << numtickets * 100 << " L.E.\n\n\033[0m";
						end();
					}
					screennum_clone = j;
				}
			}
		}
		if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum_clone] >= movies[movienum - 1].screen_info.hall.capacity[screennum_clone]) {
			cout << "\033[1;38;5;1mNo seats available today\n\033[0m";
			end();
		}
	}
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		suggestion_of_screens_1_2(numtickets, movienum, movietime, screennum);
	}
}
void suggestion_of_screens_3_4_5(int numtickets, int movienum, string movietime, int screennum) {
	char choice;
	int Movietime[6] = { 600, 750, 900, 1050, 1200,  1350 };
	cout << "\033[38;5;27mYou are late for " << movietime << "\033[0m\n";
	cout << "\033[38;5;63mSuggest another screen? (y/n)\n\033[0m";
	cin >> choice;
	system("CLS");
	if (choice == 'n' || choice == 'N') {
		end();
	}
	else if (choice == 'y' || choice == 'Y') {
		int screennum_clone = 0;
		for (int j = 1; j < 6; j++) {
			if (j > screennum - 1 && Globtime <= Movietime[j]) {
				if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[j] <= movies[movienum - 1].screen_info.hall.capacity[j]) {
					cout << "\033[38;5;51mthere are available seats at screen number:" << j + 1 << "\033[0m\n";
					cout << "\033[38;5;81mDo you want to register? (y/n)\n\033[0m";
					cin >> choice;
					system("CLS");
					if (choice == 'n' || choice == 'N')
					{
						end();
					}
					else if (choice == 'y' || choice == 'Y') {
						cout << "\033[38;5;34mregistration is completed\n\033[0m";
						movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] += numtickets;
						cout << "\033[38;5;142mYour movie will be in " << movies[movienum - 1].screen_info.hall.hall_id << "\n\033[0m";
						cout << "\033[38;5;214mTotal price : " << numtickets * 100 << " L.E.\n\n\033[0m";
						end();
					}
					screennum_clone = j;
				}
			}
		}
		if (numtickets + movies[movienum - 1].screen_info.hall.reseved_seats[screennum_clone] >= movies[movienum - 1].screen_info.hall.capacity[screennum_clone]) {
			cout << "\033[1;38;5;1mNo seats available today\n\0333[0m";
			end();
		}
	}
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		suggestion_of_screens_3_4_5(numtickets, movienum, movietime, screennum);
	}
}
void choices_of_remtickets(int movienum, int screennum, int numtickets) {
	int remtickets;
	char choice;
	remtickets = movies[movienum - 1].screen_info.hall.capacity[screennum - 1] - movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1];
	cout << "\033[38;5;27mthere are " << remtickets << " available in this time\n\033[0m";
	cout << "\033[38;5;63mDo you want to register? (y/n)\n\033[0m";
	cin >> choice;
	system("CLS");
	if (choice == 'n' || choice == 'N')
		end();
	else if (choice == 'y' || choice == 'Y') {
		cout << "\033[38;5;209mTotal price of the tickets : " << remtickets * 100 << "L.E.\n\033[0m";
		cout << "\033[1;31mDo you want to contiue? (y/n)\n\033[0m";
		cin >> choice;
		system("CLS");
		if (choice == 'y' || choice == 'Y') {
			numtickets = remtickets;
			cout << "\033[38;5;34mregistration is completed\n\033[0m";
			movies[movienum - 1].screen_info.hall.reseved_seats[screennum - 1] += remtickets;
			cout << "\033[38;5;142mYour movie will be in " << movies[movienum - 1].screen_info.hall.hall_id << "\n\033[0m";
			cout << "\033[38;5;214mTotal price : " << remtickets * 100 << " L.E.\n\n\033[0m";
			end();
		}
		else if (choice == 'n' || choice == 'N')
			end();
		else {
			cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
			choices_of_remtickets(movienum, screennum, numtickets);
		}
	}
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		choices_of_remtickets(movienum, screennum, numtickets);
	}
}
void font_size_reset1()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;
	cfi.dwFontSize.Y = 20;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}
void reservationiscompleted(int movienum, int screennnum, int numtickets, string movietime)
{
	font_size_reset1();
	fullscreen();
	cout << "\n\n\n\n\t\t _______________________________________________________________________ \n";
	cout << "\t\t|                                                                       |\n";
	cout << "\t\t|   Dear " << name << ",                                                      |\n";
	cout << "\t\t|                      Congratulation!! Your tickets has been booked.   |\n";
	cout << "\t\t|                                                                       |\n";
	cout << "\t\t|                  THE DETAILS:                                         |\n";
	cout << "\t\t|                            MOVIE NAME : " << movies[movienum - 1].title << "                             |\n";
	cout << "\t\t|                            MOVIE HALL : " << movies[movienum - 1].screen_info.hall.hall_id << "                        |\n";
	cout << "\t\t|                            \033[38;5;214mTOTAL PRICE : " << numtickets * 100 << " L.E.\033[0m " << "                    |\n";;
	cout << "\t\t|                            SHOW STARTS : " << movietime << "                      |\n";
	cout << "\t\t|                            NUMBER OF TICKETS BOOKED : " << numtickets << "               |\n";
	cout << "\t\t|_______________________________________________________________________|\n";
	font_size_reset();
}
void about_us()
{
	cout << "\033[4;38;2;255;165;0mLeader :\033[0m \033[38;5;6mPeter Maged (G1 - Sec 5 - GUI)\n\n\033[0m";
	cout << "\033[4;38;2;255;165;0mMembers :\033[0m \033[38;5;6mMina Wanny (G2 - Sec 22 - GUI) \n\n\t  Fady Emad (G2 - Sec 14 - GUI) \n\n\t  Mina Selim (G2 - Sec 22 - Console) \n\n\t  Youssef Essam (G2 - Sec 24 - Console) \n\n\t  Youssef Youssry (G2 - Sec 24 - Console) \n\n\t  Samuel ElKess (G1 - Sec 10 - Console)\n\n\033[0m";
}
void end()
{
	cout << "\033[1;31mPress 0\033[0m \033[1;33mfor main menu\033[0m \n\033[1;31mPress 9\033[0m \033[1;33mto exit the program\033[0m \n";
	char choose; cin >> choose;
	system("CLS");
	if (choose == '0') {
		main_menu();
	}
	else if (choose == '9') {
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
	}
	else {
		cout << "\033[1;38;5;1mOut of range\n\033[0m";
		end();
	}
}
void error()
{
	cout << "\033[1;31mPress 0\033[0m \033[1;33mfor booking page\033[0m \n\033[1;31mPress 9\033[0m \033[1;33mto exit the program\033[0m\n";
	char choose; cin >> choose;
	system("CLS");
	if (choose == '0') {
		input();
	}
	else if (choose == '9') {
		cout << "\033[1;38;5;1mThanks and visit us again <3\033[0m";
		exit(0);
	}
	else {
		cout << "\033[1;38;5;1mInvalid choice\n\033[0m";
		error();
	}
}