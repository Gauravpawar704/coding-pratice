#include <iostream>
#include <cstdio>
using namespace std;

class matrix
{
    int rows;
    int cols;
    float *ptr;

public:
    matrix(int rr, int cc, float *data)
    {
        rows = rr;
        cols = cc;
        ptr = new float[rows * cols];

        float *p = ptr;
        for (int i = 0; i < rows * cols; i++)
        {
            if (data == NULL)
            {
                *p = 0;
            }
            else
            {
                *p = data[i];
            }
            p++;
        }
    }
    ~matrix()
    {
        delete[] ptr;
    }

    void setVal(int i, int j, float value)
    {
        *(ptr + i * cols + j) = value;
    }

    float getVal(int i, int j) const
    {
        return *(ptr + i * cols + j);
    }

    void print() const
    {
        float *p = ptr;
        char output[20];

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sprintf(output, "%10.2f", *p);
                cout << output;
                p++;
            }
            cout << "\n";
        }
        cout << "\n";
    }

    friend matrix operator*(matrix m1, matrix m2);
};
matrix operator*(matrix m1, matrix m2)
{
    matrix result(m1.rows, m2.cols, NULL);

    if (m1.cols != m2.rows)
    {
        return result;
    }

    for (int i = 0; i < m1.rows; i++)
    {
        for (int j = 0; j < m2.cols; j++)
        {
            float sum = 0;
            for (int k = 0; k < m1.cols; k++)
            {
                sum += m1.getVal(i, k) * m2.getVal(k, j);
            }
            result.setVal(i, j, sum);
        }
    }
    return result;
};

int main()
{
    float data1[] = {1, 2, 3, 4, 5, 6};
    float data2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    matrix m1(3, 2, data1);
    matrix m2(2, 4, data2);

    cout << "Matrix 1:\n";
    m1.print();

    cout << "Matrix 2:\n";
    m2.print();

    cout << "Product matrix:\n";
    matrix m3 = m1 * m2;
    m3.print();

    return 0;
}