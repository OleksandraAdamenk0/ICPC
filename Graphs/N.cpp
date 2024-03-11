// Task N
//
// Origins and drains
//
// Time limit: 0.2 seconds
//
// Memory limit: 64 megabytes
//
// A vertex of a directed graph is called a source if no edges enter it and a drain if no edges exit from it.
//
// A directed graph is defined by an adjacency matrix. Find all the vertices of the graph that are sources and all of its vertices that are sinks.
//
// Input format
//
// The first line of the input data contains the number N (1 ≤ N ≤ 100) - the number of vertices in the graph. Next, N rows of numbers follow, representing the adjacency matrix of the graph C. In the adjacency matrix, the element C[i][j] = 1 if there is an edge connecting vertices i and j, otherwise C[i][j] = 0.
//
// Output format
//
// In the first line, print the number of sources k followed by the indices of the vertices which are the sources, in ascending order. In the second line, print information about the drains in the same format.
//
// Example
//
// Input:
//
// 13
// 1 0 0 1
// 0 0 2 4
// 0 0 0 0
// 1 0 1 0
// 1 1 0 1
// 0 0 0 0
//
// Output:
//
// 2 1 5
// 3 3 4



# include <iostream>
using namespace std;

int main(){
    short n, a;
    cin >> n;
    auto *outlet = new short [n];
    auto *source = new short [n];

    for (short i = 0; i < n; ++i) {
        outlet[i] = 1;
        source[i] = 1;
    }
    short s_amount = n;
    short o_amount = n;

    for (short i = 0; i < n; ++i) {
        for (short j = 0; j < n; ++j) {
            cin >> a;
            if (a != 1)
                continue;
            s_amount = (source[j] == 1)? --s_amount: s_amount;
            o_amount = (outlet[i] == 1)? --o_amount: o_amount;
            outlet[i] = 0;
            source[j] = 0;
        }
    }

    cout << s_amount << " ";
    for (short i = 0; i < n; ++i) {
        if (source[i] != 1)
            continue;
        cout << i + 1 << " ";
    }

    cout << endl << o_amount << " ";

    for (short i = 0; i < n; ++i) {
        if (outlet[i] != 1)
            continue;
        cout << i + 1 << " ";
    }

    free(outlet);
    free(source);
    return 0;
}