#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public : 

    vector<vector<int>> graph;

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


        while (x)
        {
            cin >> i >> j;
            graph[i].push_back(j);                                       // Here Edges goes from i to j only.  i ------> j . It doesn't goes back from j to i.
            x--;
        }
        cout << "\nGraph Created Successfully !!!" << endl;
        
    }
};

int main()
{
    Solution S1;
    S1.createGraph();
    vector<vector<int>> g1 = S1.graph;
    cout << "Hello" << endl;
}