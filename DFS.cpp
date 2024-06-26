/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// bipartite

#include<bits/stdc++.h>
using namespace std ;

int n , m ;
vector <vector<int>> g ;
vector <int> vis ;
bool is_partite = true ;



void dfs(int node , int color){
    vis[node] = color ;
    for(auto v : g[node] ){
        if(!vis[v]){
            dfs(v,3-color);
        }else if(vis[v] == vis[node]){
            is_bipartite = false ;
        }
        
    }
}


int main() {
    cin >> n >> m ;
    g.resize(n+1) ;
    
    for(int i = 0 ; i < m ; i ++){
        int a , b  ;
        cin >> a >> b ;
        g[a].push_back(b) ; 
        // for undirected graphg g[b].pushback(a) ; 

    }
    vis.assign(n+1,0) ;
    
    for(int i = 1 ; i <= n ; i ++ ){
        if(!vis[i]){
            dfs(i,1);
        }
        cout<< is_bipartite << endl ;
        for(int i = 0 ; i < n ; i ++){
            cout << i << " : " << vis [i]<<endl ;
        }
    }
 
}
}

