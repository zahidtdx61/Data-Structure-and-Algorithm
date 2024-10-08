int n;                      // no. of vertex
vector<vector<int>> adj;    // using adjacency list 
vector<bool> visited;       // marking if a node is visited or not
vector<int> comp;           // this will store each connected component

void dfs(int src) {
    visited[src] = true ;
    comp.push_back(src);
    for (int nbr : adj[src]) {
        if (!visited[nbr]){
            dfs(nbr);
        }
    }
}

void find_comps() {
    fill(visited.begin(), visited.end(), 0);
    for (int v = 0; v < n; ++v) {
        if (!visited[v]) {
            comp.clear();
            dfs(v);
            cout << "Component:" ;
            for (int u : comp){
                cout << " " << u;
            }
            cout << "\n" ;
        }
    }
}