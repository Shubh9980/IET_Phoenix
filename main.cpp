#include<iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void average();
void circum();
void reference2();
void reference1();
void swap1();
void swap2(int& p,int& q);


class Date
{
	int dd,mm,yy;
	public:
		void getData()
		{
			cout<<"Enter the Date Month and Year "<<endl;
			cin>>dd>>mm>>yy;		
		}
		void Display()
		{
			cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy;
		}
};
void average()
{
	int m1,m2,m3,m4,m5;
 	cout<<"Enter the marks "<<endl;
 	cin>>m1>>m2>>m3>>m4>>m5;
 	float avg;
	 avg = (float)(m1+m2+m3+m4+m5)/5;
 	cout<<"Average is : "<<avg<<endl;
}
void circum()
{
	int r;
	cout<<"Enter the radius "<<endl;
	cin>>r;
	const float pi=3.142f;
	float circum;
	circum = 2*pi*r;
	cout<<"The circumference is : "<<circum<<endl;
}
void reference1()
{
	int a = 111;
	int &b = a;
	cout<<"Value of a : "<<a<<endl<<"Value of b : "<<b<<endl;
	show = 222;
	cout<<a<<endl<<b;
}

void reference2()
{
	int a = 111;
	int &b = a;
	int &c = a;	
	cout<<"Address of a : "<<&a<<endl<<"Address of b : "<<&b<<endl<<"Address of c : "<<&c<<endl;
	c = 222;
	cout<<"Value of a : "<<a<<endl<<"Value of b : "<<b<<endl<<"Value of c : "<<c;
}
void swap1()
{
	int a,b;
	cout<<"Enter the value you want to be swapped "<<endl;
	cin>>a>>b;
	cout<<"Before swapping a = "<<a<<" and b = "<<b<<endl;
	swap2(a,b);
	cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;
	
}
void swap2(int& p,int& q)
{
	int temp;
	cout<<"Before swapping p = "<<p<<" and q = "<<q<<endl;
	temp=p;
	p=q;
	q=temp;
	cout<<"After swapping p = "<<p<<" and q = "<<q<<endl;
}
int main()
 {
 	Date d1;
 	cout<<endl<<"Size of Object d1 is :"<<sizeof(d1)<<endl;
 	d1.getData();
 	d1.Display();
 	
 	//swap1();
 	//reference2();
 	//reference1();
 	//circum();
 	//average();
 	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	return 0;
}
