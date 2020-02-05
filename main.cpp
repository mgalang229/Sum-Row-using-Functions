#include <iostream>
using namespace std;
void sumRow(int a[100][100], int rows, int columns, int sum);
int main(){
    int arr[100][100];
    int r, c, s = 0;
    cout << "Enter order of matrix: ";
    cin >> r >> c;
    cout << "Enter " << r << " x " << c << " matrix: \n";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Given matrix:\t\tRow Sum\n";
    sumRow(arr, r, c, s);
    cout << endl;
    return 0;
}
void sumRow(int a[100][100], int rows, int columns, int sum){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << a[i][j] << "\t";
            sum += a[i][j];
        }
        cout << "\t\t" << sum << endl;
        sum = 0;
    }
}
