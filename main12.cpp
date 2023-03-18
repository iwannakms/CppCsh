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
    int array[n][m];
    int k=0,sum=0;
    int min, max,minCol,minRow,maxCol,maxRow;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 15 - 4;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    min = array[0][0];
    max = array[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (min > array[i][j]) {
                min = array[i][j];
                minCol=i;
                minRow=j;
            }
            if (max < array[i][j]) {
                max = array[i][j];
                maxCol=i;
                maxRow=j;
            }
        }
    }
    cout<<"nums: "<<endl;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            if (i == minCol && j == minRow) { k+=1;
                std::cout << array[i][j] << ' ';
                sum += array[i][j];
                continue;}
            if (i == maxCol && j == maxRow) { k+=1;
                std::cout << array[i][j] << ' ';
                sum += array[i][j];
                continue; }
            if (k == 1) {
                std::cout << array[i][j] << ' ';
                sum += array[i][j];
            }
        }
    cout<<"Sum ---> "<< sum << endl;

}
