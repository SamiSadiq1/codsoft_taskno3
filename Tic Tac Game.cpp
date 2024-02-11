#include <iostream>
#include <cstdlib>
#include<ctime>
#include<time.h>
#include<Windows.h>
using namespace std;

int main()
{
	int opt, position = 0, toss = 0;
	char x00 = ' ', x01 = ' ', x02 = ' ', x10 = ' ', x11 = ' ', x12 = ' ', x20 = ' ', x21 = ' ', x22 = ' ';
	char p1 = 'X', p2 = 'O';
	bool win = false, player_turn;
	cout << "Main Menu" << endl;
	cout << "Press 1: Instructions/rules" << endl;
	cout << "press 2: Start Game" << endl;
	cin >> opt;
	srand(time(NULL));
	if (opt == 1)
	{
		cout << "1.The game is played on a grid that's 3 squares by 3 squares." << endl << "2.You are X, your friend is O." << endl << "3.Players take turns putting their marks in empty squares." << endl << "4.The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl << "5.When all 9 squares are full, the game is over." << endl;
	}
	else if (opt == 2)
	{
		Sleep(100);
		system("cls");
		toss = rand() % 2;
		if (toss == 1)
		{
			cout << "Player 1 won the toss" << endl;
			player_turn = 1;
		}
		else if (toss == 0)
		{
			cout << "Player 2 won the toss" << endl;
			player_turn = 0;
		}

		cout << "Player 1:X    Player 2: O" << endl;

		cout << " " << "1" << " | " << "2" << " | " << "3" << " | " << endl;
		cout << "------------" << endl;
		cout << " " << "4" << " | " << "5" << " | " << "6" << " | " << endl;
		cout << "------------" << endl;
		cout << " " << "7" << " | " << "8" << " | " << "9" << " | " << endl;
		while (win == false)
		{


			//srand(time(NULL));
			if (player_turn == 1)
			{
				cout << "Player 1 turn" << endl;
				cout << "-----------------------------------" << endl;
				cout << "Enter position number: ";
				cin >> position;

				switch (position)
				{
				case 1:

					if (x00 == ' ')
					{
						x00 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 2:
					if (x01 == ' ')
					{
						x01 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 3:
					if (x02 == ' ')
					{
						x02 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 4:
					if (x10 == ' ')
					{
						x10 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 5:
					if (x11 == ' ')
					{
						x11 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 6:
					if (x12 == ' ')
					{
						x12 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 7:
					if (x20 == ' ')
					{
						x20 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 8:
					if (x21 == ' ')
					{
						x21 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 9:
					if (x22 == ' ')
					{
						x22 = p1;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				default:
					cout << "Invalid Move - Please Try Again" << endl;
					continue;

				}
			}
			else if (player_turn == 0)
			{
				cout << "Player 2 turn" << endl;


				cout << "Enter position number";
				cin >> position;
				switch (position)
				{
				case 1:
					if (x00 == ' ')
					{
						x00 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 2:
					if (x01 == ' ')
					{
						x01 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 3:
					if (x02 == ' ')
					{
						x02 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 4:
					if (x10 == ' ')
					{
						x10 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 5:
					if (x11 == ' ')
					{
						x11 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 6:
					if (x12 == ' ')
					{
						x12 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 7:
					if (x20 == ' ')
					{
						x20 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 8:
					if (x21 == ' ')
					{
						x21 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				case 9:
					if (x22 == ' ')
					{
						x22 = p2;
					}
					else
					{
						cout << "Invalid Position - Please Try Again " << endl;
						continue;
					}
					break;
				default:
					cout << "Invalid Move" << endl;
					break;
				}
			}
			cout << " " << x00 << " | " << x01 << " | " << x02 << " | " << endl;
			cout << "------------" << endl;
			cout << " " << x10 << " | " << x11 << " | " << x12 << " | " << endl;
			cout << "------------" << endl;
			cout << " " << x20 << " | " << x21 << " | " << x22 << " | " << endl;
			if (((x00 == x01 && x01 == x02) && (x00 != ' ' && x01 != ' ' && x02 != ' ')) or ((x20 == x21 && x21 == x22) && (x20 != ' ' && x21 != ' ' && x22 != ' ')) or ((x10 == x11 && x11 == x12) && (x10 != ' ' && x11 != ' ' && x12 != ' ')) or ((x00 == x11 && x11 == x22) && (x00 != ' ' && x11 != ' ' && x22 != ' ')) or ((x02 == x11 && x11 == x20) && (x02 != ' ' && x11 != ' ' && x20 != ' ')) or ((x00 == x10 && x10 == x20) && (x00 != ' ' && x10 != ' ' && x20 != ' ')) or ((x01 == x11 && x11 == x21) && (x01 != ' ' && x11 != ' ' && x21 != ' ')) or ((x02 == x12 && x12 == x22) && (x02 != ' ' && x12 != ' ' && x22 != ' ')))
			{
				win = true;
				if (x00 == p1 || x20 == p1 || x10 == p1 || x02 == p1)
				{
					cout << "Player 1 wins" << endl;
					break;
				}
				else
				{
					cout << "Player 2 wins" << endl;
					break;
				}
			}
			else if (x00 != ' ' && x01 != ' ' && x02 != ' ' && x10 != ' ' && x11 != ' ' && x12 != ' ' && x20 != ' ' && x21 != ' ' && x22 != ' ')
			{
				cout << "Draw" << endl;
				break;
			}
			if (player_turn == 0)
			{
				player_turn = 1;
			}
			else
			{
				player_turn = 0;
			}

		}
	}
	else
	{
		cout << "Invalid Entry" << endl;
	}
}

