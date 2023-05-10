#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

//print the board
void print_borad(char board[]){

    cout << setw(10) <<"Tic-Tac-Toe" << endl;

    cout << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
    cout << "---------------" <<endl;
    cout << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
    cout << "---------------" <<endl;
    cout << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
    cout << "---------------" <<endl;
}

bool Isempty(char board[], int i){
	if (board[i] == 'x' || board[i] == 'o')
		return false;
	else
		return true;
}

bool WinGame(char board[], char p){
    //p should pass to this function as a char
    if(board[1] == p && board[2] == p && board[3] == p)
        return true;
    else if(board[4] == p && board[5] == p && board[6] == p)
        return true;
    else if(board[7] == p && board[8] == p && board[9] == p)
        return true;
    else if(board[1] == p && board[5] == p && board[9] == p)
        return true;
    else if(board[3] == p && board[5] == p && board[7] == p)
        return true;
    else
        return false;
}




int main(){
    cout << setw(30) << "player-1: x " << setw(15) << "player-2: o" << endl;
}
