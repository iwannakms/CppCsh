#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));

    int n, m;
    bool has_two_max_digits;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        if (has_two_max_digits) {
            cout << "This array has two elements with maximum values" << endl;
            break;
        }

        int maximum = array[i][0], index = 0;
        for (int j = 0; j < m; j++) {
            if (array[i][j] > maximum) {
                maximum = array[i][j];
                index = j;
            }
        }

        for (int k = 0; k < m; k++) {
            if (array[i][k] == maximum and k != index) {
                has_two_max_digits = true;
                break;
            }
        }
    }

    return 0;
}