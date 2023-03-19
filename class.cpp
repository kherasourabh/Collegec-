/*
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class room{
	private:
		float len;
		float bre;
		float hei;
	public :
		room(){
			len=10,bre=20,hei=30;
		}
		room(float l,float b,float h){
			len=l;
			bre=b;
			hei=h;
		}
		float area(){
			float a;
			a=len*bre;
			return(a);
		}
		float volume(){
			float v;
			v=len*bre*hei;
			return(v);
		}		
};
int main(){
	cout<<"Dimension of a ROOM";
	float l,b,h;
	cout<<endl<<"Enter the lenght, breath and height of the room= ";
	cin>>l>>b>>h;
	room r1(l,b,h);
	cout <<endl<<"area of room1= "<<r1.area();
	cout <<endl<<"volume of room1= " <<r1.volume();
	room r2;
	cout <<endl<<"area of room2= "<<r2.area();
	cout <<endl<<"volume of room2= " <<r2.volume();
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class room{
	private:
		float len;
		float bre;
		float hei;
	public :
		room(){
			len=10,bre=20,hei=30;
		}
		room(float l,float b,float h){
			len=l;
			bre=b;
			hei=h;
		}
		float area(){
			float a;
			a=len*bre;
			return(a);
		}
		float volume(){
			float v;
			v=len*bre*hei;
			return(v);
		}		
};
int main(){
	cout<<"Dimension of a ROOM";
	int num;
	cout <<endl<<"Enter the no. of rooms= ";
	cin >>num;
	room list[num];
	for(int i=0;i<num;i++){
		float l=0,b=0,h=0;
		cout<<endl<<"Enter the lenght, breath and height of the room= ";
		cin>>l>>b>>h;
		room list[i](l,b,h);
	}
	for(int i=0;i<num;i++){
		cout <<endl<<"area of room"<<i+1<<"= "<<list[i].area();
		cout <<endl<<"volume of room1"<<i+1<<"= " <<list[i].volume();
	}
	return 0;
}
*/
#include <iostream>
#include <string.h>
#include <iomanip>
#include <math.h>
using namespace std;
class dim{
	private:
		float dim1;
		float dim2;
		float dim3;
	public:
		//default constructor will calculate area of circle of radius =10
		dim(){
			dim1=10;
		}
		//construtor for circle
		dim(float r){
			dim1=r;
		}
		//constructor for rectangle
		dim(float l,float b){
			dim1=l,dim2=b;
		}
		//constructor for triangle
		dim(float a,float b,float c){
			dim1=a,dim2=b,dim3=c;
		}
		//function to calculate area of circle
		area(float dim1){
			float a;
			a=3.14*dim1*dim1;
			return(a);
		}
		area(float dim1,float dim2){
			float a;
			a=dim1*dim2;
			return(a);
		}
		area(float dim1 ,float dim2,float dim3){
			float a,s;
			s=(dim1+dim2+dim3)/2;
			a=sqrt(s*(s-dim1)*(s-dim2)*(s-dim3));
			return(a);
		}
};
int main(){
	cout<<"Area calculator";
	int ch;
	do{
		cout<<endl<<" 1)Area of circle \n 2)Area of rectangle \n 3)Area of triangle \n 4)Exit";
		cout<<endl<<"Enter your choice= ";
		cin>>ch;
		switch(ch){
			case 1:
				float r=0;
				cout<<endl<<"Enter the radius of circle=";
				cin>>r;
				dim cir(r);
				cout<<"Area of circle="<<cir.area(r);
				break;
			case 2:
				float l=0,br=0;
				cout<<endl<<"Enter the length of rec=";
				cin>>l;
				cout<<endl<<"Enter the breath of rec=";
				cin>>br;
				dim rec(l,br);
				cout<<"Area of rectangle= "<<rec.area(l,br);
			case 3:
				float a=0,b=0,c=0;
				cout<<endl<<"Enter the side1 of triangle=";
				cin>>a;
				cout<<endl<<"Enter the side2 of triangle=";
				cin>>b;
				cout<<endl<<"Enter the side3 of triangle=";
				cin>>c;
				dim tri(a,b,c);
				cout<<"Area of triangle= "<<tri.area(a,b,c);
				
		}
		
	}while(ch<4);
	return 0;
}
