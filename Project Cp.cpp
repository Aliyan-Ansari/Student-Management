#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int login (string , string );
void voucher(int ,string ,string ,string ,string ,string );
main()
{
	
	int a,o,verify,c_no,ver=94102,n_o=1,g,sel,crses[4],crss[5],crsse[6];
	string pd,ids,name,N_id,n_pwd,id_s,pw_d,session="DCS-FALL-18",prog="BS(CS)";
	string courses[12]={"ITCP","ITCP Lab","Islamiat","Urdu","Computer Programming","Computer Programming Lab","Calculus","Functional English","Communication Skills","Appied Physics","Electronics","ELectronics Lab"};
	int x=4;
	string name_="Aliyan",crd_h="12",id_="9201";
	voucher(x,name_,id_,crd_h,session,prog);
	cout<<"Enter id: ";
	cin>>ids;
	cout<<"Enter Password: ";
	cin>>pd;
	a=login(ids,pd);
	if(a==1)
	{
		cout<<setw(33)<<">>  Session Created  <<"<<endl;
		
	}
	else
	{
		cout<<setw(38)<<">> You Are Not Registered <<"<<endl;
		cout<<setw(34)<<"Please Sign Up for login"<<endl;
		cout<<"Enter your Name: ";
		cin>>name;
		cout<<"Enter Id: ";
		cin>>N_id;
		cout<<"Enter contact no: ";
		cin>>c_no;
		cout<<"Enter Password: ";
		cin>>n_pwd;
		cout<<setw(38)<<"Verify you are not a robot: "<<endl;
		cout<<setw(25)<<"94102"<<endl;
		cout<<"Enter the above numbers: ";
		cin>>verify;
		if(ver==verify)
		{
			cout<<setw(33)<<">> Your are registered Now <<"<<endl;
			o:
			cout<<" Please log in for registeration "<<endl;
			cout<<endl;
			cout<<"Enter Id: ";
			cin>>id_s;
			cout<<"Enter Password: ";
			cin>>pw_d;
			if(N_id==id_s && n_pwd == pw_d)
			{
				cout<<setw(19)<<" Welcome "<<endl;
				cout<<endl;
				cout<<"Your Avalaible courses list for registration are: "<<endl;
				cout<<endl;
				for(int v=0;v<12;v++)
				{
					cout<<n_o<<" "<<courses[v]<<endl;
					n_o++;
				}
				g:
				cout<<"How many courses you want to select within 4-6 : "<<endl;
				cin>>sel;
				if(sel==4)
				{
					for(int v=0;v<4;v++)
					{
						cout<<"select Course :"<<endl;
						cin>>crses[v];
						cout<<courses[--crses[v]]<<endl;
					}
					
				}
				else if(sel==5)
				{
					for(int v=0;v<5;v++)
					{
						cout<<"select Course :"<<endl;
						cin>>crses[v];
						cout<<courses[--crses[v]]<<endl;
					}
				}
				else if(sel==6)
				{
					cout<<"abc";
				}
				else
				{
				cout<<"Wrong number please select between 4 to 6"<<endl;
				goto g;
				}
			}	
			
			else
			{
			cout<<"Wrong Id Password "<<endl;
			goto o;
			}
		}
		else
		{
			cout<<setw(30)<<"Registeration failed"<<endl;
		}
	}
	system("pause");
}
int login(string ids , string pd)
{
	string id[5]={"1000","2000","3000","4000","5000"};
	string pwd[5]={"abc@1","abc@2","abc@3","abc@4","abc@5"};
	if((id[0]==ids && pwd[0]==pd) || (id[1]==ids && pwd[1]==pd) || (id[2]==ids && pwd[2]==pd) || (id[3]==ids && pwd[3]==pd) || (id[4]==ids && pwd[4]==pd))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void voucher(int sel,string name_,string id_,string crd_h,string session,string prog)
{
	int fee,r_fee=1100,t_fee;
	if(sel==4)
	{
		fee=3300*12;
		t_fee=fee+r_fee;
	}
	else if(sel==5)
	{
		fee=3300*15;
		t_fee=fee+r_fee;
	}
	else
	{
		fee=3300*18;
		t_fee=fee+r_fee;
	}
	string v_no="241807003389",acc="00427991681303";
	cout<<setw(50)<<">>--- FEES VOUCHER ---<<"<<endl;
	cout<<setw(45)<<"IQRA UNIVERSITY"<<endl;
	cout<<setw(44)<<"North Campus"<<endl;
	cout<<"024-17-19201"<<setw(60)<<"Voucher NO: "<<endl;
	cout<<setw(72)<<v_no<<endl;
	cout<<endl<<endl;
	cout<<setw(72)<<"Date: 29-07-2018"<<endl;
	cout<<setw(76)<<"Due Date: 30-07-2018"<<endl;
	cout<<endl;
	cout<<"HBL Collection Account Title: IQRA UNIVERSITY"<<endl;
	cout<<endl;
	cout<<"HBL BANK LTD"<<endl;
	cout<<endl;
	cout<<"Collection account # : "<<acc<<endl;
	cout<<endl;
	cout<<"Recieved With Thanks From"<<endl;
	cout<<endl;
	cout<<"Mr./Miss/Mrs.: "<<name_<<endl;
	cout<<endl;
	cout<<"Reg No.: "<<id_<<setw(63)<<"Total Credit Hours: "<<crd_h<<endl;
	cout<<endl;
	cout<<"Session: "<<session<<setw(45)<<"Program: "<<prog<<endl;
	cout<<endl;
	cout<<setw(65)<<"Courses: "<<sel<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"| Tution Fee        |"<<setw(50)<<"|  "<<fee<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"| Registeration Fee |"<<setw(51)<<"|   "<<r_fee<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"| Fine              |"<<setw(55)<<"|       "<<"|"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"| Amount Of Voucher |"<<setw(50)<<"|  "<<t_fee<<"|"<<endl;
	cout<<"_____________________________________________________________________________"<<endl;
	cout<<endl;
	cout<<"NOTE: Rs.2000/- penalty will be imposed after due date."<<endl;
	cout<<endl<<endl<<endl<<endl;
	cout<<"_____________________________________________________________________________"<<endl;
	cout<<"Bank Cashier                   Depositor's CNIC                  Bank Manager"<<endl;
}
