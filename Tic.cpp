#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;

char board[10] = {'o','1','2','3','4','5','6','7','8','9'};

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
int main(){
}
