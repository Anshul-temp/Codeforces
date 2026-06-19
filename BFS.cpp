queue<int> q;
q.push(src);
vis[src] = 1;

while(!q.empty()){
    int node = q.front();
    q.pop();

    for(auto &it : adj[node]){
        if(!vis[it]){
            vis[it] = 1;
            q.push(it);
        }
    }
}
