#include<iostream>
#include<vector>
#include<array>
#include<fstream>
using namespace std;
void calculation(vector<string>);
int cal(float,int);
void user(string);
void bill(string,float);
float prebill(string);
void substract(vector<string>,float);
void addition(vector<string>,float);



void addition(string name,float addam)
{
	float inputt;
    inputt= prebill(name);
	ofstream file(name);
	file<<inputt+addam;
	
	
	
}




void substract(string name,float subam)
{
	float inputt;
    inputt= prebill(name);
	ofstream file(name);
	file<<inputt-subam;
	
	
	
}

float prebill(string name)
{
	ifstream file(name);
	float input;
	file>>input;
	return input; 
}

void bill(string name,float total)
{
	//ifstream file(name);
//	float input;
	//file>>input;
//	file.close();
    float inputt;
    inputt= prebill(name);
	ofstream file(name);
	file<<total+inputt;
}


void user(string name,int a)
{
	ofstream file(name);
	file<<a;
}

int cal(float amount,int z)
{
	float am;
	am=amount/z;
	return am;
	
}

void calculation(vector<string> naama)
{
	vector<int> index;
	vector<int>consta;
	string v;
	string s;
	float amount=0;
	int count=0;
	cout<<"\nHere are the people, whom you added in the group "<<endl;
	for(string names:naama)
	{
		cout<<names<<endl;
		count++;
	}
	
	//cout<<"Who are you?"<<endl;
	//cin>>v;
	
	
		
	cout<<"\nDo you wish to add split or negate select 1 or 2 ?"<<endl;
	int a;
	int num;
	cin>>a;
	if(a==1)
		{
			
			cout<<"Do you want to divide the amount between people or add individually\n select either 1 or 2?"<<endl;
			cin>>num;
			if(num==1)
			{
			
			
			
			cout<<"Hey "<<"how much did you pay?"<<endl;
			cin>>amount;
			for(int i=0;i<count;i++)
	{
		cout<<i+1<<" "<<naama[i]<<endl;
	}
	cout<<"Select the people for whom you want to add split\n And enter 0 after selecting "<<endl;
	int k;
	int z=0;
	vector<int>data;
	
	for(int i=0;i<=50;i++)
	{
		cin>>k;
		if(k==0)
		{break;
		}
		data.push_back(k);
		index.push_back(k-1);
	//	user(naama[index[i]]);
		z++;
		//cout<<data[i]<<endl;
		
	}
	cout<<z<<endl;
	
			//for()
			float total;
			total=cal(amount,z);
			cout<<total<<endl;
			for(int i=0;i<z;i++)
			{
				bill(naama[index[i]],total);
			}
			int p=0;
		for(string name: naama)
		{
			
			ifstream file(naama[p]);
			int input;
			file>>input;
			cout<<"The amount to be paid by "<<naama[p]<<" is "<<input<<endl;
			p++;
			
			}	
		}
		else if(num==2)
		{
			int z=0;
			vector<int>data;
			int k;
			cout<<"Select the people for whom you want to add  the amount\nEnter 0 for after selecting"<<endl;
			for(int i=0;i<count;i++)
	{
		cout<<i+1<<" "<<naama[i]<<endl;
	}
	float q;
	float addam;
	for(int i=0;i<=50;i++)
	{
		cin>>k;
		if(k==0)
		{break;
		}
		data.push_back(k);
		index.push_back(k-1);
	//	user(naama[index[i]]);
		z++;}
		//cout<<data[i]<<endl;
		
	
	for(int i=0;i<z;i++)
	{
		
		cout<<"How much did you pay for "<<naama[index[i]]<<" ?"<<endl;
		cin>>addam;
		addition(naama[index[i]],addam);
		
		
		}
		int p=0;
	for(string name: naama)
		{
			
			ifstream file(naama[p]);
			int input;
			file>>input;
			cout<<"The amount to be paid by "<<naama[p]<<" is "<<input<<endl;
			p++;
			
			}
		
			
			
			
	}
			
		}
	else if(a==2)
		{
			int z=0;
			vector<int>data;
			int k;
			cout<<"Select the people  who paid the amount\n Enter 0 after selecting "<<endl;
			for(int i=0;i<count;i++)
	{
		cout<<i+1<<" "<<naama[i]<<endl;
	}
	float q;
	float subam;
	for(int i=0;i<=50;i++)
	{
		cin>>k;
		if(k==0)
		{break;
		}
		data.push_back(k);
		index.push_back(k-1);
	//	user(naama[index[i]]);
		z++;}
		//cout<<data[i]<<endl;
		
	
	for(int i=0;i<z;i++)
	{
		
		cout<<"How much did "<<naama[index[i]]<<" paid?"<<endl;
		cin>>subam;
		substract(naama[index[i]],subam);
		
		
		}
		int p=0;
	for(string name: naama)
		{
			
			ifstream file(naama[p]);
			int input;
			file>>input;
			cout<<"The amount to be paid by "<<naama[p]<<" is "<<input<<endl;
			p++;
			
			}		

	}
	else
	{
		cout<<"Wrong option"<<endl;
	}
	
	
			
			
			
		}
	
		
	
		
	
	
	


void group()
{
	char d;
	int n;
//	cout<<"would you like to create a group? y or n"<<endl;
//	cin>>d;
	//if(d=='y')
	{
		string gname;
		cout<<"Please Enter the group name "<<endl;
		cin>>gname;
		std::ofstream file(gname,ios::app);
		//file.open(gname,ios::app);
		cout<<"Enter how many members in ur group\n"<<endl;
		cin>>n;
		cout<<"Enter their names\n"<<endl;
		vector<string>names;
		string naam;
		for(int i=1;i<=n;i++)
		{
			cin>>naam;
			names.push_back(naam);
			
		}
		for(int i=0;i<n;i++)
		{
			user(names[i],0);
		}
		for(string peru:names)
		{
			file<<peru<<endl;
		}
		
		
		
		}
	
}
int main()
{
	string anna;
	cout<<"Hi"<<endl;
	int i=0;
	while(i==0)
	{
		cout<<"\nwould you like to create a new group y or n?"<<endl;
		char r;
		cin>>r;
		
	
	

if(r=='y')
{
	group();
}
else if(r=='n'){
	int n;
	
	cout<<"What is ur group name?"<<endl;
	cin>>anna;
	cout<<"\nwould you like to add new member?"<<endl;
	char r;
	cin>>r;
	if(r=='y')
	{
		ofstream file(anna,ios::app);
		cout<<"Enter howmany members you would like to add"<<endl;
		cin>>n;
		cout<<"Enter their names "<<endl;
		vector<string>names;
		string naam;
		for(int i=1;i<=n;i++)
		{
			cin>>naam;
			names.push_back(naam);
		}
		for(int i=0;i<n;i++)
		{
			user(names[i],0);
		}
		for(string peru:names)
		{
			file<<peru<<endl;
		}
	}
	ifstream file(anna);
	vector<string>naama;
	string input;
	while(file>>input)
	{
		naama.push_back(input);
	}
	
	calculation(naama);
	
}
else
{
	cout<<"Sorry wrong option"<<endl;
}

}
		}