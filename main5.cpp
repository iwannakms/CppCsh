#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, m;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter M: ";
    cin >> m;


    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 10 - 4;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    int countNegEl;
    for (int i = 0; i < n; i++) {
        countNegEl = 0;
        for (int j = 0; j < m; j++) {
            if (array[i][j] < 0) {
                countNegEl++;
            }
        }
        if (countNegEl == 2) {
            cout << "In row " << i << ") ----> 2 negative elements!" << endl;
        }
    }
}
