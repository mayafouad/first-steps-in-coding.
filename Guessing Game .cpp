#include <iostream>
#include <utility>
#include <windows.h>
#include <algorithm>
using namespace std;
class Game
{
public:
    Game();
   // virtual ~Game();
    void set_board();
    void run();
    pair<int, int> play();
    void display();
    bool check();
private:
    string board[4][4] ={{"G","H","K","L"}, {"K","S","G","U"}, {"R","Q","S","H"}, {"U","L","R","Q"}};
    bool show[4][4];
};

Game::Game() {
    cout << "Guessing Chars Game...\n";
    Sleep(400);
    cout << "1..";
    Sleep(300);
    cout << "2..";
    Sleep(300);
    cout << "3...\n";
    Sleep(200);
}

void Game::set_board() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            show[i][j] = false;
        }
    }

    random_shuffle(&board[0][0], &board[0][0] + 16);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "| " << board[i][j] << " |";
        }cout << "\n";
        for (int j = 0; j < 4; j++) {
            cout << "-----";
        } cout << "\n";
    }
        Sleep(2500);
}

void Game::display() {
    Sleep(1500);
    system("cls");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!show[i][j]) cout << "|" << i << "," << j << "|";
            else cout << "| " << board[i][j] << " |";
        } cout << "\n";
        for (int j = 0; j < 4; j++) {
            cout << "-----";
        } cout << "\n";
    }
}

pair<int, int> Game::play() {
    cout << "Enter Position." << "\n";
    int i, j; cin >> i >> j;
    if (i >= 0 && i < 4 && j >= 0 && j < 4 && !show[i][j]) {
        show[i][j] = true;
    }
    else {
        cout << "Wrong Position, ";
        play();
    }
    return make_pair(i, j);
}

bool Game::check() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!show[i][j]) return false;
        }
    }
    return true;
}
void Game::run() {
    while (!check()) {
        pair <int, int> p1 = play();
        display();
        pair <int, int> p2 = play();
        display();
        if (board[p1.first][p1.second] != board[p2.first][p2.second]) {
            show[p1.first][p1.second] = false;
            show[p2.first][p2.second] = false;
            cout << "OOPS!\n";
        }
        else{cout << "GOOD JOB!\n";}
        display();
    }
    cout << "Game Over";
}

int main() {
    Game g;
    g.set_board();
    g.display();
    g.run();

}

