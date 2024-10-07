/**
 * Trace path of vertex u from src
 * vis -> this array contains if node 'i' is visited or not from bfs
 * par -> this array contains parent of node 'i' from bfs
 */

if (!vis[u]) {
    cout << "No path!";
} else {
    vector<int> path;
    for (int curr = u; curr != -1; curr = par[curr]){
        path.push_back(curr);
    }
    reverse(path.begin(), path.end());
    cout << "Path: ";
    for (int v : path){
        cout << v << " ";
    }
}