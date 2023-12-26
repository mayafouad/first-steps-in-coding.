
#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <fstream>
using namespace std;

class Universe {
private:
    vector<vector<char>> grid;
    vector<vector<int>> live;
    int rows, columns;
public:
    Universe(int,int); // constructor
    void initialize(); // generates a random starting layout.
    void file_initialize(string); // generates a starting layout given by user.
    void reset(); // sets all the cells as dead.
    void count_neighbors(); //  returns the number of alive neighbors.
    void next_generation(); // produces a new state of the game based on the transition rules.
    void display(); // shows the game status on the console.
    void run(int); //  to start the game for a certain number of runs.
};

Universe::Universe(int rows, int columns) {
    this -> rows = rows;
    this -> columns = columns;
    grid = vector<vector<char>> (rows,vector<char>(columns,' ')) ;
}

void Universe::initialize(){
    for(int i =0; i<rows; i++){
        for(int j=0; j<columns; j++){
            grid[i][j] = ::rand()%3 == 0? '*':' ';
        }
    }
}

void Universe::file_initialize(string name){
    string line;
    ifstream file(name);
    int i = -1;
    while(getline(file,line)){
        i++;
    for(int j = 0; j < line.length(); j++){
        grid[i][j] = line[j];
        }
    }
}

void Universe::reset() {
    for(int i =0; i<rows; i++){
        for(int j=0; j<columns; j++){
            grid[i][j] = ' ';
        }
    }
}
void Universe::count_neighbors() {
    live = vector<vector<int>> (rows,vector<int>(columns,0)) ;
    for(int i =0; i<rows; i++){
        for(int j=0; j<columns; j++){
            // loop over neighbors----------------
            for(int k = i-1; k <= i+1; k++){
                for(int y = j-1; y <= j+1; y++){
                    if(k == i && y == j) continue;
                    if(k >= 0 && k < rows && y >= 0 && y < columns && grid[k][y] == '*') {
                        live[i][j]++;
                    }
                }
            }
            //-------------------------------------
        }
    }
}

void Universe::next_generation(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            if( grid[i][j] == '*' && live[i][j] > 3){
                grid[i][j] = ' ';
            }
            if(grid[i][j] == '*' && live[i][j] < 2 ){
                grid[i][j] = ' ';
            }
            if(grid[i][j] == ' ' &&  live[i][j] == 3){
                grid[i][j] = '*';
            }
        }
    }


}

void Universe::display() {
    system("cls");
    for(int i =0; i<rows; i++){
        for(int j=0; j<columns; j++){
           cout << grid[i][j] ;
        }
        cout << "\n";
    }
}

void Universe::run(int turns) {
    display();
    while (turns--){
        usleep (500000);
        count_neighbors();
        next_generation();
        display();
    }
}

int main(){
    int r,c,t;
    cout << "Enter Number Of Rows and Columns\n";
    cin >> r >> c;
    Universe x(r,c);
    cout << "Enter Number Of Turns\n";
    cin >> t;
    cout << "Enter Initialize File Name or Press 0 To Make It Random\n";
    string name;
    cin >> name;
    if(name == "0"){
        x.initialize();
    }
    else{
        x.file_initialize(name);
    }
    x.run(t);
}
