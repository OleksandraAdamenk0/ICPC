// A simple undirected graph is defined by an adjacency matrix. Print its representation in

// Input format

// The first line of the input data specifies the number N (1 ≤ N ≤ 100) the number of vertices in the graph. This is followed by the number of rows by number of numbers of the adjacency matrix of the graph G. In the adjacency matrix, the element Gij = 1 if there is an edge connecting vertices j and i Gij = 0 otherwise.

// Your program should print a list of edges in a given graph.


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    short int temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            if (j < i){
                continue;
            }
            if (temp == 1){
                cout << i + 1 << " " << j + 1<< endl;
            }
        }
    }
    return 0;
}
