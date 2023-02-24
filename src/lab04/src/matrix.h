#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
	int rows;
	int cols;
	double ** grid = nullptr;
	double ** grid_temp = nullptr;
	public:
	void createMatrix();//Creates the matrix
	void printMatrix();//Prints the contents of the matrix
	void addMatrix();//Adds the matrix
	double getMax();//Returns max element in the matrix
	bool findElement(int no); //Determine if element exists in the matrix
	void changeElement(int r, int c, int no);//Changes an element in the matrix to a specified number
	void multiplyMatrix();//Multiply the matrix
	void transposeMatrix();//Transpose the matrix
	~matrix();//Destructor
};

#endif
