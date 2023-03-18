#include <iostream>
#include <ctime>


using namespace std;

int main() {
    srand(time(NULL));

    int n, m, sum;
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

    sum = 0;
    for (int j = 0; j < m; j++) {
        sum += array[0][j];
    }
    double first_row_avg = float(sum) / float(m);
    cout << "First row average: " << first_row_avg << endl;

    sum = 0;
    for (int j = 0; j < m; j++) {
        sum += array[n - 1][j];
    }
    double last_row_avg = float(sum) / float(m);
    cout << "Last row average: " << last_row_avg << endl;

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i][0];
    }
    double first_col_avg = float(sum) / float(n);
    cout << "First column average: " << first_col_avg << endl;

    sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i][m - 1];
    }
    double last_col_avg = float(sum) / float(n);
    cout << "Last column average: " << last_col_avg << endl;

    return 0;
}