//MEnu driven program using 1d array!


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


