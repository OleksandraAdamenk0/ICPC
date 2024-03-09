// A directed graph is defined by an adjacency matrix. Output its list representation ribs

// Input format

// The first line of the input data specifies the number N (1 ≤ N ≤ 100) the number of vertices in the graph. Next comes the number of lines by number of numbers of the adjacency matrix of the graph C. In the adjacency matrix, element 6. 1 if there is an edge connecting vertices і and ј. G. -0- otherwise.

// Output format

// Your program should print a list of edges in a given graph. Each edge is displayed like this: first, the number of the vertex from which the edge exits, then the number of the vertex into which the edge enters.


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    short int temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            if (temp == 1){
                cout << i + 1 << " " << j + 1<< endl;
            }
        }
    }
    return 0;
}
