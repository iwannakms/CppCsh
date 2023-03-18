#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

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

    int maximum = array[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if (abs(array[i][j] > abs(maximum))){
                maximum = array[i][j];
            }
        }
    }
    cout << endl << "Max absolute value = |" << maximum << "|" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] /= maximum;
            cout << array[i][j] << "\t";
        }
        cout << endl;

    }
    return 0;
}
