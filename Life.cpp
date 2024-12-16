#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	system("chcp 1251");
	srand(time(NULL));
	int n,m,s,w;
	int x;
	char q,d;
	bool A[52][52];
	bool B[52][52];
	bool C[52][52];
    do
	{
		
		cout<<"Введите размер поля: ";
		cin>>n;
			cout<<"Сколько поколений сделать ";
			cin>>w;
		{
			for (int i=0;i<n+2; i++)
			{
				for (int j=0;j<n+2; j++)
				{
					A[i][j]=0;
					B[i][j]=0;
					C[i][j]=0;	
				}
			}
			cout<<"Заполнить случайно?\n"<<"Yes(y)/No(n)";
			cin>>d;
			if(d=='n'){
				cout<<"Введите начальное положение \n ";
			for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					cin>>x;	
					A[i][j]=x;
					B[i][j]=x;
					C[i][j]=x;			
				}
			}
			}
			if(d=='y'){
				for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					A[i][j]=rand()%2;		
					B[i][j]=A[i][j];
					C[i][j]=A[i][j];			
				}
			}
			}
			
			cout<<"Исходная позиция \n";
			for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					//cout<<B[i][j]<<' ';
					if(B[i][j]==1) printf("\033[42m \033[0m");
					if(B[i][j]==0) printf("\033[41m \033[0m");
					if (j==n) cout<<endl;
				}
			}
			cout<<endl;
			for(int r=0; r<w;r++)
			{
				for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					s=(C[i+1][j])+(C[i-1][j])+(C[i][j+1])+(C[i][j-1])+(C[i+1][j+1])+(C[i+1][j-1])+(C[i-1][j+1])+(C[i-1][j-1]);
					if(A[i][j]==0)
					{
						if (s==3) A[i][j]=1;
						else A[i][j]=0;
					}
					if(A[i][j]==1)
					{
						if ((s==2)||(s==3)) A[i][j]=1;
						else A[i][j]=0;	
					}		
				}
			}
			for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					C[i][j]=A[i][j];
					if(A[i][j]==1) printf("\033[42m \033[0m");
					if(A[i][j]==0) printf("\033[41m \033[0m");
					if (j==n) cout<<endl;
				}
			}
			cout<<endl;
	    	}	
	}
	
	do{
		cout<<"Вернуться(q)/Продолжить(w)/Выйти(e)";
		cin>>q;
		if(q=='q') break;
		if (q=='w'){
			cout<<"Сколько поколений сделать: ";
			cin>>w;
			for(int r=0; r<w;r++)
			{
				for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
					s=(C[i+1][j])+(C[i-1][j])+(C[i][j+1])+(C[i][j-1])+(C[i+1][j+1])+(C[i+1][j-1])+(C[i-1][j+1])+(C[i-1][j-1]);
					if(A[i][j]==0)
					{
						if (s==3) A[i][j]=1;
						else A[i][j]=0;
					}
					if(A[i][j]==1)
					{
						if ((s==2)||(s==3)) A[i][j]=1;
						else A[i][j]=0;	
					}		
				}
			}
			for (int i=1;i<n+1; i++)
			{
				for (int j=1;j<n+1; j++)
				{
						C[i][j]=A[i][j];
					if(A[i][j]==1) printf("\033[42m \033[0m");
					if(A[i][j]==0) printf("\033[41m \033[0m");
					if (j==n) cout<<endl;		
				}
			}
			cout<<endl;
	    	}
		}
	}while(q=='w');
}while(q!='e');
}
