struct Move {
    int row, col;
}

char player = 'x', opponent = 'o';

// checks wether there are any moves left
bool areMovesLeft(char board[3][3]){
    for(int i = 0; i < 3; i++){
       for(int j = 0; j < 3; j++){
            if(board[i][j] == '_') return true;
        }
    }
    return false;
}

int evaluate(char b[3][3]){
    //rows
    for(int row = 0; row < 3; row++){
        if (b[row][0] == b[row][1]) && (b[row][1] == b[row][2]){
            if (b[row][1] == player) return +10;
            return -10;
        }
    }
    //cols
    for(int col = 0; col < 3; col++){
        if(b[0][col] == b[1][col] && b[1][col] == b[2][col]){
            if(b[0][col] == player) return +10;
            return -10;
        }
    }
   
    // diagonalis
    if (b[0][0] == b[1][1] && b[1][1] == b[2][2]) {
        if (b[0][0] == player)
            return +10;
        else if (b[0][0] == opponent)
            return -10;
    }
    if (b[0][2] == b[1][1] && b[1][1] == b[2][0]) {
        if (b[0][2] == player)
            return +10;
        else if (b[0][2] == opponent)
            return -10;
    }
   
    // none of them won
    return 0;
}

int main(){

}