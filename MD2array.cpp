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
	int row,col;
	cout <<"Enter the no. rows = ";
	cin >>row;
	cout<<"Enter the no. of columns= ";
	cin>>col;
	int mat1[row][col];
	cout <<endl<<"Enter the elements for 1st matrix= "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat1[i][j];
		}
	}
	int mat2[row][col];
	cout <<endl<<"Enter the elements for 2nd matrix= "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat2[i][j];
		}
	}
	//matrix addition
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			mat1[i][j]+=mat2[i][j];
		}
	}
	//read matrix addition array
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout <<setw(4)<<mat1[i][j];
		}
		cout<<endl;
	}
}
*/

//matrix subtraction

/*
int main(){
	int row,col;
	cout <<"Enter the no. rows = ";
	cin >>row;
	cout<<"Enter the no. of columns= ";
	cin>>col;
	int mat1[row][col];
	cout <<endl<<"Enter the elements for 1st matrix= "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat1[i][j];
		}
	}
	int mat2[row][col];
	cout <<endl<<"Enter the elements for 2nd matrix= "<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the element at row "<<i<<" column "<<j<<" = ";
			cin>>mat2[i][j];
		}
	}
	//matrix subtraction
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			mat1[i][j]-=mat2[i][j];
		}
	}
	//read matrix subtraction array
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout <<setw(4)<<mat1[i][j];
		}
		cout<<endl;
	}
}
*/



