#include <iostream>
using namespace std;
class Matrix
{
private:
	int rows;
	int columns;
	int** matrix;
public:

	Matrix(){}
	Matrix(int row, int column)
	{
		rows = row;
		columns = column;
		matrix = new int* [rows];
		for (int i = 0; i < rows; ++i)
		{
			matrix[i] = new int[columns];
		}
	}
	void SetValues()
	{
		for (int r = 0; r < rows; r++)
		{
			for (int c = 0; c < columns; c++)
			{
				cin >> matrix[r][c];
			}
		}
	}
	friend ostream& operator << (ostream&, Matrix&);
	Matrix operator+(Matrix& M)
	{
		Matrix temp(rows,columns);
		if (rows == M.rows && columns==M.columns)
		{
			for (int r = 0; r < rows; r++)
			{
				for (int c = 0; c < columns; c++)
				{
					temp.matrix[r][c] = M.matrix[r][c] + matrix[r][c];
				}
			}
		}
		return temp;
	}
	Matrix operator-(Matrix& M)
	{
		Matrix temp(rows, columns);
		if (rows == M.rows && columns == M.columns)
		{
			for (int r = 0; r < rows; r++)
			{
				for (int c = 0; c < columns; c++)
				{
					temp.matrix[r][c] = M.matrix[r][c] - matrix[r][c];
				}
			}
		}
		return temp;
	}
	Matrix operator*(Matrix& M)
	{
		Matrix temp(rows, columns);
		if (columns == M.rows)
		{
			for (int i=0; i<rows; i++)
			{
				for (int j = 0; j < M.columns; j++)
				{
					temp.matrix[i][j] = 0;
					for (int k = 0; k < columns; k++)
					{
						temp.matrix[i][j] = matrix[i][k] * M.matrix[k][j];
					}
				}
			}
		}
		return temp;
	}
	friend ostream& operator<<(ostream&, Matrix&);
	~Matrix()
	{
		for (int i = 0; i < rows; i++)
		{
			delete[]matrix[i];
		}
		delete[] matrix;
	}
};
ostream& operator<<(ostream& output, Matrix& M) {
	for (int i = 0; i < M.rows; i++) {
		for (int j = 0; j < M.columns; j++) {
			output << M.matrix[i][j] << " ";
		}
		output << endl;
	}
	return output;
}
int main()
{
	int row;
	cin >> row;
	int column;
	cin >> column;
	Matrix M(row,column);
	M.SetValues();
	int row1;
	int column1;
	cin >> row1;
	cin >> column1;
	Matrix M1(row1, column1);
	M1.SetValues();
	cout << M1;
	Matrix temp;
temp = M + M1;
	cout << temp;
	temp = M - M1;
	cout << temp;
	temp = M * M1;
	cout << temp;
	return 0;
}