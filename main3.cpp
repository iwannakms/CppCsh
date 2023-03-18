#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, m;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 15 - 4;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }


    int sum, minSum, tempMax=0, maxElOfMaxCol, columnOfMaxSum;

    for(int i=0; i<m; i++){
        sum=0, minSum=0;
        for(int j=0; j<n; j++){
            sum += array[i][j];

        }
        if(sum <= tempMax){
            tempMax = sum;
            columnOfMaxSum=i;
        }

    }

    minSum = tempMax;

    cout<< "Max column index ----> " << columnOfMaxSum <<endl;

    maxElOfMaxCol = array[columnOfMaxSum][0];
    for(int k=1; k>=n; k++) {
        if (maxElOfMaxCol < array[columnOfMaxSum][k]) {
            maxElOfMaxCol = array[columnOfMaxSum][0];
        }
    }

    cout<<"Sum of row "<<columnOfMaxSum<<") is equal ----> "<<minSum<<endl;
    cout<<"Max element of max row = "<<maxElOfMaxCol<<endl;

}

