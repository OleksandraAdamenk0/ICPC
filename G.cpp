// Given a square matrix of dimension x.№ of zeros and ones, determine whether an deep matrix can be the adjacency matrix of a simple undirected graph.

// Input format

// The first line of the input data contains the number K (1≤ K≤10) - the number of matrices being tested. Followed by. K. blocks, each of which describes one matrix. For each block, the number N (1 ≤ N ≤ 100) matrix dimension is first specified, and then the matrix of rows itself is described by the number of numbers, each of which is 0 or 1.

// Output format

// For each test matrix, the program should print “YES” in a separate line if the matrix can be an adjacency matrix of a non-directed graph and “NO” otherwise


#include <iostream>
using namespace std;

int check(int **mas, int n){
    int a = (n % 2 == 1)? n / 2 + 1: n / 2;
    for (int j = 0; j < a; ++j) {
        for (int l = j; l < n; ++l) {
            if (j == l && mas[j][l] == 1){
                return 0;
            }
            if (mas[j][l] != mas[l][j]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int k, n;
    cin >> k;

    for (int i = 0; i < k; ++i) {
        cin >> n;
        int **mas = new int*[n];
        for (int j = 0; j < n; ++j) {
            mas[j] = new int[n];
            for (int l = 0; l < n; ++l) {
                cin >> mas[j][l];
            }
        }
        if (check(mas, n) == 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        for (int j = 0; j < n; ++j) {
            free(mas[j]);
        }
        free(mas);
    }
    return 0;
}
