#include<iostream>
#include<vector>
#include"../../01] Representations/A] Non_Weighted_Graph/1_Undirected/2_Adjacency_List.cpp"


using namespace std;

/*1-Based Indexing for Nodes.*/

class Traverse
{
    public :

    vector<vector<int>> graph;
    vector<int> visited;
    vector<int> answer;

    Traverse()
    {
        Solution S1;
        S1.createGraph();
        this->graph = S1.graph;
        this->visited.resize(this->graph.size(),0);
    }

    void dfs(int start)
    {
        answer.push_back(start);
        visited[start] = 1;

        for(int neighbour : graph[start])
        {
            if(visited[neighbour] == 0)
            {
                dfs(neighbour);
            }
        }

        return;
    }
};

int main()
{
    Traverse T1;

    T1.dfs(3);
 
    for(int i : T1.answer)
    {
        cout << i << " " ;
    }

}