#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int n, m;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int array[n][m], count=0, max = 0, min = 0, avg = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 15 - 4;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    min = array[0][0];
    int element = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (max < array[i][j]) {
                max = array[i][j];
            }
            if (min > array[i][j]) {
                min = array[i][j];
            }
            sum += array[i][j];
            element++;
        }
    }
    int average = sum / element;
    avg = (min + max) / 2;
    cout << "Average of Min Max=" << avg << endl;
    cout << "Average of all=" << average << endl;
    cout << "Difference=" << average - avg << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j);
    }
}