#include<iostream>
using namespace std;
int main()
{
	system("chcp 1251");
	unsigned long long a ,d, max=0;
	char s;
	while (s!='e')
	{
	while(true)
	{
		cout<<"����� (q), ����������(w), ����� ������� ��������(r), �����(e)"<<endl;;
		cin>>s;
		if ((s!='q')&&(s!='w')&&(s!='e')&&(s!='r')) 
		{
			system("cls");
			cout<<"������������ ����..."<<endl<<endl<<"������ �����: "<<' ';
		}else break;
	}
		if (s=='q')
		{
			cout<<"������� �����: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"������ ����� ";	
				    break;
				}
			cout<<a<<' ';
			while(a!=1)
			{
				if (a%2==1) a=a*3+1;
				if (a%2==0) a/=2;
				if (max<a) max=a;
				cout<<a<<' ';
				if (a==1) cout<<endl<<"������� ��������: "<<max<<endl;
			}
		}	
		if (s=='w')
		{
			cout<<"������� ������ ����������: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"������ ����� ";	
					break;
				}
			cout<<"������� ������� ����������: ";
			cin>>d;
				if (d<=0)
				{
					cout<<"������ ����� ";	
					break;
				}
			int q=a;
			for (int i=a; i<=q+d; i++)
			{
				cout<<endl;
				while(true)
				{
					cout<<a<<' ';
					if (a%2==1) a=a*3+1;
					else a/=2;
					if (max<a) max=a;
				    if (a==1) 
					{
						cout<<'1'<<endl<<"������� ��������: "<<max;
						a=i+1;
						max=0;
						break;
					}
				}
			}
			cout<<endl;
		}	
				if (s=='r')
		{
			cout<<"������� ������ ����������: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"������ ����� ";	
					break;
				}
			cout<<"������� ������� ����������: ";
			cin>>d;
				if (d<=0)
				{
					cout<<"������ ����� ";	
					break;
				}
			int q=a;
			for (int i=a; i<=q+d; i++)
			{
				cout<<endl;
				while(true)
				{
					if (a%2==1) a=a*3+1;
					else a/=2;
					if (max<a) max=a;
				    if (a==1) 
					{
						cout<<"������ �������: "<<i<<" "<<"������� ��������: "<<max;
						a=i+1;
						max=0;
						break;
					}
				}
			}
			cout<<endl;
		}
	}
cout<<"������ �����������";
}
