// Example with Copy Elision (implicit compiler-managed move constructor)
Matrix operator+(const Matrix &x, const Matrix &y) {
    Matrix res;
    // for all i, j: res[i][j] = x[i][j] + y[i][j];
    return res;
}
// user-code
Matrix m1, m2;
Matrix m3 = m1 + m2;

// pre-C++11 style (BAD, DON'T DO)
Matrix *add(const Matrix &x, const Matrix &y) {
    Matrix *ptr = new Matrix;
    // for all i, j: res[i][j] = x[i][j] + y[i][j];
    return ptr;
}
// user-code
// Matrix m1, m2;
Matrix *m3 = add(m1, m2);
//... do stuff
delete m3;  // VERY easy to forget. Often leads to memory leaks.
