#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int rows = 0; int cols = 0;
	cout << "������� ����� ����� �������: " << endl;
	cin >> rows;
	cout << "������� ����� �������� �������: " << endl;
	cin >> cols;

	//int *arr = new int[];//�������� ����������� �������
	int **arr = new int*[rows]; //������� 2-������ ������ - ������ ����������

	for (int i = 0; i < rows; i++)//��������� ������ ���������� �� �������
	{
		*(arr+i) = new int[cols];//������ ������ ������� �������� ��������� �� ������ ���������� ������
		//arr[i] = new int[cols];//��� ���
	}
	//=============================================================
	//���������� � ����� ������� �������:
	for (int i = 0; i < rows; i++)//������� ���� ����� �� �������� (rows)
	{
		for (int j = 0; j < cols; j++)//���������� ���� ����� �� �������� (cols)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << "\t";
			
		}
		cout << endl; //������� ��������� �� ������� �����
	}	   
	//=============================================================

	//������� ������ ���������� � �������� �������: ������� ��������� �� �������, ����� ������ ����������:
	for (int i = 0; i < rows; i++)//��������� ������ ���������� �� �������
	{
		delete[] *(arr + i); 	
		//delete[] arr[i];//��� ���
	}
	delete [] arr;//�������� �������� ������������ ������ ���������� �� ������, ������ �����������
}