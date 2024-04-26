#include <iostream>

using namespace std;

int main() {
    int a , b, n;
    cout << "ENTER\n";
    cout << "A : ";
    cin >> a;
    cout << "\nB : ";
    cin >> b;
    cout << "\nN : ";
    cin >> n;
    int A[a][n], B[n][b], C[a][b];
    cout << "A\n";
    for (int index = 0 ; index < a; index++)
    {
        for (int index_2 = 0; index_2 < n; index_2++)
        {
            cout << "A [" << index << "]["<<index_2<<"] : ";
            cin >> A[index][index_2];
            cout << endl;
        }
    }

    cout << "B\n";
    for (int index = 0 ; index < n; index++)
    {
        for (int index_2 = 0; index_2 < b; index_2++)
        {
            cout << "B [" << index << "]["<<index_2<<"] : ";
            cin >> B[index][index_2];
            cout << endl;
        }
    }

    for (int index_1 = 0; index_1 < a; index_1++)
    {
        for (int index_2 = 0; index_2 < b; index_2 ++)
        {
            int temp_v = 0;
            for (int index_3 = 0; index_3 < n; index_3++)
                temp_v += (A[index_1][index_3] * B[index_3][index_2]);
            C[index_1][index_2] = temp_v;
        }
    }

    cout <<"\nC\n";
    for (int index = 0 ; index < a; index++)
    {
        for (int index_2 = 0; index_2 < b; index_2++)
        {
            cout << "C [" << index << "]["<<index_2<<"] : ";
            cout << C[index][index_2];
            cout << endl;
        }
    }
    return 0;
}
