vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<bool> visited(n);

void dfs(int src) {
    visited[src] = true;
    for (int nbr : adj[src]) {
        if (!visited[nbr])
            dfs(nbr);
    }
}