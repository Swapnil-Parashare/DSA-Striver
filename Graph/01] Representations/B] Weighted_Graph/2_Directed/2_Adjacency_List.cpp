#include<iostream>
#include<vector>
#include<utility>

using namespace std;

class Solution
{
    public : 

    vector<vector<pair<int,int>>> graph;

    void createGraph()
    {
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
        int weight;


        while (x)
        {
            cin >> i >> j;
            graph[i].push_back(make_pair(j,weight));                                       // Here Edges goes from i to j only.  i ------> j . It doesn't goes back from j to i.
            x--;
        }
        cout << "\nGraph Created Successfully !!!" << endl;
        
    }
};

int main()
{
    Solution S1;
    S1.createGraph();
    vector<vector<pair<int,int>>> g1 = S1.graph;
    cout << "Hello" << endl;
}