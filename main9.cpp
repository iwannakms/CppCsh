#include <iostream>
#include <ctime>
#include <vector>


using namespace std;

int main() {
    srand(time(NULL));

    int n, m;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int array[n][m];
    vector<int> positive_values_indexes;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 41 - 20;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        int positive_row = 0;
        for (int j = 0; j < m; j++) {
            if (array[i][j] <= 0) {
                break;
            }
            if (j == m - 1) {
                positive_row = i;
            }
        }
        if (positive_row != 0) {
            positive_values_indexes.push_back(positive_row);
        }
    }

    cout << "Rows with positive values:" << endl;
    for (int i: positive_values_indexes) {
        int maximum = array[i][0];
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << "\t";
            if (array[i][j] > maximum) {
                maximum = array[i][j];
            }
        }
        cout << endl << "Max value = " << maximum << endl;
    }

    return 0;
}