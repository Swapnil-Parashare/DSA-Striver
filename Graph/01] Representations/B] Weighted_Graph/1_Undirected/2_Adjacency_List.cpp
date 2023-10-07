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
            cin >> i >> j >> weight;
            graph[i].push_back(make_pair(j,weight));
            graph[j].push_back(make_pair(i,weight));
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