#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	system("color 7c");
	cout<<"---------------------------------------CHAT BOT-------------------------------------------\n";
	cout<<"                              You can Chat with this Bot\n";
	cout<<"--------------------------------------------------------------------------------------------\n";
	string user,name,coding;
	cout<<"System:-How are you ?\n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-Thats really good\n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-Whats your name ?\n";
	cout<<"User-";
	cin>>name;
	cout<<"User-Ok! "<<name<<" nice to meet with you!!\n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-"<<name<<" can you share your hobbies with me ?\n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-Thats really looking awsm\n";
	cout<<"User:";
	cin>>user;
	cout<<"System:-Tell me something about your education currently which course you are persuing ?\n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-Okay that was really challenging one for you as a fresher !!\n";
	cout<<"User:";
	cin>>user;
	
	cout<<"System:-Whats your marks in class 12th boards ?\n";
	cout<<"User-";
	float marks;
	cin>>marks;
	if(marks>70&&marks<95)
	{
		cout<<"System:- Yes then Engineering is good option for you!!\n";
	}
	else if(marks<70)
	{
	  	cout<<"System:- Why you not go for the other fields they also have many scopes!!\n";
	}
	else
	{
		cout<<"System:- Then Du(Delhi University)is good option for you!!\n";
		
	}
	cout<<"User-";
	cin>>user;
	cout<<"System:-Ok thats really your decision and i hope that you will get success in this too \n";
	cout<<"User-";
	cin>>user;
	cout<<"System:-whats your goal ?\n";
	cout<<"User-";
	cin>>user;
	cout<<"User:-Best wishes for you from my side!!\n";
	cout<<"User-";
	cin>>user;
	cout<<"User:- Ok "<<name<<" have a nice day\n";
	cout<<"User-";
	cin>>user;
	cout<<"User-Thanks Once again!!\n";
	cout<<"-------------------------End of the coversation!!--------------------------------------\n";
	
	
	
	
}
