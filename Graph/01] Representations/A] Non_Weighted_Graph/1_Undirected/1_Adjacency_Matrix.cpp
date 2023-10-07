#include<iostream>
#include<vector>

using namespace std;

class Solution
{
    public :

    vector<vector<int>> matrix;

    void createGraph()
    {
        int n;
        int m;
        cout << "Number of Nodes : ";
        cin >> n;
        cout << "Number of Edges : ";
        cin >> m;

        matrix.resize(n+1,vector<int>(n+1,0));                              // Resizing our matrix & initializing it with 0's.

        cout << "Enter the " << m << " Edges :- " << endl;

        int x = m;
        int i;
        int j;
        while(x)
        {
            cin >> i;                                       
            cin >> j;
            matrix[i][j] = matrix[j][i] = 1;                                                   
            x--;
        }

        cout << "\nGraph Created Successfully !!!" << endl;
    }
};

int main()
{
    Solution S1;
    S1.createGraph();
    vector<vector<int>> g1 = S1.matrix;
    cout << "Hello" << endl;
}