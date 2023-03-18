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
    int tempMax = 0;
    int tempMin = 0;
    for(int i=0; i < n; i++){
        int sumColumn=0, maxSumColumn=0, sumRow=0, minSumRow=0;
        for(int j=0; j<m; j++){
            sumColumn += array[j][i];
            sumRow += array[i][j];
        }
        cout<<"Column sum "<<i<<" = "<<sumColumn<<endl;
        cout<<"Line amount "<<i<<" = "<<sumRow<<endl;
        if(sumColumn >= tempMax){
            tempMax = sumColumn;
            int columnOfMaxSum = i;
        }
        if(sumRow <= tempMin){
            tempMin = sumRow;
            int rowOfMinSum = i;
        }
        int tempSumRow = sumRow;
        int tempSumCol = sumColumn;
    }
    int minSumRow = tempMin;
    int maxSumColumn = tempMax;
    cout<<"The column with the maximum amount= "<<maxSumColumn<<endl;
    cout<<"The line with the minimum amount = "<<minSumRow<<endl;
    return 0;
}
