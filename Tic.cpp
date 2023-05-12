#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

//print the board
void print_borad(char board[]){



    cout << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;
    cout << "---------------" <<endl;
    cout << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;
    cout << "---------------" <<endl;
    cout << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;
    cout << "---------------" <<endl;
}

bool Isempty(char board[]){
    int counter = 0;
	for(int i = 1; i <= 9 ; ++i){
        if (board[i] == 'x' || board[i] == 'o')
            counter++;
	}
	if(counter == 9)
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
    else if(board[1] == p && board[4] == p && board[7] == p)
        return true;
    else if(board[2] == p && board[5] == p && board[6] == p)
        return true;
    else if(board[3] == p && board[6] == p && board[9] == p)
        return true;
    else if(board[1] == p && board[5] == p && board[9] == p)
        return true;
    else if(board[3] == p && board[5] == p && board[7] == p)
        return true;
    else
        return false;
}


int PlayerTurn(int i){
    if (i % 2 == 0)
        return 2;
    else
        return 1;
}


int game(char board[]){
    int i = 1;
    int choice;
    while(Isempty(board)== true || WinGame(board , 'x') == false || WinGame(board, 'o') == false){
        if(PlayerTurn(i) == 1){
            cout << "player 1: ";
            cin >> choice;
            board[choice] = 'x';
            print_borad(board);
            ++i;
        }
        else{
            cout << "player 2: ";
            cin >> choice;
            board[choice] = 'o';
            print_borad(board);
            ++i;
        }

        if (WinGame(board, 'x') == true)
            return 1;
        else if (WinGame(board , 'o') == true)
            return 2;
        else
            continue;



    }

}
int main(){
    cout << setw(45) << "Tic-Tac-Toe"  << endl;
    cout << setw(30) << "player-1: x " << setw(30) << "player-2: o" << endl;
    int winner = game(board);
    if(winner == 1){
        cout << "******************************" << endl;
        cout << "       Winner is player 1     " << endl;
        cout << "******************************" << endl;
    }
    else if (winner == 2){
        cout << "******************************" << endl;
        cout << "       Winner is player 2     " << endl;
        cout << "******************************" << endl;
    }

    else{
        cout << "******************************" << endl;
        cout << "           GAME OVER          " << endl;
        cout << "******************************" << endl;
    }
}
