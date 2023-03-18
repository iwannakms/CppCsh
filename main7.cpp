#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {

    setlocale(0, "russian");

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


    int sum, maxSum, tempMax=0, minElOfMaxCol, columnOfMaxSum;

    for(int i=0; i<m; i++){
        sum=0, maxSum=0;
        for(int j=0; j<n; j++){
            sum += array[j][i];

        }
        if(sum >= tempMax){
            tempMax = sum;
            columnOfMaxSum=i;
        }

    }

    maxSum = tempMax;

    cout<< "Max column index ----> " << columnOfMaxSum <<endl;


    minElOfMaxCol = array[0][columnOfMaxSum];
    for(int k=1; k<n; k++) {
        if (minElOfMaxCol > array[k][columnOfMaxSum]) {
            minElOfMaxCol = array[k][columnOfMaxSum];
        }
    }



    cout<<"Sum of column "<<columnOfMaxSum<<") is equal ----> "<<maxSum<<endl;
    cout<<"Min element of max column = "<<minElOfMaxCol<<endl;

}

