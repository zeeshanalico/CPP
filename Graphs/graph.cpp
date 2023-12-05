#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define f first
#define s second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD=1e9+7;

int main(){

    int n,m;
    cin>>n>>m;

    vvi adjm(n+1,vi(n+1,0));
    
    rep(i,0,m){
        int x,y;
        cin>>x>>y;

        adjm[x][y]=1;
        adjm[y][x]=1;        
    }
    cout<<"Adjacency Matrix of above graph is given by: "<<endl;
    rep(i,1,n+1){
         rep(j,1,n+1){
            cout<<adjm[i][j]<<" ";
         }
            cout<<endl;
    }
    // input
    /*  7 7 // nodes edges

        1 2
        1 3
        2 4
        2 5
        2 6
        2 7
        7 3     */
        //output    
    /*  0 1 1 0 0 0 0 
        1 0 0 1 1 1 1
        1 0 0 0 0 0 1
        0 1 0 0 0 0 0
        0 1 0 0 0 0 0
        0 1 0 0 0 0 0
        0 1 1 0 0 0 0    */

    return 0;
}