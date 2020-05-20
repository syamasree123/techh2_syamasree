#include<iostream>
#include<string>
using namespace std;

class record
{
	public:
		record()
		{
			cout<<"record constructor"<<endl;
		}
		
	int N;
    string name;
    string email;

void option()
    {
        int opt;
        cout<<"  1.add list "<<endl;
        cout<<" \n 2.edit list " <<endl;
        cout<<" \n 3.to delete list "<<endl;
        cout<<" \n 4.to display "<<endl;
        cout<<" \n 5.to onlydisplay "<<endl;
        cout<<" \n enter your option "<<endl;
        cin>>opt;
        switch(opt)
        {
            case 1: add();
                    break;
            case 2:edit();
                    break;
            case 3:del();
                    break;
            case 4:display();
                    break;
            case 5:onlydisplay();
                    break;
            default:
                cout<<" Option is invalid "<<endl;

        }
    }
    void add()
    {
	
     cout<<" enter the  number of items to add :- "<<endl;
     cin>>N;
     for(int i=1;i<=N;i++)
     {
         cout<<" Enter name :- "<<endl;
         cin>>name;
         cout<<" Enter email :- "<<endl;
         cin>>email;
         }
        option();
    }
	
	void del()
    {
        string str;
        cout<<" enter name to delete :- "<<endl;
        cin>>str;
        
    }
    void edit()
    {
         string name;
         string Nname;
         string email;
         cout<<" enter name to edit"<<endl;
         cin>>name;
         cout<<" enter a new name "<<endl;
         cin>>Nname;
         cout<<" new email "<<endl;
         cin>>email;
         

        option();
    }
    void display()
    {
    	cout<<"\n -----------------";
                cout<<"\n name";
                cout<<"\n Nname";
                cout<<"\n email";
	}
	void onlydisplay()
	{
		cout<<"\n -----------------";
                cout<<"\n name";
                cout<<"\n Nname";
                cout<<"\n email";
	}
	~record()
	{
		cout<<"record destructor"<<endl;
		
	}
};
    int main(int argc,char *argv[])
{

    if(argc>1)
	{
		cout<<"\n Usage of file --> \n"
		"\t filename.exe and enter"<<endl<<
		"			or"<<endl<<
		"\t ./filename.out and enter"<<endl;
	}
	else
	{
    record obj;
    obj.option();
	}
return 0;
}
    
