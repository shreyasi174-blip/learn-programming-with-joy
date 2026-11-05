
#include <iostream>
using namespace std;

class Vector
{
    int x, y;

public:
    void getData()
    {
        cin >> x >> y;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    Vector operator +(Vector v)
    {
        Vector temp;
        temp.x = x + v.x;
        temp.y = y + v.y;
        return temp;
    }

    Vector operator -(Vector v)
    {
        Vector temp;
        temp.x = x - v.x;
        temp.y = y - v.y;
        return temp;
    }

    int operator *(Vector v)
    {
        return x * v.x + y * v.y;
    }
};

class Matrix
{
    int a[2][2];

public:
    void getData()
    {
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    void display()
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator +(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];

        return temp;
    }

    Matrix operator -(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 2; j++)
                temp.a[i][j] = a[i][j] - m.a[i][j];

        return temp;
    }

    Matrix operator *(Matrix m)
    {
        Matrix temp;

        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                temp.a[i][j] = 0;

                for(int k = 0; k < 2; k++)
                    temp.a[i][j] += a[i][k] * m.a[k][j];
            }
        }

        return temp;
    }
};

int main()
{
    Vector v1, v2, sum, sub;
    int dot;

    cout << "Enter first vector: ";
    v1.getData();

    cout << "Enter second vector: ";
    v2.getData();

    sum = v1 + v2;
    sub = v1 - v2;
    dot = v1 * v2;

    cout << "Vector Addition: ";
    sum.display();

    cout << "Vector Subtraction: ";
    sub.display();

    cout << "Dot Product: " << dot << endl;

    Matrix m1, m2, add, minus, mul;

    cout << "\nEnter first matrix: " << endl;
    m1.getData();

    cout << "Enter second matrix: " << endl;
    m2.getData();

    add = m1 + m2;
    minus = m1 - m2;
    mul = m1 * m2;

    cout << "Matrix Addition: " << endl;
    add.display();

    cout << "Matrix Subtraction: " << endl;
    minus.display();

    cout << "Matrix Multiplication: " << endl;
    mul.display();

    return 0;
}
