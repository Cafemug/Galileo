#include <iostream>
using namespace std;
bool check_row[10][10];
bool check_col[10][10];
bool check_room[10][10];
int board[10][10];
void fill_board(int i,int j,int num){
    check_row[i][num]= true;
    check_col[j][num]= true;
    check_room[3*(i/3)+(j/3)][num]=true;
   
}
bool check_exist(int i,int j,int num){
    if(check_row[i][num]) return true;
    if(check_col[j][num]) return true;
    if(check_room[3*(i/3)+(j/3)][num]) return true;
    return false;
}
void go(int a, int b){
    if(a==9 && b==9) return;
    for(int i=a;i<9;i++){
        for(int j=b;j<9;j++){
            if(board[i][j]!=0) continue;
            for(int x=1;x<10;x++){
                if(!check_exist(i,j,x)){
                    board[i][j]=x;
                    fill_board(i,j,x);
                }
            }
        }
    }
}

int main(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>board[i][j];
            if(board[i][j]==0) continue;
            check_row[i][board[i][j]]=true;
            check_col[j][board[i][j]]=true;
            check_room[3*(i/3)+(j/3)][board[i][j]]=true;
        }
    }
    go(0,0);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}