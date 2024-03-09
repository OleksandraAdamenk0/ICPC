// Input format

// The first line of the input data specifies the number N (1≤ N ≤100) of the number of vertices in the graph. This is followed by the number of lines by number of numbers of the adjacency matrix of graph 6. In the adjacency matrix, element 6. = 1 if there is an edge connecting vertices і and ј, C.3 = 0 - otherwise.

// Output format

// Your program should print one number: the number of edges in the graph.

#include <iostream>
using namespace std;

int main(){
    int n, sum;
    cin >> n;
    sum = 0;
    short int temp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> temp;
            sum += temp;
        }
    }
    cout << sum / 2;
    return 0;
}
