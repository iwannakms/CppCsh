#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{

    srand((unsigned)time(NULL));
    int n, m, pos, neg, k;
    cout << "Enter N:";
    cin >> n;
    cout << "Enter M:";
    cin >> m;
    int** A = new int*[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 20-12;
            cout.width(3);
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Search row: " << endl;
    k = 0;
    for (int i = 0; i < n; i++)
    {
        pos = neg = 0;
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] > 0)
                pos++;
            if (A[i][j] < 0)
                neg++;
        }
        if (pos > neg)
        {
            cout << i + 1 << endl;
            k++;
        }
    }
    if (!(k))
        cout << "Not row!" << endl;
    for (int i = 0; i < n; i++)
    {
        delete [] A[i];
    }
    delete [] A;

    return 0;
}