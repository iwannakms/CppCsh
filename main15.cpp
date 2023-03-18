#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(NULL));
    int n, m;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int array[n][m], count=0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 15 - 4;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout<<endl;
    for (int i = 0; i < n; i++) {
        int minElOfRow = array[i][0], maxElOfRow = array[i][0];
        for (int j = 0; j < m; j++) {
            if (maxElOfRow < array[i][j]) {
                maxElOfRow = array[i][j];
            }
            if (minElOfRow > array[i][j]) {
                minElOfRow = array[i][j];
            }
        }
        for (int l = 0; l <n; l++) {
            for (int k = 0; k < m; k++) {
                if (array[l][k] == maxElOfRow) {
                    swap(array[l][0], array[l][k]);
                }
            }
        }
        for (int l = 0; l <n; l++) {
            for (int k = 0; k < m; k++) {
                if (array[l][k] == minElOfRow) {
                    swap(array[l][m - 1], array[l][k]);
                }
            }
        }
    }
    cout<<"Array after moving: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}