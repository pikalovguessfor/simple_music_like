#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

class program {
public:
	bool start = true;
	bool stop = false;
	bool with_music = false;
	void start_music_func() {
		Beep(900, 400); Beep(1100, 400); Beep(1300, 400); Beep(1500, 600);
		Sleep(3000);
	}
};

int main() {
	program prog;

	srand(time(0));
	
	char f_line[] = { ' ', ' ', ' ' };
	char s_line[] = { ' ', ' ', ' ' };
	char t_line[] = { ' ', ' ', ' ' };
	char help_line[] = { '@', '@', '@' };

	bool first_line_ch = false;
	bool second_line_ch = false;
	bool third_line_ch = false;
	bool total_equal = false;

	short choose_op;
	short get_rand;
	
	cout << "if you want see this with music press 1, if without press something else";
	cin >> choose_op;
	if (choose_op == 1) {
		prog.with_music = true;
		prog.start_music_func();
	}
	else {
		prog.with_music = false;
	}

	while (prog.start == true) {

		cout  << endl;

		while (prog.start == true) {

			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					f_line[0] = '@';
				}
				else {
					f_line[0] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					f_line[1] = '@';
				}
				else {
					f_line[1] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					f_line[2] = '@';
				}
				else {
					f_line[2] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					s_line[0] = '@';
				}
				else {
					s_line[0] = ' ';
				}

			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					s_line[1] = '@';
				}
				else {
					s_line[1] = ' ';
				}

			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					s_line[2] = '@';
				}
				else {
					s_line[2] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					t_line[0] = '@';
				}
				else {
					t_line[0] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					t_line[1] = '@';
				}
				else {
					t_line[1] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 300) {
					t_line[2] = '@';
				}
				else {
					t_line[2] = ' ';
				}
			}
			break;
		}

		cout << endl;
		cout << " " << " " << f_line[0] << f_line[1] << f_line[2] << endl;
		cout << " " << " " << s_line[0] << s_line[1] << s_line[2] << endl;
		cout << " " << " " << t_line[0] << t_line[1] << t_line[2] << endl;
		
		if (prog.with_music == true) {
			// алгоритм сравнения всех элементов массива.
			if (f_line[0] == '@' && f_line[1] == '@' && f_line[2] == '@') {
				first_line_ch = true;
				if (first_line_ch == true) {
					Beep(1500, 1000);
				}
			}
			else if (s_line[0] == '@' && s_line[1] == '@' && s_line[2] == '@') {
				second_line_ch = true;
				if (second_line_ch == true) {
					Beep(3000, 1000);
				}
			}
			else if (t_line[0] == '@' && t_line[1] == '@' && t_line[2] == '@') {
				third_line_ch = true;
				if (second_line_ch == true) {
					Beep(3000, 1000);
				}
			}
			//
			// алгоритм сравнения всех массивов.
			if (f_line == help_line && s_line == help_line && t_line == help_line) {
				Beep(2500, 500);
				total_equal = true;
				if (total_equal == true) {
					cout << endl;
					cout << "all symbols is equal";
				}
			}
			//
			// алгоритм вывода звука
			if (f_line[0] == '@') {
				Beep(1500, 300);
			}
			else if (f_line[1] == '@') {
				Beep(1800, 300);
			}
			else if (f_line[2] == '@') {
				Beep(1000, 300);
			}
			if (s_line[0] == '@') {
				Beep(2000, 300);
			}
			else if (s_line[1] == '@') {
				Beep(1200, 300);
			}
			else if (s_line[2] == '@') {
				Beep(1300, 300);
			}
			if (t_line[0] == '@') {
				Beep(1900, 300);
			}
			else if (t_line[1] == '@') {
				Beep(2100, 300);
			}
			else if (t_line[2] == '@') {
				Beep(2200, 300);
			}
			//
		}

		Sleep(200);
		system("cls");
	}
	return 0;
}
