#include<iostream>
using namespace std;

//Enter Array

int* Enter_array(int a[],int& n,int& c)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter "<<i+1<<" Value:";
		cin>>a[i];
		c++;
	}
	return a;
}

//Show Array

void Show_array(int a[],int& n)
{
	if(n!=0)
	{
		cout<<"\n\t\t\t<-List->";
		for(int i=0;i<n;i++)
		{
			cout<<"\n==>"<<a[i];
		}
		cout<<"\n\nSize="<<n<<endl;
	}
	else
	cout<<"\nList doest not exist!!!";
}

//Main Display

int* Disp_array(int a[],int& n)
{
	if(n==0)
	{
		cout<<"\nList Does not exist!!!"<<endl;
	}
	else
	{
		cout<<"List:";
	for(int i=0;i<n;i++)
	{
		if(i<(n-1))
		{
			cout<<a[i]<<",";
		}
		else
		{
			cout<<a[i]<<endl;
		}
	}
	cout<<"\nSize="<<n<<endl;
	}
	return a;
}

//Insert at the start of Array

int* Insert_start(int a[],int& n)
{
	if(n!=0)
	{
	int b;
	n++;
	for(int i=n;i>0;i--)
	{
		a[i]=a[i-1];
	}
	cout<<"\nEnter the value you want to enter at the start:";
	cin>>b;
	a[0]=b;
	}
	else
	cout<<"\nList Does Not Exit!!!";
	
	
	return a;
}

//Insert at the end of Array

int* Insert_end(int a[],int& n)
{
	if(n!=0)
	{
	int b;
	n++;
	cout<<"\nEnter the value you want to enter at the end:";
	cin>>b;
	a[n-1]=b;
	}
	else
	cout<<"\nList Does Not Exit!!!";
	
	return a;
}

//Insert at the specific index of Array

int* Insert_specific(int a[],int& n,int& c)
{
	if(n!=0)
	{
	int b,x;
	cout<<"\nEnter the location at which  you want to enter at:";
	cin>>x;
	x--;
	n++;
	if(x>n-1)
	{
		p:
		cout<<"\nInvalid Entery";
		cout<<"\nEnter Again:";
		cin>>x;
		x--;
		if(x>n-1)
		{
			system("cls");
			goto p;
		}	
	}
	for(int i=n;i>=x;i--)
	{
		a[i]=a[i-1];
	}
	cout<<"\nEnter the value you want to enter at this location:";
	cin>>b;
	a[x]=b;
	}

	else
	cout<<"\nList Does Not Exit!!!";
		
	return a;
}

//Delete at the start of Array

int* Delete_start(int a[],int& n)
{
	if(n!=0)
	{
	for(int i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	}
	else
	cout<<"\nList Does Not Exit!!!";
	
	return a;
}

//Delete at the end of Array

int* Delete_end(int a[],int& n)
{
	if(n!=0)
	{
		n--;
	}
	else
	cout<<"\nList Does Not Exit!!!";
	 
	return a;
}

//Deletion at specific index

int* Delete_specific(int a[],int& n)
{
	if(n!=0)
	{
	int x;
	cout<<"\nEnter the index you want to delete at:";
	cin>>x;
	x--;
	for(int i=x;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	}
	else
	cout<<"\nList Does Not Exit!!!";
	
	return a;
}

//Update By location

int* Update_location(int a[],int& n)
{
	if(n!=0)
	{
	int x,y;
	cout<<"\nEnter the index you want to update at:";
	cin>>x;
	if(x>n)
		{
			p:
			cout<<"\nInvalid Entery";
			cout<<"\nEnter Again:";
			cin>>x;
			if(x>n)
			{
				system("cls");
				goto p;
			}	
		}
	cout<<"\nEnter The value you want to Enter:";
	cin>>y;
	a[x-1]=y;
	}
	else
	cout<<"\nList Does not exist!!!";
	
	return a;	
}

//Update By Value

int* Update_value(int a[],int& n)
{
	if(n!=0)
	{
	int x,y,b[n],count=0;
	cout<<"\nEnter the value you want to Change:";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			b[count]=i;
			count++;
		}
	}
	cout<<x<<" is found at:"<<b[0]+1;
	for(int j=1;j<count;j++)
	{
		cout<<","<<b[j]+1<<" ";	
	}
	cout<<"\nEnter The value you want to Enter:";
	cin>>y;
	for(int g=0;g<count;g++)
	{
		a[b[g]]=y;
		}
	}
	else
	cout<<"\nList does not exist!!!";	
	return a;	
}

//Swap by value

int* Swap_value(int a[],int& n)
{
	if(n!=0)
	{
		int x,xcount=0,xc[xcount],xselect;
		int y,ycount=0,yc[ycount],yselect;
		int uchoice;
		e:
		cout<<"\nEnter The First Value You Want to Swap:";
		cin>>x;
		for(int i=0;i<n;i++)
		{
			if(x==a[i])
			{
				xc[xcount]=i;
				xcount++;
			}
		}
		if(xcount==0)
		{
			cout<<x<<" Not Found!!!";
			cout<<"\nEnter 1 to Enter Again!!!";
			cout<<"\nEnter 2 to go back to menue!!!";
			cin>>uchoice;
			while(uchoice!=1 && uchoice!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>uchoice;
			}
			if(uchoice==1){goto e;}
			if(uchoice==2){return a	 ;}
		}
		else if(xcount==1)
		{
			cout<<"\n"<<x<<" is found at:"<<xc[0]+1;
			f:
			cout<<"\nEnter The Second value you want to swap with:";
			cin>>y;
			for(int i=0;i<n;i++)
			{
				if(y==a[i])
				{
					yc[ycount]=i;
					ycount++;
				}
			}
			if(ycount==0)
			{
				cout<<x<<" Not Found!!!";
				cout<<"\nEnter Again!!!";
				goto f;
			}
			else if(ycount==1)
			{
				cout<<"\n"<<y<<" is found at:"<<yc[0]+1;
				int temp=0;
				
				temp=a[xc[0]];
				a[xc[0]]=a[yc[0]];
				a[yc[0]]=temp;
				cout<<"\nSwapped Successfully!!!";
				return a;
			}
			else//ycount>1
			{
				cout<<"\n"<<y<<" is Found at:"<<yc[0]+1;
				for(int i=1;i<ycount;i++)
				{
					cout<<","<<yc[i]+1;
				}
				cout<<"\nSelect which location you want to swap:";
				cin>>yselect;
				yselect--;
				int temp=0;
				
				temp=a[xc[0]];
				a[xc[0]]=a[yselect];
				a[yselect]=temp;
				cout<<"\nSwapped Successfully!!!";
				return a;
			}	
		}
		else //xcount>1
		{
			cout<<"\n"<<x<<" is Found at:"<<xc[0]+1;
			for(int i=1;i<xcount;i++)
			{
				cout<<","<<xc[i]+1;	
			}
			cout<<"\nSelect which location you want to swap:";
			cin>>xselect;
			xselect--;
			j:
			cout<<"\nEnter The Second Value you want to swap with:";
			cin>>y;
			for(int i=0;i<n;i++)
			{
				if(y==a[i])
				{
					yc[ycount]=i;
					ycount++;
				}
			}
			if(ycount==0)
			{
				cout<<x<<" Not Found!!!";
				cout<<"\nEnter Again!!!";
				goto j;
			}
			else if(ycount==1)
			{
				cout<<"\n"<<y<<" is found at:"<<yc[0]+1;
				int temp=0;
				
				temp=a[xselect];
				a[xselect]=a[yc[0]];
				a[yc[0]]=temp;
				cout<<"\nSwapped Successfully!!!";
				return a;
			}
			else //ycount>1
			{
				cout<<"\n"<<y<<" is Found at:"<<yc[0]+1;
				for(int i=1;i<ycount;i++)
				{
					cout<<","<<yc[i]+1;
				}
				cout<<"\nSelect which location you want to swap:";
				cin>>yselect;
				yselect--;
				int temp=0;
				
				temp=a[xselect];
				a[xselect]=a[yselect];
				a[yselect]=temp;
				cout<<"\nSwapped Successfully!!!";
				return a;
			}
		}
	}
	else
	{
		cout<<"\nList Does not Exist!!!";
	}
}

//Swap by index
int* Swap_index(int a[],int& n)
{
	if(n!=0)
	{
		int y,b,temp;
	l:
	cout<<"\nEnter the first location you want to swap:";
	cin>>y;
	y--;
	if(y>n || y<0)
	{
		system("cls");
		cout<<"\nInvalid Entry!!!";
		cout<<"\nEnter Again";
		goto l;
	}
	m:
	cout<<"\nEnter the second location you want to swap:";
	cin>>b;
	b--;
	if(b<0 ||b>n)
	{
		system("cls");
		cout<<"\nInvalid Entry!!!";
		cout<<"\nEnter Again";
		goto m;
	}
	temp=a[y];
	a[y]=a[b];
	a[b]=temp;
	}
	else 
	cout<<"\nList Does Not Exist";

	return a;
}

//copy by index

int* Copy_index(int a[],int& n)
{
	if(n!=0)
	{
			int y,b,temp;
	l:
	cout<<"\nEnter the first location from which you want to copy data:";
	cin>>y;
	y--;
	if(y>n || y<0)
	{
		system("cls");
		cout<<"\nInvalid Entry!!!";
		cout<<"\nEnter Again";
		goto l;
	}
	m:
	cout<<"\nEnter the second location where you want to copy:";
	cin>>b;
	b--;
	if(b<0 ||b>n)
	{
		system("cls");
		cout<<"\nInvalid Entry!!!";
		cout<<"\nEnter Again";
		goto m;
	}
	a[b]=a[y];
	}
	else 
	cout<<"\nList Does Not Exist";
return a;
}

//Find Function

int* Find(int a[],int& n)
{
	int x,count1=0,c[n];
	if(n!=0)
	{
	cout<<"\nEnter the value you want to search:";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c[count1]=i;
			count1++;
		}
	}
	if(count1!=0)
	{
		cout<<x<<" is found at:"<<c[0]+1;
		for(int k=1;k<count1;k++)
		{
			cout<<","<<c[k]+1;	
		}	
	}
	else
	cout<<x<<" Not Found!!!";
	
	}
	
	else
	cout<<"\nList Does Not Exist";
	return 0;

}

int main()
{
	int n,counter=0,choice1,choice2,choice3,choice4,choice5,choice6;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	Enter_array(arr,n,counter);
	n:
	system("cls");
	cout<<"\n\n\t\t\t\t\t\t\t****ASSIGNMENT # 1****"<<endl;
	cout<<"\t\t\t\t\t\t\t     Shayan Akhtar \n  \t\t\t\t\t\t\t         210907"<<endl;

	Disp_array( arr, n);
	
	cout<<"\nEnter 1 To Create Array";
	cout<<"\nEnter 2 for Insertion";
	cout<<"\nEnter 3 for Deletion";
	cout<<"\nEnter 4 for Update";
	cout<<"\nEnter 5 for Swapping";
	cout<<"\nEnter 6 for Display";
	cout<<"\nEnter 7 for Copy";
	cout<<"\nEnter 8 To Find";
	cout<<"\nEnter 9 To Delete Entire Array ";
	cout<<"\nEnter 10 To EXIT ";
	cout<<"\nEnter:";
	cin>>choice1;
	while(choice1 != 1 && choice1 != 2 && choice1 != 3 && choice1 != 4 && choice1 != 5 && choice1 != 6 && choice1 != 7 && choice1 != 8 && choice1 != 9 && choice1 != 10 )
	{
		cout<<"\nInvalid Entery";
		cout<<"\nEnter Again:";
		cin>>choice1;
	}
	
	if(choice1==1)
	{
		if(n==0)
		{
			cout<<"Enter the size of array:";
			cin>>n;
			Enter_array( arr, n, counter);
			system("cls");
			cout<<"\nList Created Successfully!!!";
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto n;}
			if(a==2){exit(0);}
		}
		else
		{
			system("cls");
			cout<<"\nList already Created!!!!";
			cout<<"\nEnter 1 to go back to Menue";
			int a;
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto n;}
			if(a==2){exit(0);}
		}
		
	}
	
	if(choice1==2)
	{
		m:
		system("cls");
		Disp_array(arr,n);	
		cout<<"\nEnter 1 for Insertion at start";
		cout<<"\nEnter 2 for Insertion at end";
		cout<<"\nEnter 3 for Insertion specifix index";
		cout<<"\nEnter 4 to go to back menue";
		cout<<"\nEnter:";
		cin>>choice2;
			while(choice2!=1 && choice2!=2 && choice2!=3 && choice2!=4 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>choice2;
			}
		if(choice2==1)
		{
			int a;
			system("cls");
			Disp_array(arr,n);
			Insert_start(arr,n);
			system("cls");
			Show_array(arr,n);
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto m;}
			if(a==2){exit(0);}

		}
		else if(choice2==2)
		{
			system("cls");
			Disp_array(arr,n);
			Insert_end(arr,n);
			system("cls");
			Show_array(arr,n);
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			int a;
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto m;}
			if(a==2){exit(0);}
		}
		else if(choice2==3)
		{
			system("cls");
			Disp_array(arr,n);
			Insert_specific(arr,n,counter);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto m;}
			if(a==2){exit(0);}
		}
		else
		{goto n;}
	}
	if(choice1==3)
	{
		o:
		system("cls");
		Disp_array(arr,n);
		cout<<"\nEnter 1 for Deletion at start";
		cout<<"\nEnter 2 for Deletion at end";
		cout<<"\nEnter 3 for Deletion specifix index";
		cout<<"\nEnter 4 to go back to menue";
		cout<<"\nEnter:";
		cin>>choice3;
		while(choice3!=1 && choice3!=2 && choice3!=3 && choice3!=4 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>choice3;
			}
		if(choice3==1)
		{
			system("cls");
			Disp_array(arr,n);
			Delete_start(arr,n);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto o;}
			if(a==2){exit(0);}
		}
		else if(choice3==2)
		{
			system("cls");
			Disp_array(arr,n);
			Delete_end(arr,n);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto o;}
			if(a==2){exit(0);}
		}
		else if(choice3==3)
		{
			system("cls");
			Disp_array(arr,n);
			Delete_specific(arr,n);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto o;}
			if(a==2){exit(0);}
		}
		else
		{goto n;}
	}
	if(choice1==4)	
	{
		q:
		system("cls");
		Disp_array(arr,n);
		cout<<"\nEnter 1 for update by location";
		cout<<"\nEnter 2 for update by value";
		cout<<"\nEnter 3 to go back to menue";
		cout<<"\nEnter:";
		cin>>choice4;
		while(choice4!=1 && choice4!=2 && choice4!=3)
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>choice4;
			}
		if(choice4==1)
		{
			system("cls");
			Disp_array(arr,n);
			Update_location(arr,n);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto q;}
			if(a==2){exit(0);}
		}
		else if(choice4==2)
		{
			Update_value(arr,n);
			system("cls");
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto q;}
			if(a==2){exit(0);}
		}
		else
		{goto n;}
		
	}
	if(choice1==5)
	{
		r:
		system("cls");
		Disp_array(arr,n);
		cout<<"\nEnter 1 for Swap by location";
		cout<<"\nEnter 2 for Swap by value";
		cout<<"\nEnter 3 to go back to menue";
		cout<<"\nEnter:";
		cin>>choice5;
		while(choice5!=1 && choice5!=2 && choice5!=3)
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>choice5;
			}
		if(choice5==1)
		{
			system("cls");
			Disp_array(arr,n);
			Swap_index(arr,n);
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto r;}
			if(a==2){exit(0);}
		}
		else if(choice5==2)
		{
			system("cls");
			Disp_array(arr,n);
			Swap_value(arr,n);
			Show_array(arr,n);
			int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
			if(a==1){goto r;}
			if(a==2){exit(0);}
		}
		else
		goto n;
}
	if(choice1==6)
	{
		system("cls");
		Show_array(arr,n);
		int a;
			cout<<"\nEnter 1 to go back to Menue";
			cout<<"\nEnter 2 to Exit";
			cout<<"\nEnter:";
			cin>>a;
			while(a!=1 && a!=2 )
			{	
				cout<<"\nInvalid Entery";
				cout<<"\nEnter Again:";
				cin>>a;
			}
		if(a==1){goto n;}
		if(a==2){exit(0);}
	}
	if(choice1==7)
	{
		system("cls");
		Disp_array(arr,n);
		Copy_index(arr,n);
		system("cls");
		Show_array(arr,n);
		int a;
		cout<<"\nEnter 1 to go back to Menue";
		cout<<"\nEnter 2 to Exit";
		cout<<"\nEnter:";
		cin>>a;
		while(a!=1 && a!=2 )
		{	
			cout<<"\nInvalid Entery";
			cout<<"\nEnter Again:";
			cin>>a;
		}
		if(a==1){goto n;}
		if(a==2){exit(0);}
	}
	if(choice1==8)
	{
		system("cls");
		Disp_array(arr,n);
		Find(arr,n);
		int a;
		cout<<"\nEnter 1 to go back to Menue";
		cout<<"\nEnter 2 to Exit";
		cout<<"\nEnter:";
		cin>>a;
		while(a!=1 && a!=2 )
		{	
			cout<<"\nInvalid Entery";
			cout<<"\nEnter Again:";
			cin>>a;
		}
		if(a==1){goto n;}
		if(a==2){exit(0);}	
	}
	if(choice1==9)
	{
		n=0;
		system("cls");
		cout<<"\nArray Deleted Successfully!!!";
		int a;
		cout<<"\nEnter 1 to go back to Menue";
		cout<<"\nEnter 2 to Exit";
		cout<<"\nEnter:";
		cin>>a;
		while(a!=1 && a!=2 )
		{	
			cout<<"\nInvalid Entery";
			cout<<"\nEnter Again:";
			cin>>a;
		}
		if(a==1){goto n;}
		if(a==2){exit(0);}
	}
	if(choice1==10){exit(0);}
	return 0;
}
