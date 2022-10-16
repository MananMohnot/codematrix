// Leet code: Minimum cost to connect all points solution
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int minCostConnectPoints(vector<vector<int>> &points){
            int n = points.size();
            priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
            // creating a non decreasing priority queue

            vector<bool> visited(false);
            pq.push({0,0});

            int cost = 0;
            int edges = 0;

            while(edges<n)
            {
                pair<int,int> k = pq.top();

                int w = k.first;
                int node = k.second;
                
                if(visited[node])
                    continue;
                
                visited[node] = true;
                cost += w;
                edges++;

                for (int nextNode = 0; nextNode < n; ++nextNode) {
                    if (!visited[nextNode]) {
                    int nextWeight = abs(points[node][0] - points[nextNode][0]) +  abs(points[node][1] - points[nextNode][1]);
                    pq.push({ nextWeight, nextNode });
                }
            }
            }

            return cost;
        }
};