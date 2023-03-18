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
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array[i][j] == (i*j)){
                cout<<"Number "<<array[i][j]<<" equals the product of its indices i="<<i<<" and j="<<j<<endl;
                count+=1;
            }
        }
    }
    cout<<count<<" element(s) equals the product of its indices"<<endl;
    return 0;
}
