#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public : 

    vector<vector<int>> graph;

    void createGraph()
    {
        cout << "\nCreating Undirected and Unweighted Graph :- \n" << endl;
        int n;
        int m;
        cout << "Number of Nodes : ";
        cin >> n;
        cout << "Number of Edges : ";
        cin >> m;

        graph.resize(n+1);                                              // Initializing the size of only 1-Dimension.

        int x = m;
        int i;
        int j;


        while (x)
        {
            cin >> i >> j;
            graph[i].push_back(j);
            graph[j].push_back(i);
            x--;
        }
        cout << "\nGraph Created Successfully !!!" << endl;
        
    }
};
