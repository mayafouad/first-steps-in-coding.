#include <bits/stdc++.h>
#define ll long long 
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL);
#define el "\n"
#define testcase int t; cin>>t; while(t--)
using namespace std;

vector <string> v;
void intro(){
    cout << "-------------------------------------------" << endl;
    cout << "enter:   1     2      3        4      5   " << endl;
    cout << "to:    view   add   remove   clear   quit " << endl;
    cout << "-------------------------------------------" << endl;
}
void view(){
    if(v.size()){
    cout << "-------------------------------------------" << endl;
    cout << "My To Do List :" << endl;
    ll n=0;
    for(auto a:v){
        n++;
        cout << n << ": " << a << endl;
    }}
    else cout << "Your list haven't tasks "<< endl;
}
void add(string s){
    v.push_back(s);
}
void re(int x) {
    if (x >= 1 && x <= v.size()) {
        v.erase(v.begin() + x - 1);
    } else {
        cout << "Invalid task number." << endl;
    }
}

void cle() {
    v.clear();
    cout << "All tasks cleared!" << endl;
}

int main(){
 
    fast();
    ll x;
    do{
    intro();
        cin >> x;
        switch (x)
        {
        case 1:{
            view();
            break;}
        case 2:{
            cout << "Enter your task: "<< endl;
            string s; cin >> s;
            add(s);
            break;}
        case 3:{
            cout << "Enter number of task you want to remove it: "<< endl;
            ll n; cin >> n;
            re(n);
            break;}
        case 4:{
            cle();
            break;}
        case 5 : {break;}
        default:{
            cout << "Invalid choice. Please select a valid option (1-5)." << endl;
            break;}

        }
    }while (x!=5);
    v.clear();
 
 }   
