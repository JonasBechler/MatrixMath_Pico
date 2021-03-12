/*
 *  MatrixMath.h Library for Matrix Math
 *
 *  Created by Charlie Matlack on 12/18/10.
 *  Modified from code by RobH45345 on Arduino Forums, algorithm from
 *  NUMERICAL RECIPES: The Art of Scientific Computing.
 *  Modified to work with Arduino 1.0/1.5 by randomvibe & robtillaart
 *  Made into a real library on GitHub by Vasilis Georgitzikis (tzikis)
 *  so that it's easy to use and install (March 2015)
 */

#define mtx_type double

class MatrixMath
{
public:
	//MatrixMath();
	void Copy(mtx_type *A, int n, int m, mtx_type *B);
	void Multiply(mtx_type *A, mtx_type *B, int m, int p, int n, mtx_type *C);
	void Add(mtx_type *A, mtx_type *B, int m, int n, mtx_type *C);
	void Subtract(mtx_type *A, mtx_type *B, int m, int n, mtx_type *C);
	void Transpose(mtx_type *A, int m, int n, mtx_type *C);
	void Scale(mtx_type *A, int m, int n, mtx_type k);
	int Invert(mtx_type *A, int n);

private:
	float abs(float x);
};

extern MatrixMath Matrix;
