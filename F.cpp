// A directed graph is given by a list of edges. Output its representation as an adjacency matrix.

// Input format

// The first line of the input data contains the numbers No. (1 ≤ N ≤100) the number of vertices in the graph #M (LMN (N-1)/2) - the number of edges. Next follows M lines, each containing 2 numbers, a list of edges of the directed graph.

// Output format

// Your program should output the adjacency matrix of the given graph.



#include <iostream>
using namespace std;

int main(){
    int n, l, k, m;
    cin >> n >> m;
    int **mas = new int*[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            mas[i][j] = 0;
        }
    }
    for (int i = 0; i < m; ++i) {
        cin >> k >> l;
        mas[k - 1][l - 1] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        free(mas[i]);
    }
    free(mas);
    return 0;
}
