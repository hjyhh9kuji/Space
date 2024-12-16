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
		cout<<"число (q), промежуток(w), вывод пиковых значений(r), выход(e)"<<endl;;
		cin>>s;
		if ((s!='q')&&(s!='w')&&(s!='e')&&(s!='r')) 
		{
			system("cls");
			cout<<"Неправильный ввод..."<<endl<<endl<<"Пример ввода: "<<' ';
		}else break;
	}
		if (s=='q')
		{
			cout<<"Введите число: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"Ошибка ввода ";	
				    break;
				}
			cout<<a<<' ';
			while(a!=1)
			{
				if (a%2==1) a=a*3+1;
				if (a%2==0) a/=2;
				if (max<a) max=a;
				cout<<a<<' ';
				if (a==1) cout<<endl<<"Пиковое значение: "<<max<<endl;
			}
		}	
		if (s=='w')
		{
			cout<<"Введите начало промежутка: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"Ошибка ввода ";	
					break;
				}
			cout<<"Введите диаметр промежутка: ";
			cin>>d;
				if (d<=0)
				{
					cout<<"Ошибка ввода ";	
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
						cout<<'1'<<endl<<"Пиковое значение: "<<max;
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
			cout<<"Введите начало промежутка: ";
			cin>>a;
				if (a<=0)
				{
					cout<<"Ошибка ввода ";	
					break;
				}
			cout<<"Введите диаметр промежутка: ";
			cin>>d;
				if (d<=0)
				{
					cout<<"Ошибка ввода ";	
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
						cout<<"Первый элемент: "<<i<<" "<<"Пиковое значение: "<<max;
						a=i+1;
						max=0;
						break;
					}
				}
			}
			cout<<endl;
		}
	}
cout<<"Работа остановлена";
}
