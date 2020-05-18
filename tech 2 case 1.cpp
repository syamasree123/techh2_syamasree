/*File Name     :case1.cc
  Author Name   :syama
  Description   :appication_ */
#include<iostream>
#include<map>
using namespace std;

class friendpage
{
public:
        map<string,string> mp;
    friendpage()
    {
        cout<<"friendpage class constructor is involked "<<endl;
    }
    void option()
    {
        int op;
        cout<<" press 1 to add list "<<endl;
        cout<<" \n press 2 to edit list " <<endl;
        cout<<" \n press 3 to delete list "<<endl;
        cout<<" \n press 4 to display "<<endl;
        cout<<" \n press 5 to onlydisplay "<<endl;
        cout<<" \n enter your option "<<endl;
        cin>>op;
        switch(op)
        {
            case 1: addlist();
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
                cout<<" Entered option is wrong "<<endl;

        }
    }

    void addlist()
    {

     int num;
     string name;
     string email;

     cout<<" enter the  number of items to add :- "<<endl;
     cin>>num;
     for(int i=1;i<=num;i++)
     {
         cout<<" Enter the name :- "<<endl;
         cin>>name;
         cout<<" Enter the email :- "<<endl;
         cin>>email;
         mp.insert(make_pair(name,email));
     }
        option();
    }

    void display()
    {

        for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }
        option();

    }
     void onlydisplay()
    {

        for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }

    }
    void del()
    {
        string str;
        cout<<" enter the name to delete :- "<<endl;
        cin>>str;
        mp.erase(str);
        option();
    }
    void edit()
    {
         string name;
         string Nname;
         string email;
         cout<<" name to edit details "<<endl;
         cin>>name;
         cout<<" Propose a new name "<<endl;
         cin>>Nname;
         cout<<" new email "<<endl;
         cin>>email;
         mp.erase(name);
         mp.insert(make_pair(Nname,email));

        option();
    }
    ~friendpage()
    {
        cout<<" friendpage class destructor is involked "<<endl;
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
    friendpage obj;
    obj.option();
	}
return 0;
}
