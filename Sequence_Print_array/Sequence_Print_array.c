#include<stdio.h>
#include<Windows.h>
void Sequence_Print_array(int array[4][4])
{
	int i = 0;
	int j = 0;
	int row_l = 0, row_r = 4;
	int col_l = 0,col_r=4;
	int count = 0;
	int num = row_r*col_r;
	while (count < num)
	{
		for (j = col_l; j < col_r; j++)//打印第一行
		{
			printf("%d ", array[i][j]);
			count++;
		}
		row_l++;
		j--;
		for (i = row_l; i < row_r; i++)//打印最右边一列
		{
			printf("%d ", array[i][j]);
			count++;
		}
		col_r--;
		i--;
		for (j = col_r; j >= col_l; j--)//打印最下面一行
		{
			printf("%d ", array[i][j]);
			count++;
		}
		row_r--;
		j++;
		for (i = row_r; i >= row_l; i--)//打印最左边第一列
		{
			printf("%d ", array[i][j]);
			count++;
		}
		col_l++;
		i++;
	}
}
int main()
{
	int array[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 } };
	Sequence_Print_array(array);
	system("pause");
	return 0;
}