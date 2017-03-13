#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include<cstring>
using namespace std;
typedef  int Matrix[1000][1000];//òèï ìàòðèö³
int matr1[1000][1000];
Matrix À;   //âèõ³äíà ìàòðèöÿ 
int i, j;
int n, m; 				//ê³ëüê³ñòü ðÿäê³â ³ ñòîâï÷èê³â ìàòðèö³
void input(Matrix);				// ãåíåðàö³ÿ ìàòðèö³
void output(Matrix);			// âèâåäåííÿ ìàòðèö³ 
void transp(Matrix); 		//âèäàëåííÿ ðÿäêà ìàòðèö³
									//=============== ãîëîâíà ôóíêöiÿ ================ 
int main()
{
			//íîìåð ðÿäêà, ùî âèäàëÿºòüñÿ
	cout << "Input n, m: ";
	cin >> n >> m; 			//ââåñòè ðîçì³ðí³ñòü ìàòðèö³
	input(À);				//ãåíåðóâàòè ìàòðèöþ
	output(À);			//âèâåñòè çãåíåðîâàíó ìàòðèöþ
	transp(À);		//âèäàëèòè âêàçàíèé ðÿäîê
	cout << endl;
	//output(À);			//âèâåñòè îòðèìàíó ìàòðèöþ
	system("pause");
}
//============== ãåíåðàö³ÿ ìàòðèö³ =================
void input(Matrix matr)
{
	srand(time(NULL));
	for ( i = 0; i<n; i++)
		for ( j = 0; j<m; j++)
			matr[i][j] = rand() % 9; 	//ãåíåðàö³ÿ ïîòî÷íîãî åëåìåíòà ìàòðèö³
}
//=============== âèâåäåííÿ ìàòðèö³ =================
void output(Matrix matr)
{
	for ( i = 0; i<n; i++)
	{
		for ( j = 0; j<m; j++)
			cout << setw(4) << matr[i][j]; 	//âèâåäåííÿ åëåìåíò³â ðÿäêà
		cout << endl; 				//ïåðåõ³ä íà íîâèé ðÿäîê
	}
}
//======== âèäàëåííÿ âêàçàíîãî ðÿäêà ìàòðèö³ ========
void transp(Matrix matr)
{
	int mas;
	for (i = 0; i < n; i++) //ïåðåãëÿä ðÿäê³â, ÿê³ áóäóòü  çñóâàòèñÿ
	{
		for (j = 0; j < m; j++)
		{

			matr1[i][j] = matr[j][i];
			//cout << matr1[i][j];
			//	mas = matr[j][i];

		}
		for (i = 0; i < m; i++) //ïåðåãëÿä ðÿäê³â, ÿê³ áóäóòü  çñóâàòèñÿ
		{
			for (j = 0; j < n; j++)
			{

				cout << matr1[i][j] << " ";

			}
			cout << "\n";
		}

	}
}
