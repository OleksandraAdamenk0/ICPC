// "An undirected graph is given by a list of edges. Find the degrees of all vertices in the graph.

// Input format:

// The first line of the input contains two integers, N (1 ≤ N ≤ 100) representing the number of vertices in the graph and M (1 ≤ M ≤ (N - 1) / 2) representing the number of edges. This is followed by M lines, each containing two integers representing an edge in the graph.

// Output format:

// The program should calculate and print the degrees of all vertices in the graph."



#include <iostream>
using namespace std;

int main(){
    int n, m, a;
    cin >> n >> m;
    int *mas = new int[n];
    for (int i = 0; i < n; ++i) {
        mas[i] = 0;
    }
    for (int i = 0; i < m; ++i) {
        cin >> a;
        mas[a - 1]++;
        cin >> a;
        mas[a - 1]++;
    }
    for (int i = 0; i < n; ++i) {
        cout << mas[i] << " ";
    }
    free(mas);
    return 0;
}
