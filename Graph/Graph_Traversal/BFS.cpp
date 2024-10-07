vector<vector<int>> adj;  // considering graph as a adjacency list

int n;  // no. of nodes
int s;  // src node

queue<int> q;
vector<bool> visited(n);

/**
 * dis -> shortest distance of that node from src
 * par -> parent of that node
 */
vector<int> dis(n), par(n); 

q.push(s);
visited[s] = true;
par[s] = -1;
while (!q.empty()) {
    int node = q.front();
    q.pop();
    for (int nbr : adj[node]) {
        if (!visited[nbr]) {
            visited[nbr] = true;
            q.push(nbr);
            dis[nbr] = dis[node] + 1;
            par[nbr] = node;
        }
    }
}