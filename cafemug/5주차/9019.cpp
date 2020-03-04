#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;
int n;
void print_res(int x,int y, int* w, char* h){
    if(x==y) return;
    else print_res(w[x],y, w, h);
    cout<<h[x];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    while(n--){
        bool c[10001];
        memset(c,false,sizeof(c));
        char h[10001];
        int w[10001];
        int x, y;
        queue<int> q;
        cin>>x>>y;
        q.push(x);
        c[x]=true;
        while(!q.empty()){
            int tx= q.front();
            q.pop();
            int x_double = tx*2;
            int x_minus = tx-1;
            int x_right = tx/10 + (tx%10) * 1000;
            int x_left = tx%1000 * 10 + tx/1000;
            if(x_double>9999) x_double%=10000;
            if(x_minus==-1) x_minus=9999;
            if(!c[x_double]){
                c[x_double]=true;
                w[x_double]=tx;
                h[x_double] = 'D';
                q.push(x_double);
            }
            if(!c[x_minus]){
                c[x_minus]=true;
                w[x_minus]=tx;
                h[x_minus] = 'S';
                q.push(x_minus);
            }
            if(!c[x_right]){
                c[x_right]=true;
                w[x_right]=tx;
                h[x_right] = 'R';
                q.push(x_right);
            }
            if(!c[x_left]){
                c[x_left]=true;
                w[x_left]=tx;
                h[x_left] = 'L';
                q.push(x_left);
            }
        }
        print_res(y,x,w,h);
        if(n!=0)
            cout<<"\n";
    }

}