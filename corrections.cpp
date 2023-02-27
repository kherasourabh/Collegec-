//1 pattern questions
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	char ch;
	cout << "Enter a number = ";
	cin >> num;
	cout << "Enter the character you want to use for pattern= ";
	cin >> ch;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout <<ch;
		}
		cout <<endl;
	}
	return 0;
}*/
//2 pattern question
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	char ch;
	cout << "Enter a number = ";
	cin >> num;
	cout << "Character of your choice= ";
	cin >>ch;
	for(int i=1;i<=num;i++){
		if(i==1 | i== num){
			for(int j=1;j<=num;j++)
				cout <<ch;
		}
		else {
			for(int j=1;j<=2;j++)
				cout <<ch;
		}
		cout <<endl;
	}
	return 0;
}
*/
//3 pattern problem
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	char ch;
	cout << "Enter a number= ";
	cin>>num;
	cout << "char of your choice = ";
	cin >> ch;
	for(int i=num;i>0;i--){
		for(int j=i;j>0;j--)
			cout <<ch;
		cout <<endl;
	}
	return 0;
}
*/
//Question 4 on pattern
/*
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int num,c=1;
	char ch;
	string s=" ";
	cout << "Enter a number= ";
	cin>>num;
	cout << "char of your choice = ";
	cin >> ch;
	for(int i=num;i>0;i--){
		for(int j=i-2;j>=0;j--)
			cout <<s;
		for(int k=1;k<=c;k++){
			cout<<ch;
		}
		cout <<endl;
		c+=1;
	}
	return 0;
}
*/
//Fibonacci series
/*
#include <iostream>
using namespace std;
int bturn(int turn){
	int f=0,s=1,t=0;
	cout <<f<<" "<<s;
	for(int i=3;i<=turn;i++){
		t=f+s;
		f=s;
		s=t;
		cout << " "<<t;
	}
}
int bterm(int term){
	int f=0,s=1,t=0;
	cout <<f<<" "<<s;
	for(int i=3;t!=term;i++){
		t=f+s;
		f=s;
		s=t;
		cout << " "<<t;
	}
}
int main(){
	int ch;
	cout << " 1)By term! \n 2)By turn! \n 3)Exit ";
	cin >>ch;
	switch(ch)
	{case 1:
		int term;
		cout << "Enter the term by which you want to print fibonnacci series= ";
		cin >>term;
		bterm(term);
		break;
	case 2:
		int turn;
		cout << "Enter the turn by which you want to print fibonnacci series= ";
		cin >> turn;
		bturn(turn);
		break;
	case 3:
		break;
	}
	return 0;
}
*/
//Prime number using squrt metthod
/*
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int s,e;
	cout << "Enter the starting number= ";
	cin >>s;
	cout << "Enter the ending number = ";
	cin >>e;
	for(int i=s;i<=e;i++){
		int flag=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i % j==0){
				cout<<endl <<i<< "  NOT A PRIME";
				flag=0;
				break;
			}
		}
		if(flag==1){
			cout << endl <<i<<" IS A PRIME";
		}
	}
	return 0;
}
*/
//Grade system
/*
#include <iostream>
using namespace std;
int main(){
	char ch;
	do{
		int a,b,c,d,A;
		cout <<"Marks should be between 0-100!";
		cout <<endl<< "Enter the marks in english= ";
		cin >>a;
		cout << "Enter the marks in maths= ";
		cin >>b;
		cout << "Enter the marks in physics= ";
		cin >>c;
		cout << "Enter the marks in chemistry= ";
		cin >>d;
		A=a+b+c+d/4;
		if(a>=90)
			cout <<"Grade - O";
		else if (a>=80 & a<90)
			cout << "Grade - A";
		else if (a>=60 & a<80)
			cout << "Grade - B";
		else if (a>=45 & a<60)
			cout << "Grade - C";
		else if (a>=40 & a<45)
			cout << "Grade - D";
		else
			cout <<"Fail!";
		cout <<endl<<"press y to continue and n to quit = ";
		cin >> ch;
	}while(ch=='y' | ch=='Y');
	return 0;
}
*/

//Quadratic equation
/*
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	cout << "Quadration Equation!";
	float a,b,c,d;
	cout <<endl <<"Enter coff of x2= ";
	cin >> a;
	cout <<"Enter coff of x= ";
	cin >>b;
	cout <<"Enter constant= ";
	cin >>c;
	d=(b*b)-4*a*c;
	if(d>0){
		cout <<endl<<"Two roots exist!!";
		float r1,r2,f;
		f=2*a;
		r1=-b-sqrt(d);
		r2=-b+sqrt(d);
		cout<<endl <<"value of root one (x1)= "<<r1/f;
		cout<<endl <<"value of root one (x2)= "<<r2/f;
	}
	else if (d==0){
		cout <<endl<<"One root exist!";
		float r,f;
		f=2*a;
		r=-b;
		cout << endl<< "value of solution (x)= "<<r/f;
	}
	else{
		cout <<"No real root exist !";
	}
	return 0;
}*/

/*
//Wap to swap two numbers
#include <iostream>
using namespace std;
int main(){
	int a,x,l;
	cout <<"Enter a number= ";
	cin >>a;
	x=a;
	while (x>0){
		l=x%10;
		x=x/10;
		cout <<l;
	}
	return 0;
}
*/
//Maximum of 3 numbers using ternary operator
/*
#include <iostream>
using namespace std;
int main(){
	int a ,b,c;
	cout<<"Enter a number= ";
	cin >>a;
	cout <<"Enter another number= ";
	cin >>b;
	cout <<"Enter another number= ";
	cin >>c;
	int x;
	x=(a>b)?((a>c)?a:c):((b>c)?b:c);
	cout<<"Max value= " <<x;
	return 0;
}

*/
//ncr question
/*
#include <iostream>
#include <math.h>
using namespace std;
int fact(int num){
	int f=1;
	for(int i=num;i>0;i--){
		f*=i;
	}
	return f;
}
int main(){
	float n,r;
	cout <<"To calcualte the value of nCr= ";
	cout <<endl<<"Enter the value of n(no. of objects)= ";
	cin >>n;
	cout <<endl<<"Enter the value of r(no. of objects choseen from n)= ";
	cin >>r;
	if(n>r){
	float n1,r1,nr,v,d;
	n1=fact(n);
	r1=fact(r);
	nr=fact(n-r);
	d=(r1*nr);
	v=n1/d;
	cout <<"Value of ncr/ "<<n<<"C"<<r<<" = "<<v;}
	else{
		cout <<"Value of n should be greater than r ";
	}
	return 0;
}
*/






//1darray

//Input and output of an 1d array
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	cout <<"Enter the no. of students= ";
	cin >>num;
	int ar[num];
	for(int i=0;i<num;i++){
		cout <<endl<<"Enter the marks of student "<<i+1<<" = ";
		cin>> ar[i];
	}
	for(int i=0;i<num;i++)
		cout <<endl<<"Marks of student "<<i+1<<" = "<<ar[i];
}
*/


//sum and average of an array
/*
#include <iostream>
using namespace std;
int main(){
	int num;
	cout <<"Enter the no. of students= ";
	cin >>num;
	int ar[num];
	for(int i=0;i<num;i++){
		cout <<endl<<"Enter the marks of student "<<i+1<<" = ";
		cin>> ar[i];
	}
	float s=0,a;
	for(int i=0;i<num;i++)
		s+=ar[i];
	cout <<"Sum of values of an array= "<<s;
	a=s/num;
	cout <<endl<<"Average of values of an array= "<<a;
}
*/






//MEnu driven program using 1d array!

/*
#include <iostream>
using namespace std;
void read(int ar[],int num){
	for(int i=0;i<num;i++)
		cout<<endl <<"Value at "<<i<<" in array = "<<ar[i];
}
void sa(int ar[],int num){
	float s=0,a;
	for(int i=0;i<num;i++)
		s+=ar[i];
	a=s/num;
	cout <<endl<<"Sum = "<<s;
	cout <<endl<<"Average value = "<<a; 
}
int ls(int ar[],int num,int search){
	bool flag=0;
	int i;
	for(i=0;i<num;i++){
		if(search == ar[i]){
			cout<<endl<<"value "<<ar[i]<<" found at "<<i <<" index!";
			flag=1;
			break;
		}
	}
	if (flag==0)
		cout <<endl<<"Not found !!";
	else
		return i;
}
int max(int ar[],int num){
	int max=0;
	for(int i=1;i<num;i++){
		if(ar[i]>ar[max])
			max=i;
	}
	return ar[max];
}
int smax(int ar[],int num){
	int m=max(ar,num);
	int sm=0;
	for(int i=1;i<num;i++){
		if(ar[i]>ar[sm] & ar[i] != m){
			sm=i;
		}
	}
	return ar[sm];
}
void rev(int ar[],int num){
	cout<<endl<<"Original array= ";
	read(ar,num);
	cout <<endl<<"After reversing array would look like = ";
	int temp;
	for(int i=0,j=num-1;i<j;i++,j--){
		temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
	for(int i=0;i<num;i++)
		cout<<endl <<"Value at "<<i<<" in array = "<<ar[i];
}
int min(int ar[],int num){
	int min=0;
	for(int i=1;i<num;i++)
		if(ar[i]<ar[min])
			min=i;
	return ar[min];
}
void eo(int ar[],int num){
	int o,e;
	for(int i=0;i<num;i++){
		if(ar[i]%2==0)
			cout <<endl<<ar[i]<<" at index "<<i<<" is even!";
		else
			cout <<endl<<ar[i]<<" at index "<<i<<" is odd!";
	}
}
int del(int ar[],int num,int ele){
	bool flag=1;
	for(int i=0;i<num;i++){
		if(ele==ar[i])
			for(int j=i;j<num-1;j++)
				{ ar[j]=ar[j+1];
				flag=0;}
	}
	if (flag==0){	
		cout <<endl<<"After deletion array is :";
		for(int i=0;i<num-1;i++)
			cout<<endl<<"value "<<ar[i]<<" at index "<<i;
	}
	else
		{cout <<endl<<ele<<" not found in the array!";
		cout <<endl<<"Original array is =";
		read(ar,num);}
}
void deli(int ar[],int num,int index){
	bool flag=1;
	if(index>=num & index<0){
		cout<<endl<<"Invalid index!";
		cout <<endl<<"Original array is =";
		read(ar,num);
	}
	else{
		for(int i=0;i<num;i++)
			if(index==i)
				for(int j=i;j<num-1;j++){
					ar[j]=ar[j+1];
					flag=0;
				}
	}
	if (flag==0){	
		cout <<endl<<"After deletion array is :";
		for(int i=0;i<num-1;i++)
			cout<<endl<<"value "<<ar[i]<<" at index "<<i;
	}
}
int main(){
	int num;
	cout<<"---------------1-D-ARRAY-----------------"<<endl;
	cout <<"Enter the no. of elements in the array= ";
	cin >>num;
	int ar[num];
	for(int i=0;i<num;i++){
		cout <<endl<<"Enter the data in the "<<i+1<<" = ";
		cin>> ar[i];
	}
	int ch;
	do{
		cout<<endl<<"-------------------------------------------------------";
		cout <<endl<<" 1)Read \n 2)Sum /average \n 3)Linear search \n 4)Max \n 5)Second max \n 6)rev \n 7)min \n 8)odd or even \n 9)Deletion by value \n 10)deletion by index \n 11) Exit";
		cout <<endl <<"Enter your choice= ";
		cin >>ch;
		switch(ch){
			case 1:
				read(ar,num);
				break;
		    case 2:
		    	sa(ar,num);
		    	break;
		    case 3:
		    	int se;
		    	cout <<endl<<"Enter the value to be search= ";
		    	cin>>se;
		    	ls(ar,num,se);
		    	break;
		    case 4:
		    	int m;
		    	m=max(ar,num);
		    	cout <<endl <<"Max value = "<<m;
		    	break;
		    case 5:
		    	int sm;
		    	sm=smax(ar,num);
		    	cout <<endl<<"Second max value= "<<sm;
		    	break;
		    case 6:
		    	rev(ar,num);
		    	break;
		    case 7:
		    	m=min(ar,num);
		    	cout <<endl<<"Min value in the array= "<<m;
		    	break;
		    case 8:
		    	eo(ar,num);
		    	break;
		    case 9:
		    	int ele;
		    	cout <<endl<<"Enter the element to be deleted= ";
		    	cin >>ele;
		    	del(ar,num,ele);
		    case 10:
		    	int in;
		    	cout<<endl<<"Enter the index to be deleted= ";
		    	cin>>in;
		    	deli(ar,num,in);
		    	break;
		    case 11:
		    	break;
		}
	}while (ch!=11 & ch<12);
	return 0;
}
*/



/*
// Menu driven program using 2 D array
#include <string.h>
#include <iostream>
using namespace std;
int read(int ar[][5],int r){
	for(int i=0;i<r;i++){
		for(int j=0;j<5;j++){
			cout <<ar[i][j]<<"     ";
		}
		cout <<endl;}
}
int main (){
	int r,c;
	cout<<"Enter no of Students= ";
	cin >>r;
	int ar[r][5];
	string sub[5]={"English","CS","Physics","Chemistry","Maths"};
	for(int i=0;i<r;i++){
		for(int j=0;j<5;j++){
			cout<<endl<<"Enter the marks of student "<<i+1<<" in "<<sub[j] <<" = ";
			cin >> ar[i][j];
		}
	}
	for(int k=0;k<5;k++)
		cout<<sub[k]<<"  ";
	cout <<endl;
	read(ar,r);
}
 */
 //Average row wise
 /*
#include <iostream>
using namespace std;
int main (){
	int r,c;
	cout<<"Enter no of rows= ";
	cin >>r;
	cout<<"Enter no of coulmns= ";
	cin >>c;
	int ar[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<endl<<"Enter the value at ("<<i+1<<","<<j+1<<") = ";
			cin >> ar[i][j];
		}
	}
	cout <<endl<<"--------------Reading an array--------------------"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
			cout<<ar[i][j]<<" ";
		cout <<endl;}
	cout <<endl<<"------------sum and avg row wise----------------------";
	for(int i=0;i<r;i++){
		float s=0;
		for(int j=0;j<c;j++)
			s+=ar[i][j];
		cout <<endl<<"Sum of value in row "<<i+1<<"= "<<s;
		cout <<endl<<"Averge of value in row "<<i+1<<"= "<<s/c;
}
    cout <<endl<<"-------------sum and avg column wise-----------------------";
	for(int j=0;j<c;j++){
		float sum=0;
		for(int i=0;i<r;i++){
			sum+=ar[i][j];
		}
		cout <<endl<<"Sum of value in column "<<j+1<<"= "<<sum;
		cout <<endl<<"Averge of value in column "<<j+1<<"= "<<sum/r;
	}
}
*/

/*
//Structures

#include <iostream>
#include <string.h>
using namespace std;
int main(){
	struct emp {
		string name;
		int id;
		float salary;
	};
	int num;
	cout <<"Enter number of employes= ";
	cin >>num;
	struct emp emplist[num];
	for(int i=0;i<num;i++){
		cout <<endl<<"Enter the name of employe "<<i+1<<" = ";
		cin >>emplist[i].name;
		cout <<endl<<"Enter the id of employe "<<i+1<<" = ";
		cin >>emplist[i].id;
		cout <<endl<<"Enter the salary of employe "<<i+1<<" = ";
		cin >>emplist[i].salary;
	}
	cout <<endl<<"----------------------------------------";
	cout<<"Name    Id      Salary";
	for(int i=0;i<num;i++){
		cout <<emplist[i].name<<"  ";
		cout<<emplist[i].id<<"  ";
		cout <<emplist[i].salary;}
		cout <<endl;
}

*/
      
      
      






//Strcucture

/*  


#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <iomanip>
int main(){
	struct student{
		string name;
		int rollno;
		float marks; 
	};
	int num;
	cout <<"Enter the number of students= ";
	cin >> num;
	struct student stu[num];
	for(int i=0;i<num;i++){
		cout<<endl<<"Enter the name of the student =";
		cin>>stu[i].name;
		cout<<endl<<"Enter the rollno of the student = ";
		cin >>stu[i].rollno;
		cout <<endl<<"Enter the marks of the student= ";
		cin >>stu[i].marks;
	}
	cout <<endl<<setw(9)<<"NAME"<<setw(9)<<"ROLLNO"<<setw(9)<<"MARKS";
	for(int i=0;i<num;i++){
		cout <<endl;
		cout <<setw(9)<< stu[i].name;
		cout <<setw(9)<<stu[i].rollno;
		cout <<setw(9)<<stu[i].marks;
		
	}
	int m=0;
	for(int i=0;i<num;i++)
		if(stu[i].marks>stu[m].marks)
			m=i;
	cout <<endl<<stu[m].name <<" got the highest marks = "<<stu[m].marks;
}


*/






