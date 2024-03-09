// "An undirected graph is represented by an adjacency matrix. Find the degrees of all vertices in the graph.

// **Input format:**

// The first line of the input contains an integer, N (1 ≤ N ≤ 100), representing the number of vertices in the graph. This is followed by N rows of numbers representing the adjacency matrix of the graph. In the adjacency matrix, element A[i][j] = 1 if there is an edge connecting vertices i and j, and A[i][j] = 0 otherwise.

// **Output format:**

// Your program should print the N numbers representing the degrees of all the vertices in the graph."


#include <iostream>
using namespace std;

int main(){
    int k, n, sum;
    sum = 0;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> k;
            sum += k;
        }
        cout << sum << " ";
        sum = 0;
    }
}
