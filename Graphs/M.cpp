//Problem M
//
// M: Semi-degrees of vertices from a list of edges
//
// Time limit: 0.2 seconds
//
// Memory limit: 64 megabytes
//
// An oriented graph is given by a list of edges. Find the in-degrees and out-degrees of all vertices in the graph. That is, for each vertex, you need to count how many edges go into it and how many edges go out of it.
//
// Input format
//
// The first line of the input data contains two numbers: N (1 ≤ N ≤ 100), the number of vertices in the graph, and M (1 ≤ M ≤ N * (N - 1) / 2), the number of edges. This is followed by M lines each containing two numbers, representing the list of graph edges.
//
// Output format
//
// Your program should print the number of pairs of numbers (each pair on a separate line). For each vertex, first print the in-degree (half-degree) and then the out-degree.
//
// Example
//
// Input:
//
// 4 4
// 1 2
// 1 3
// 2 3
// 3 4
//
// Output:
//
// 0 2
// 1 1
// 2 1
// 1 0


# include <iostream>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m;
    int *mas = new int[n * 2];
    for (int i = 0; i < n * 2; ++i) {
        mas[i] = 0;
    }
    for (int i = 0; i < m; ++i) {
        cin >> a;
        mas[(a - 1) * 2 + 1] += 1;
        cin >> a;
        mas[(a - 1) * 2] += 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << mas[i * 2] << " " << mas[i * 2 + 1] << endl;
    }
    free(mas);
    return 0;
}
