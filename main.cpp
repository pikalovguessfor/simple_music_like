#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

class program {
public:
	bool start = true;
	bool stop = false;
	bool with_music = false;
	short choose_tact;
	void start_music_func() {
		Beep(900, 400); Beep(1100, 400); Beep(1300, 400); Beep(1500, 600);
		Sleep(1500);
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

	short choose_tact;

	cout << "if you want see this with music press 1, 2 for no music, 3 for exit the program";
	cin >> choose_op;
	if (choose_op == 1) {
		prog.with_music = true;
		prog.start_music_func();
	}
	else if (choose_op == 2) {
		prog.with_music = false;
	}
	else if (choose_op == 3) {
		prog.start = false;
	}
	cout << "choose tact of programm. 1 for 200ms, 2 for 500ms, 3 for 1000ms";
	cin >> prog.choose_tact;


	while (prog.start == true) {
		cout << endl;

		while (prog.start == true) {

			// main algoritm for gen a symbol.
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					f_line[0] = '@';
				}
				else {
					f_line[0] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					f_line[1] = '@';
				}
				else {
					f_line[1] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					f_line[2] = '@';
				}
				else {
					f_line[2] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					s_line[0] = '@';
				}
				else {
					s_line[0] = ' ';
				}

			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					s_line[1] = '@';
				}
				else {
					s_line[1] = ' ';
				}

			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					s_line[2] = '@';
				}
				else {
					s_line[2] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					t_line[0] = '@';
				}
				else {
					t_line[0] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					t_line[1] = '@';
				}
				else {
					t_line[1] = ' ';
				}
			}
			for (int i = 0; i < 10; i++) {
				get_rand = (rand() % 500);
				if (get_rand > 250) {
					t_line[2] = '@';
				}
				else {
					t_line[2] = ' ';
				}
			}
			//
			break;
		}

		cout << endl;
		cout << " " << " " << f_line[0] << f_line[1] << f_line[2] << endl;
		cout << " " << " " << s_line[0] << s_line[1] << s_line[2] << endl;
		cout << " " << " " << t_line[0] << t_line[1] << t_line[2] << endl;

		if (prog.with_music == true) {
			// Equal trying algo.
			if (f_line[0] == '@' && f_line[1] == '@' && f_line[2] == '@') {
				first_line_ch = true;
				if (first_line_ch == true) {
					Beep(1500, 1000);
				}
			}
			else if (s_line[0] == '@' && s_line[1] == '@' && s_line[2] == '@') {
				second_line_ch = true;
				if (second_line_ch == true) {
					Beep(1900, 1000);
				}
			}
			else if (t_line[0] == '@' && t_line[1] == '@' && t_line[2] == '@') {
				third_line_ch = true;
				if (second_line_ch == true) {
					Beep(1700, 1000);
				}
			}
			// Sound output algo
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

		if (f_line == help_line && s_line == help_line && t_line == help_line) {
			bool all_eq = true;

			int cont_or_break;

			cout << "all lists is simmilar" << endl;
			cout << "press 1 for continue the program, or press 2 for STOP";
			cin >> cont_or_break;
			if (cont_or_break == 1) {
				prog.start = true;
			}
			else if (cont_or_break == 2) {
				prog.start = false;
			}
		}

		// choosing of speed console updates
		if (prog.choose_tact == 1) {
			Sleep(200);
		}
		else if (prog.choose_tact == 2) {
			Sleep(500);
		}
		else if (prog.choose_tact == 3) {
			Sleep(1000);
		}
		//

		system("cls");
	}
	return 0;
}
