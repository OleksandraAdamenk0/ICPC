// Problem L

// L: Semi-degrees of vertices by adjacency matrix

// Time limit:

// 0.2 seconds

// Memory limit:

// 64 megabytes

// A directed graph is defined by an adjacency matrix. Find the in-degrees and out-degrees of all vertices in the graph. That is, for each vertex you need to count how many edges it includes and how many ribs come out of it.

// Input format

// The first line of the input data contains the number N (1 ≤ N ≤ 100). This is followed by N lines each containing N numbers - the adjacency matrix of graph C. In the adjacency matrix, the element in the i-th row and j-th column, C[i][j] = 1, if there is an edge connecting vertices i and j, otherwise C[i][j] = 0.

// Output format

// Your program should print the number of pairs of numbers (each pair on a separate line). For each vertex, first print the in-degree (half-degree) and then the out-degree.

// Example

// Input:

// 4
// 0 1 0 1
// 1 0 1 0
// 1 1 1 1
// 1 1 1 1

// Output:

// 2 2
// 3 3
// 2 1
// 3 4


#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    int *mas = new int[n * 2];
    for (int i = 0; i < n * 2; ++i) {
        mas[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a;
            mas[j * 2] += a;
            mas[i * 2 + 1] += a;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << mas[i * 2] << " " << mas[i * 2 + 1] << endl;
    }
    free(mas);
    return 0;
}
