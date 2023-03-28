#include <iostream>
using namespace std;

const int N = 10;
char symbol = 'X';
char board[N][N];
// ve ban co 
void draw_board() {
    cout << "  ";
    for (int i = 0; i < N; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++) {
        cout << i << " ";
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
// kiem tra ban co da full chua
bool is_full() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == '.') {
                return false;
            }
        }
    }
    return true;
}
// kiem tra dieu kien thang 
bool is_win(char symbol) {
    int count;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == symbol) {
                count = 1;
                if (i + 4 < N && board[i+1][j] == symbol && board[i+2][j] == symbol && board[i+3][j] == symbol && board[i+4][j] == symbol) {
                    return true;
                }
                if (j + 4 < N && board[i][j+1] == symbol && board[i][j+2] == symbol && board[i][j+3] == symbol && board[i][j+4] == symbol) {
                    return true;
                }
                if (i + 4 < N && j + 4 < N && board[i+1][j+1] == symbol && board[i+2][j+2] == symbol && board[i+3][j+3] == symbol && board[i+4][j+4] == symbol) {
                    return true;
                }
                if (i - 4 >= 0 && j + 4 < N && board[i-1][j+1] == symbol && board[i-2][j+2] == symbol && board[i-3][j+3] == symbol && board[i-4][j+4] == symbol) {
                    return true;
                }
            }
        }
    }
    return false;
}
void lanluot()
{
	if(symbol == 'X')
		symbol = 'O';
	else{
		symbol = 'X';
	} 
 } 

//char nguoichoi[20]; 
//void doi(char a[],char b[])
//{
//
//	if(symbol == 'X')
//		nguoichoi == a;
//	else{
//		nguoichoi == b;
//	}
//}
int main() {
	char a[20],b[20];
	cout<<"nhap ten nguoi choi 1: "; fflush(stdin) ; gets(a); 
	cout<<"nhap ten nguoi choi 2: "; fflush(stdin) ; gets(b); 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = '.';
        }
    }
    draw_board();
    int row, col;
    while (true) {
        cout << "nguoi choi " << symbol << ", nhap row and column (0-14): ";
        cin >> row >> col;
        if (row < 0 || row >= N || col < 0 || col >= N || board[row][col] != '.') {
            cout << "khong hop le! Moi nhap lai!!" << endl;
            continue;
        }
        board[row][col] = symbol;
        draw_board();
        
        
        if (is_win(symbol)) {
            cout << "nguoi choi " << symbol << " wins!" << endl;
            break;
        }
        if (is_full()) {
            cout << "ban co da day ";
            break; 
		}
		lanluot();
//		doi(a,b);
	}
	return 0;
}
