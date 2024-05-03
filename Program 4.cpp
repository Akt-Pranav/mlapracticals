//Program 4
#include <iostream>
using namespace std;
class MAT {
private:
    int rows, cols;
    int **data;
public:
    // Function to create and input matrix
    void create(int m, int n) {
        rows = m;
        cols = n;
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> data[i][j];
            }
        }
    }
    void show() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    void del() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    MAT add(const MAT& other) const {
        MAT result;
        result.rows = rows;
        result.cols = cols;
        result.data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            result.data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
    MAT subtract(const MAT& other) const {
        MAT result;
        result.rows = rows;
        result.cols = cols;
        result.data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            result.data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }
    MAT multiply(const MAT& other) const {
        MAT result;
        result.rows = rows;
        result.cols = other.cols;
        result.data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            result.data[i] = new int[result.cols];
            for (int j = 0; j < result.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
    MAT transpose() const {
        MAT result;
        result.rows = cols;
        result.cols = rows;
        result.data = new int*[cols];
        for (int i = 0; i < cols; ++i) {
            result.data[i] = new int[rows];
            for (int j = 0; j < rows; ++j) {
                result.data[i][j] = data[j][i];
            }
        }
        return result;
    }
};
int main() {
    MAT mat1, mat2, result;
    int rows, cols;

    // Input the dimensions of matrices from the user and input values
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> rows >> cols;
    mat1.create(rows, cols);
    cout << endl << "The 1st Matrix" << endl;
    mat1.show();
    cout << endl;
    cout << "The number of rows and columns for matrix 2: ";
    cout << rows << "*" << cols << endl;
    mat2.create(rows, cols);
    cout << endl << "The 2nd Matrix" << endl;
    mat2.show();
    cout << endl;
    result = mat1.add(mat2);
    cout << "Matrix 1 + Matrix 2:" << endl;
    result.show();
    cout << endl;
    result = mat1.subtract(mat2);
    cout << "Matrix 1 - Matrix 2:" << endl;
    result.show();
    cout << endl;
    result = mat1.multiply(mat2);
    cout << "Matrix 1 * Matrix 2:" << endl;
    result.show();
    cout << endl;
    cout << "Transpose of Matrix 1:" << endl;
    result = mat1.transpose();
    result = mat2.transpose();
    result.show();
    cout << endl;
    // Delete matrices to free memory
    mat1.del();
    mat2.del();
    return 0;
}
