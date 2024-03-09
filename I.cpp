// "A directed graph is represented by a list of edges. Check if it contains multiple (other parallel) edges.

// **Input format:**

// The first line of the input contains an integer, K (1 ≤ K ≤ 10), representing the number of graphs to be tested. This is followed by K blocks, each describing a directed graph with a list of edges. For each block, the following information is provided:

// - N (1 ≤ N ≤ 100): the number of vertices
// - M (1 ≤ M ≤ 10,000): the number of edges
// - Then, M lines follow, each containing two integers representing an edge of the directed graph.

//  **Output format:**

// For each graph being tested, the program should print 'YES' on a separate line if the graph contains multiple edges, and 'NO' otherwise."


#include <iostream>
using namespace std;

int check(int **mas, int m){
    for (int j = 0; j < m; ++j) {
        for (int l = j; l < m; ++l) {
            if (mas[j][0] == mas[j][1]) {
                l = m - 1;
                continue;
            }
            if (l == j)
                continue;
            if (mas[j][0] != mas[l][0])
                continue;
            if (mas[j][1] != mas[l][1])
                continue;
            return 1;
        }
    }
    return 0;
}


int main(){
    int k, n, m;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        cin >> n >> m;
        int **mas = new int*[m];
        for (int j = 0; j < m; ++j) {
            mas[j] = new int[2];
            cin >> mas[j][0] >> mas[j][1];
        }
        if (check(mas, m) == 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
