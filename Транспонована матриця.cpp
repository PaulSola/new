#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
typedef  int Matrix[1000][1000];//тип матриці
int matr1[1000][1000];
Matrix А;   //вихідна матриця 
int i, j;
int n, m; 				//кількість рядків і стовпчиків матриці
void input(Matrix);				// генерація матриці
void output(Matrix);			// виведення матриці 
void transp(Matrix); 		//видалення рядка матриці
									//=============== головна функцiя ================ 
int main()
{
			//номер рядка, що видаляється
	cout << "Input n, m: ";
	cin >> n >> m; 			//ввести розмірність матриці
	input(А);				//генерувати матрицю
	output(А);			//вивести згенеровану матрицю
	transp(А);		//видалити вказаний рядок
	cout << endl;
	//output(А);			//вивести отриману матрицю
	system("pause");
}
//============== генерація матриці =================
void input(Matrix matr)
{
	srand(time(NULL));
	for ( i = 0; i<n; i++)
		for ( j = 0; j<m; j++)
			matr[i][j] = rand() % 9; 	//генерація поточного елемента матриці
}
//=============== виведення матриці =================
void output(Matrix matr)
{
	for ( i = 0; i<n; i++)
	{
		for ( j = 0; j<m; j++)
			cout << setw(4) << matr[i][j]; 	//виведення елементів рядка
		cout << endl; 				//перехід на новий рядок
	}
}
//======== видалення вказаного рядка матриці ========
void transp(Matrix matr)
{
	int mas;
	for (i = 0; i < n; i++) //перегляд рядків, які будуть  зсуватися
	{
		for (j = 0; j < m; j++)
		{

			matr1[i][j] = matr[j][i];
			//cout << matr1[i][j];
			//	mas = matr[j][i];

		}
		for (i = 0; i < m; i++) //перегляд рядків, які будуть  зсуватися
		{
			for (j = 0; j < n; j++)
			{

				cout << matr1[i][j] << " ";

			}
			cout << "\n";
		}

	}
}