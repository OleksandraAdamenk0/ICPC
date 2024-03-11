// Problem O
//
// A: Regular graph
//
// Time limit: 0.2 seconds
//
// Memory limit: 64 megabytes
//
// An undirected graph is called regular if all its vertices have the same degree. Given a list of graph edges, check whether it is regular.
//
// Input format
//
// The first line of the input data contains the number K (1 ≤ K ≤ 10) - the number of graphs being tested. Next comes K blocks, each of which describes one undirected graph with a list of edges. For each block, the number of vertices N (1 ≤ N ≤ 100), the number of edges M (0 < M < 10000), and then M lines follow, each containing 2 numbers describing an edge in the undirected graph.
//
// Output format
//
// For each tested graph, the program should print “YES” in a separate line if this graph is regular and “NO” otherwise.
//
// Example
//
// Input:
//
// 2
// 3 3
// 1 2
// 1 3
// 2 3
// 3 2
// 1 2
// 2 3
//
// Output:
//
// YES
// NO


# include <iostream>
using namespace std;

int main(){
    short k, n, m, a;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> n >> m;
        int *nodes = new int[n];
        for (int j = 0; j < n; ++j) {
            nodes[j] = 0;
        }
        for (int j = 0; j < m; ++j) {
            cin >> a;
            nodes[a - 1] += 1;
            cin >> a;
            nodes[a - 1] += 1;
        }
        bool result = true;
        for (int j = 0; j < n; ++j) {
            if (nodes[j] != nodes[0]){
                result = false;
                break;
            }
        }
        cout << ((result)? "YES": "NO") << endl;
        free(nodes);
    }
    return 0;
}

