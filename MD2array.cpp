//2d array
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
/*
void read(int ar[][3],int num){
	string sub[3]={"English ","CS ","Maths "};
	for(int j=0;j<3;j++){
		cout<<setw(4)<<sub[j];
	}
	cout<<endl;
	for(int i=0;i<num;i++){
		for(int j=0;j<3;j++){
			cout<<setw(6)<<ar[i][j];
		}
		cout<<endl;
	}
}
void sar(int ar[][3],int num){
	float a;
	for(int i=0;i<num;i++){
		float s=0;
		for(int j=0;j<3;j++){
			s+=ar[i][j];
		}
		a=s/3;
		cout <<endl<<"Sum of marks of student "<<i+1<<" is "<<s;
		cout <<endl<<"Avg marks in each subject of student "<<i+1<<" is "<<a;
	}
}
void sac(int ar[][3],int num){
	string sub[3]={"English ","CS ","Maths "};
	float a;
	for(int j=0;j<3;j++){
		float s=0;
		for(int i=0;i<num;i++){
			s+=ar[i][j];
		}
		a=s/num;
		cout <<endl<<"Sum of marks in  "<<sub[j]<<" is "<<s;
		cout <<endl<<"Avg marks in "<<sub[j]<<" is "<<a;
	}
	
}
void ee(int ar[][3],int num){
	float s=0,a;
	for(int i=0;i<num;i++){
		for(int j=0;j<3;j++){
			s+=ar[i][j];
		}
	}
	a=num*3;
	cout<<endl<<"Sum of each and every element = "<<s;
	cout<<endl<<"Avg of elements = "<<s/a;
}
int main(){
	int num;
	cout <<"Enter the no. of stuednts = ";
	cin >>num;
	int student[num][3];
	string sub[3]={"English ","CS ","Maths "};
	for(int i=0;i<num;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter the marks of stduent "<<i+1<<" in "<<sub[j]<<" = ";
			cin>>student[i][j];
		}
	}
	int ch;
	do{
	cout<<endl<<"--------------Menue Driven program from 2D Array-------------";
	cout <<endl<<" 1)Read \n 2)Sum\Avg of marks of each student \n 3)Sum\Avg of each subject \n 4)Sum\Avg of every element \n 5)Exit ";
	cout<<endl<<"Enter your choice= ";
	cin>>ch;
	switch(ch){
		case 1:
			read(student,num);
			break;
		case 2:
			sar(student ,num);
			break;
		case 3:
			sac(student,num);
			break;
		case 4:
			ee(student ,num);
			break;
		case 5:
			break;
		}
	}while(ch<5);
	return 0;	
}
*/

//Matrix addition
/*

int main(){
	int row1,col1;
	cout <<"Adition of two matrix!";
	cout <<endl<<"1st Matrix";
	cout <<endl <<"Enter the no. rows = ";
	cin >>row1;
	cout<<"Enter the no. of columns= ";
	cin>>col1;
	int mat1[row1][col1];
	cout <<endl<<"Enter the elements for 1st matrix= "<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat1[i][j];
		}
	}
	int row2,col2;
	cout <<endl<<"2nd Matrix";
	cout <<endl <<"Enter the no. rows = ";
	cin >>row2;
	cout<<"Enter the no. of columns= ";
	cin>>col2;
	int mat2[row2][col2];
	if ( row1==row2 & col1==col2){
		cout <<endl<<"Enter the elements for 2nd matrix= "<<endl;
		for(int i=0;i<row2;i++){
			for(int j=0;j<col2;j++){
				cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
				cin>>mat2[i][j];
			}
		}
		//matrix addition
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				mat1[i][j]+=mat2[i][j];
			}
		}
		//read matrix addition array
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				cout <<setw(4)<<mat1[i][j];
			}
			cout<<endl;
		}
	}
	else
		{cout<<endl<<"Matrix addition is not possible! ";
		cout <<endl<<"Number of rows and columns has to same for matrix addition!";}
}

*/
//matrix subtraction

/*
int main(){
	cout <<"Subtraction of two matrix!";
	cout <<endl<<"1st Matrix";
	int row1,col1;
	cout <<endl<<"Enter the no. rows = ";
	cin >>row1;
	cout<<"Enter the no. of columns= ";
	cin>>col1;
	int mat1[row1][col1];
	cout <<endl<<"Enter the elements for 1st matrix= "<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat1[i][j];
		}
	}
	cout <<endl<<"2st Matrix";
	int row2,col2;
	cout <<endl<<"Enter the no. rows = ";
	cin >>row2;
	cout<<"Enter the no. of columns= ";
	cin>>col2;
	int mat2[row2][col2];
	if (row1 == row2 & col1 == col2 )
	{
		cout <<endl<<"Enter the elements for 2nd matrix= "<<endl;
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
				cin>>mat2[i][j];
			}
		}
		//matrix subtraction
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				mat1[i][j]-=mat2[i][j];
			}
		}
		//read matrix subtraction array
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				cout <<setw(4)<<mat1[i][j];
			}
			cout<<endl;
		}
	}
	else
		{
		cout <<endl<<"Matrix subtraction is not possible ";
		cout<<endl<<" Both matrix has to have same number of rows and columns!";}
}

*/


//Sum of diagonal elements
/*

int main(){
	int rows,col;
	cout <<"Sum of diagonal elements of a maatrix!";
	cout <<endl<<"Enter the no. of rows= ";
	cin >>rows;
	cout <<endl<<"Enter the no. of columns= ";
	cin >>col;
	int ar[rows][col]; 
	if (rows == col){
		//read values
		for(int i=0;i<rows;i++)
			for (int j=0;j<col;j++)
				{cout<<endl<<"Enter the element at row "<<i<<" column "<<j<<" = ";
				cin>>ar[i][j];}
		for(int i=0;i<rows;i++)
			{for (int j=0;j<col;j++)
				cout<<setw(4)<<ar[i][j];
			cout <<endl;
			}
		int sum=0;
		for(int i=0;i<rows;i++)
			for (int j=0;j<col;j++)
				if (i==j)
					sum+=ar[i][j];
		cout <<endl<<"Sum of Diagonals element in the matrix= "<<sum;
	}
	else
		cout <<"Diagonals elements exists only for square matrix means rows must be equal to columns!";
}

*/


//Matrix multiplication


/*
int main(){
	int row1,col1;
	cout<<"Matrix multiplication!";
	cout<<endl<<"Matrix 1";
	cout<<endl<<"Enter no of rows= ";
	cin >>row1;
	cout<<endl<<"Enter no of columns= ";
	cin >>col1;
	int mat1[row1][col1];
	for(int i=0;i<row1;i++)
		for(int j=0;j<col1;j++)
			{cout<<endl<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat1[row1][col1];}
	int row2,col2;
	cout<<endl<<"Matrix 2";
	cout<<endl<<"Enter no of rows= ";
	cin >>row2;
	cout<<endl<<"Enter no of columns= ";
	cin >>col2;
	int mat2[row2][col2];
	if(row1==col2 & row2==col1){
		for(int i=0;i<row2;i++)
			for(int j=0;j<col2;j++)
				{cout<<endl<<"Enter the element at row "<<i<<" column "<<j<<" = ";
				cin>>mat2[row2][col2];}
		int mul[row1][col2];
		for(int i=0;i<row1;i++)
			for(int j=0;j<col2;j++)
				{int mul[i][j]={0};
				for(int k=0;k<col1;k++)
					mul[i][j]+=mat1[i][k]*mat2[k][j];
				}
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++){
				cout <<setw(4)<<mul[i][j];
			}
	}
}
	else
		{cout <<endl<<"Matrix multiplication is not possible";
		cout<<endl<<"(mxn) matrix multiply with only (nxm)";}
}

*/

//matrix transpose


/*

int main (){
	int r,c;
	cout<<"Enter no of rows= ";
	cin>>r;
	cout <<"Enter no of columns= ";
	cin >>c;
	int ar[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			{cout<<endl<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin >>ar[i][j];}
	cout<<endl<<"Original matrix= "<<endl;
	for(int i=0;i<r;i++)
		{for(int j=0;j<c;j++)
			cout<<setw(4)<<ar[i][j];
		cout<<endl;}
	cout<<endl<<"Traspose matrix= "<<endl;
	for(int j=0;j<c;j++)
		{for(int i=0;i<r;i++)
			cout<<setw(4)<<ar[i][j];
		cout<<endl;}
}

*/








