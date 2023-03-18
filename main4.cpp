#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main() {

    int n, m;
    cout<<"Enter N: ";
    cin>>n;
    cout<<"Enter M: ";
    cin>>m;
    int array[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = rand() % 10;
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    int count;
    for(int i=0; i<n; i++){
        count=0;
        for(int j=0; j<m; j++){
            for(int k=j+1; k<m; k++){
                if(array[j][i] == array[k][i]){
                    count++;
                }
            }

        }
        if(count == m){
            cout<<"All elements of column "<<i<<" are the same"<<endl;
        }
        else if(count > 0){
            cout << "In column  " << i << ") ---> " << count << " identical elements" << endl;
        }
    }

}
