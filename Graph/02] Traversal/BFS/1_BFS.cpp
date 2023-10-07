#include<iostream>
#include<queue>
#include"../../01] Representations/A] Non_Weighted_Graph/1_Undirected/2_Adjacency_List.cpp"

using namespace std;

class Traverse
{
    public : 

    vector<vector<int>> graph;

    Traverse()                                     // Non Parameterized Constructor.
    {
        Solution S1;
        S1.createGraph();
        this->graph = S1.graph;
    }

    vector<int> BFS(int i)
    {
        vector<int> answer;

        int size = graph.size();
        vector<int> visited(size,0);
        queue<int> que;

        answer.push_back(i);
        visited[i] = 1;
        que.push(i);

        int current;

        while (que.empty() != true)
        {
            current = que.front();
            que.pop();

            for(int neighbour : graph[current])
            {                
                if(visited[neighbour] == 0)
                {
                    answer.push_back(neighbour);
                    visited[neighbour] = 1;
                    que.push(neighbour);
                }
            }
        }

        return answer;    
    }

    void display()
    {
        cout << "\nGraph :- \n" << endl;
        for(int i = 1 ; i < graph.size() ; i++)
        {
            cout << i << " ---> " ;
            for(int element : graph[i])
            {
                cout << element << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

};
/*
1. Visit Neighbours.
2. Push it in answer.
3. Mark as visited.
4. Push it in que.
*/

/*
1-Based Indexing for Nodes.
*/
int main()
{
    Traverse T1;
    vector<vector<int>> graph = T1.graph;

    T1.display();

    cout << "\nBFS Traversals starting from each Node :- \n" << endl;

    vector<int> bfs;


    for(int i = 1; i < graph.size() ; i++)
    {
        bfs = T1.BFS(i);
        for(int element : bfs)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    cout << endl;
}