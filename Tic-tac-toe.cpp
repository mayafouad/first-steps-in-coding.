#include <bits/stdc++.h>
#define ll long long 
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL);
#define el "\n"
#define testcase int t; cin >> t; while(t--)
using namespace std;


int main()
{ 
    bool test =0;
  char arr[5][5];
  arr[0][0] = '1'; arr[0][1] ='|'; arr[0][2] = '2'; arr[0][3] = '|'; arr[0][4] = '3';
  arr[1][0] = '_'; arr[1][1] ='+'; arr[1][2] = '_'; arr[1][3] = '+'; arr[1][4] = '_';
  arr[2][0] = '4'; arr[2][1] ='|'; arr[2][2] = '5'; arr[2][3] = '|'; arr[2][4] = '6';
  arr[3][0] = '_'; arr[3][1] ='+'; arr[3][2] = '_'; arr[3][3] = '+'; arr[3][4] = '_';
  arr[4][0] = '7'; arr[4][1] ='|'; arr[4][2] = '8'; arr[4][3] = '|'; arr[4][4] = '9';

for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<< arr[i][j];
    } cout << el;
  } 

ll n =9;
while(n--){

    if (n%2){
cout << "X_turn --> enter position number: ";
ll p; cin >> p;
switch (p)
{
case 1:
    arr[0][0] = 'X';
    break;
case 2:
    arr[0][2] = 'X';
    break;
case 3:
    arr[0][4] = 'X';
    break;
case 4:
    arr[2][0] = 'X';
    break;
case 5:
    arr[2][2] = 'X';
    break;
case 6:
    arr[2][4] = 'X';
    break;
case 7:
    arr[4][0] = 'X';
    break;
case 8:
    arr[4][2] = 'X';
    break;
case 9:
    arr[4][4] = 'X';
    break;
default:
cout << "wrong number, please enter another: ";
ll p; cin >> p;
    break;

}
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<< arr[i][j];
    } cout << el;
  } 

if(arr[0][0] == arr[0][2] &&  arr[0][4] == arr[0][2] ){cout << "X win";test =1; break;}
if(arr[2][0] == arr[2][2] && arr[2][4] == arr[2][2]){cout << "X win";test =1; break;}
if (arr[4][0] == arr[4][2] && arr[4][4] == arr[4][2] ){cout << "X win";test =1; break;}
if(arr[0][0] == arr[2][2] && arr[2][2] == arr[4][4]){cout << "X win";test =1; break;}
if(arr[0][4] == arr[2][2] && arr[2][2] == arr[4][0] ){cout << "X win";test =1; break;}
if(arr[0][0] == arr[2][0] && arr[2][0] == arr[4][0]){cout << "X win"; test =1;break;}
if(arr[0][2] == arr[2][2] && arr[2][2] == arr[4][2]){cout << "X win"; test =1;break;}
if(arr[0][4] ==arr[2][4] && arr[2][4] == arr[4][4]){cout << "X win"; test =1;break;}
}
else{
  cout << "O_turn --> enter position number: ";
ll p; cin >> p;
switch (p)
{
case 1:
    arr[0][0] = 'O';
    break;
case 2:
    arr[0][2] = 'O';
    break;
case 3:
    arr[0][4] = 'O';
    break;
case 4:
    arr[2][0] = 'O';
    break;
case 5:
    arr[2][2] = 'O';
    break;
case 6:
    arr[2][4] = 'O';
    break;
case 7:
    arr[4][0] = 'O';
    break;
case 8:
    arr[4][2] = 'O';
    break;
case 9:
    arr[4][4] = 'O';
    break;
default:
cout << "wrong number, please enter another: ";
ll p; cin >> p;
    break;

}  
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<< arr[i][j];
    } cout << el;
  } 
if(arr[0][0] == arr[0][2] &&  arr[0][4] == arr[0][2] ){cout << "O win";test =1; break;}
if(arr[2][0] == arr[2][2] && arr[2][4] == arr[2][2]){cout << "O win";test =1; break;}
if (arr[4][0] == arr[4][2] && arr[4][4] == arr[4][2] ){cout << "O win";test =1; break;}
if(arr[0][0] == arr[2][2] && arr[2][2] == arr[4][4]){cout << "O win"; test =1;break;}
if(arr[0][4] == arr[2][2] && arr[2][2] == arr[4][0] ){cout << "O win";test =1; break;}
if(arr[0][0] == arr[2][0] && arr[2][0] == arr[4][0]){cout << "O win";test =1; break;}
if(arr[0][2] == arr[2][2] && arr[2][2] == arr[4][2]){cout << "O win"; test =1;break;}
if(arr[0][4] ==arr[2][4] && arr[2][4] == arr[4][4]){cout << "O win"; test =1;break;}
}


 }
 if(test == 0) cout << "Draw :(";
  cout <<el<< " game over ";
}
