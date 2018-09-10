#include<graphics.h>
#include<iostream.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int choice_menu();
int compair_distance(long distance);
void last_launch();
void soft_heading();
void search_missile();
class Club { char password[20];
	     char club_ID[20];
	     public:

	       void getpass();
	       int check();
	       int menu();
	      };
//**----------------------------------------------**--------------------------------------------**
	     //Function for front and loading screen.
//**----------------------------------------------**--------------------------------------------**
	      void Club :: getpass()
	      { clrscr();
		textcolor(GREEN);
		cout<<"\n\n\n\n\n\t\t***************************************************";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<"-----------------------------------------------"<<"** ";
		cout<<"\n\t\t**"<<"\t\t WELCOME TO LAUNCHER"<<setw(15)<<"**";
		cout<<"\n\t\t**"<<"-----------------------------------------------"<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t**"<<setw(49)<<"**";
		cout<<"\n\t\t***************************************************";
		cout<<"\n\n";
		cout<<"LOADING......";
		cout<<"\n\n\n";
		for(int c=0;c<80;c++)
	       {
		cout<<"";
		delay(50);
		}
	      }
//**---------------------------------------------------------------------------------------------**
		//Function to check login passwor and user ID....
//**---------------------------------------------------------------------------------------------**

		int Club::check()
		{   int i=5,ch=0;


		 do{ clrscr ();
		     soft_heading();
		     cout<<"\n\t                      ......LOGIN..... ";
		     cout<<"\n\t----------------------------------------------------------------";
		     cout<<"\n\n\n\n\n\n\n\t\t\t\tUSER ID:-" ;
		     gets(club_ID);
		     cout<<"\n\t\t\t\tPASSWORD:-";
		     gets(password); clrscr ();

		  if(strcmp(password,"MISSIONPAK")==0 && strcmp(club_ID,"INDIA")==0)

		    {  clrscr ();
		       soft_heading();
		       cout<<"\n\n\n\n\n\n\t\t\t\t  L@GIN SUCCESFUL ";
		       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n"<<setw(40)<<" LOaDiNg CoNtEnT";
		       for(i=0;i<6;i++)
		       { delay(600);
			 cout<<" *";
			}
			ch=1;
		      return(ch);

		      }

		 else
		 {   soft_heading();

		    cout<<"\n\n\n\n\n\t\t\t\t SORRY LOGIN FAILED";
		    if(strcmp(club_ID,"INDIA")!=0)
		    cout<<"\n\n\t\t\t !! INVALID USER NAME !!";
		    if(strcmp(password,"MISSIONPAK")!=0)
		    cout<<"\n\t\t\t !! INVALID PASSWORD !!";
		    char ext;
			cout<<"\n\n\n\n\t\t re-enter password and club ID";
			cout<<"\n\t\t\t("<<i<<")   chance remaining";
			cout<<"\n\n\t......DO You want to RETRY(y=yes , n=no)-> ";
			cin>>ext;
			if(ext=='n'||ext=='N')
			 exit(0);


		       }
			i--;
		       }
			while (i>=0);

		       return(ch);
		}
//****----------------------------------------------------------------------------------****
			//STARTING OF CLASS CONTENT....
//****----------------------------------------------------------------------------------****
			 class mis_content
			   { char mis_name[50];
			      long range,rate;
			      char wap_code[11];
			      float speed,mis_length,weight;
			      public:

			      void missile_info();
			      void show_missile_info();
			      long giverange()
			      { return range;
			       }
			       char* give_mis_name()
				{  return mis_name;
				 }
				 char* give_wap_code()
				  { return wap_code;
				   }
			    };

			class content
			   {  char tgt_location[50],mis_base[10];
			      long distance;
			      public:
			      char dsc;
			      int load_content();
			      void show_load_content();
			      long give_distance()   //Accessor Function..
			       { return distance;
				 }

			     };
				 void mis_content::missile_info()
				 { clrscr();
				   soft_heading();
				   cout<<"\n\n\t\t\t ****FEED NEW MISSILE INFORMATION HERE*** ";
				   cout<<"\n\n\t\t\t\t Missile name-> ";
				   gets(mis_name);
				   cout<<"\n\t\t\t Range(in km.)-> " ;
				   cin>>range;
				   cout<<"\n\t\t\t Weight(in kg)-> ";
				   cin>>weight;
				   cout<<"\n\t\t\t Weapone CODE -> ";
				   gets(wap_code);
				   cout<<"\n\t\t\t Distruction rating (1-10) ->";
				   cin>>rate;
				   cout<<"\n\t\t\t Speed (in km/hr)-> " ;
				   cin>>speed;
				   cout<<"\n\t\t\t Missile Length(in meters)-> ";
				   cin>>mis_length;
				  }
				  void mis_content::show_missile_info()
				   { delay(100);
				     cout<<"\n\n\t\t\t MISSILE NAME-> ";
				     puts(mis_name);
				     delay(100);
				     cout<<"\t\t\t RANGE-> "<<range<<" km";
				     delay(100);
				     cout<<"\n\t\t\t Weight-> "<<weight<<" kg";
				     delay(100);
				     cout<<"\n\t\t\t distruction rating-> "<<rate;
				     delay(100);
				     cout<<"\n\t\t\t Weapon_code-> "<<wap_code;
				     delay(100);
				     cout<<"\n\t\t\t Speed-> "<<speed<<" km/hr";
				     delay(100);
				     cout<<"\n\t\t\t Missile Length-> "<<mis_length<<" m";
				     }


			int content::load_content()
			 { clrscr();
			    soft_heading();
			    { int ch1;
			      cout<<"\n\n\t\t\tFEED INFORMATION"<<endl;
			      for(int i=0;i<80;i++)
			      cout<<"-";
			      cout<<"\n\n\t\t Targate location name-> ";
			      gets(tgt_location);
			      cout<<"\n\t\tENTER TARGET DISTANCE(in km.)-> ";
			      cin>>distance;
			      cout<<"\n\t\t MISSILE BASE(LAND is dafault base)-> 1. AIR \n\t\t\t\t\t 2.WATER\n\t\t\t\t\t 3. LAND";
			      cout<<"\n\t\t\t Enter Base Choice-> ";
			      cin>>ch1;
			       if(ch1==1)
				strcpy(mis_base,"AIR");
			      else
			       if(ch1==2)
				 strcpy(mis_base,"WATER");
			       else
				strcpy(mis_base,"LAND");

			      cout<<"\n\n\t\t ARE you sure to proceed(press 'Y' for yes\'N' for no)-> ";
			      cin>>dsc;

			      return dsc;
			     }

			      }
			  void content ::show_load_content()
			    {  delay(100);
			       cout<<"\n\n\t\t\t TARGET Location Name-> " ;
			       puts(tgt_location);
			       delay(100);
			       cout<<"\t\t\tTARGET Distance from BAse-> "<<distance<<" km";
			       delay(100);
			       cout<<"\n\t\t\tMISSILE Base-> ";
			       puts(mis_base);
			       }


//**--------------------------------------------------------------------------------------------------**
		//Starting of Main Function..
//**---------------------------------------------------------------------------------------------------**

		 void main ()
		 {  clrscr ();
		     textcolor(GREEN);
		    soft_heading();
		    Club C;  content co;
		    int Log,ch;
		    mis_content mco;

		    C.getpass();
		     char l,k='n';
		     Log=C.check() ;
		     if(Log==0)
		     exit(0);
		    while(k=='n')
		    {
		      ch=choice_menu();
		      if(ch==1)
		      {

			l=co.load_content();
			if(l=='Y'||l=='y')
			 {
			   int l;
			   long distance=co.give_distance();


			   l=compair_distance(distance);    //compair_distance(distance);
			    if(l==1)
			  {  ofstream outlaunch;
			    outlaunch.open("Launch_info.dat",ios::out|ios::app|ios::binary);
			     outlaunch.write((char*)&co,sizeof(co));

			     outlaunch.close();
			      for( int i=10;i>=0;i--)
			    {
			      cout<<"\n\n\n\n\n MISSILE WILL  LAUNCH IN '"<<i<<"' sec.";
			      sleep(1);
			      clrscr() ;
			      }
			     last_launch();
			   }
			  }

			}
			else
			    if(ch==3)
			     {  int choice;
				clrscr();
				cout<<"\n\n\n\n\n\t\t\t 1 - Search for MISSILE ";
				cout<<"\n\t\t\t\t 2 - Show All MISSILE DETAILS  ";
				cout<<"\n\n Enter Your Choice HERE -> ";
				cin>>choice;
				if(choice==1)
				 { search_missile();
				  }
				else
				if(choice==2)
				{ char next='y';
				   ifstream infile;
				   infile.open("missile.dat",ios::in|ios::binary);

				   while(!infile.eof()&&next=='y')
				    {
				      clrscr();
				      soft_heading();
				      infile.read((char*)&mco,sizeof(mco));
				      mco.show_missile_info();
				      cout<<"\n\n\t\t DO YOU WANT TO SEE NEXT FILE INFORMATION (PRESS 'y'else 'n')-> ";
				      cin>>next;
				    } infile.close();

				   }
				   else
				   { clrscr();
				     cout<<" \n\n !!!!! INVALID CHOICE !!!!";
				     getch();
				     }
				 }
			 else
			     if(ch==4)
			     {  char ent_more='y';
				ofstream outfile;
				outfile.open("missile.dat",ios::out|ios::app|ios::binary);
				while(ent_more=='y')
				{   mco.missile_info();
				    outfile.write((char*)&mco,sizeof(mco));

				    cout<<"\n\n\t\t **Do you want to feed more('y'=yes\ 'n'=no)-> ";
				    cin >>ent_more;
				   } outfile.close();
			       }
			       else
				   if(ch==2)
				   {  content co;

				      clrscr();
				      soft_heading();
				      cout<<"\n\n\n\n\n\n\n\n\n\t\t\t LOADING DATA PLEASE WAIT ";
				      for(int i=0;i<6;i++)
				      { cout<<" * ";
				       delay(600);
				       }

				      ifstream ininfo;

				       clrscr();
				       soft_heading();
				       char next='y';
				       ininfo.open("Launch_info.dat",ios::in|ios::binary);
				       while(!ininfo.eof()&&next=='y')
				       {
					   ininfo.read((char*)&mco,sizeof(mco));
					    ininfo.read((char*)&co,sizeof(co));
					     cout<<"\n\t\t ***** TARGET INFORMATION *****";
					  cout<<"\n\t _________________________________________________";
					  co.show_load_content();
					  cout<<"\n\t______________________________________________";
					  cout<<"\n\t\t **** MISSILE USED *****";
					  cout<<"\n\t_______________________________________________";

					  mco.show_missile_info();
					  cout<<"\n__________________________________________________________________________";
					 cout<<"\n DO YOU WANT TO SEE THE NEXT LAUNCH DETAIL PRESS 'y' and hit ENTER-> ";
					 cin>>next;
					  clrscr();
					  soft_heading();
					}  ininfo.close();


				       }



				 else
				   if(ch==5)
				   exit(0);
				 else
				   {
				     cout<<"\n\n!!!!!! INVALID CHOICE";
				    }

		       }
		       getch();


		    }	 //END OF MAIN FUNCTION....
//****-------------------**********************-------------------------------------------------------****

		      //Choice Menu Function..

		      int choice_menu()
		      {
			 int ch;
			clrscr ();
			soft_heading();
			cout<<"\n\n\t\t\t\t MAIN CHOICE MENU";
			cout<<"\n\n\t 1- LAUNCH MISSILE";
			cout<<"\n\t\t 2- VIEW PAST RECORDS";
			cout<<"\n\t\t\t3- VIEW MISSILE INFORMATION";
			cout<<"\n\t\t\t\t4- FEED NEW MISSILE INFORMATION";
			cout<<"\n\t\t\t\t\t5- EXIT";
			cout<<"\n\n\n\t\t Enter your choice->";
			cin>>ch;
			return ch;
			}
//------------------+_________________________________________________________+--------------------*******
		       //function to compair distance and suggest the missile.
//-------------------|_________________________________________________________|--------------------------
		      int compair_distance( long distance)
			  { mis_content mco;
			    clrscr();
			    soft_heading();
			    char change='n';
			    ifstream indata;
			    ofstream outdata;
			    indata.open("missile.dat",ios::in|ios::binary);
			    outdata.open("Launch_info.dat",ios::in|ios::app|ios::binary);
			    while(!indata.eof())
			    { indata.read((char*)&mco,sizeof(mco));
			      if(mco.giverange()>=distance)
			       { cout<<"\n\n\t\t *********MISSILE SUGGESTED**********";
				 mco.show_missile_info();
				 cout<<"\n\n DO YOU WANT ANOTHER MISSILE PRESS ('y'= yes)-> ";
				 cin>>change;
				 clrscr();
				 if(change!='y')
				 {
				   outdata.write((char*)&mco,sizeof(mco));
				   outdata.close();
				indata.close();
				 return(1);
				 }
				}
				}

				 cout<<"\n\n\t\t NO!!! missile found under range";
				outdata.close();
				indata.close();
				getch();
				 return(0) ;
			      }
//__________________________________________________________________________________________**
				      // Function of searching a missile.
				      void search_missile()
					  {
					      int ch=0;
					      mis_content mco;
					      content co;
					      char name[50],code[10];

					 do{  clrscr();
					      cout<<"\n\n\t\t______SEARCH OPTION_______";
					      cout<<"\n\n\t\t 1-Search By Name.";
					      cout<<"\n\n\t\t\t 2-Search By Weapon CODE .";
					      cout<<"\n\n\t\t\t 3-Exit To Main Menu . ";
					      cout<<"\n\n Enter your choice here -> ";
					      cin>>ch;
					      ifstream infile;
					      infile.open("launch_info.dat",ios::in|ios::binary);
					      int flag=0;

					    if(ch==1)
					       { clrscr();
						 cout<<"\n\nEnter Name Of The Missile You Are Searching-> ";
						 gets(name);
						  while(!infile.eof())
						   {
						    infile.read((char*)&mco,sizeof(mco));
						     infile.read((char*)&co,sizeof(co));
						     if(strcmp(name,mco.give_mis_name())==0)
						      {  clrscr();
							 mco.show_missile_info();
							 flag=1;
							  getch();
							  break;

							}

						     }
						      if(flag==0)
						       { clrscr();
							 cout<<" \n\n\n\n\n\n\n\n\t\t\t*****MISSILE NOT FOUND*******";

							}
						   }

						 else
						   if(ch==2)
						    {  clrscr();
						       cout<<"\n\n\n\t\t Enter The Missile Code-> ";
						       gets(code);
						       while(!infile.eof())
							{ infile.read((char*)&mco,sizeof(mco));
							   infile.read((char*)&co,sizeof(co));
							  if(strcmp(code,mco.give_wap_code())==0)
							    { clrscr();
							       mco.show_missile_info();
							       flag=1;
							       getch();
							       break;

							      }
							  }
							   if(flag==0)
							     { clrscr();
							       cout<<"\n\n\n\n\t\t\t !!!! NO SUCH MISSILE FOUND";

							       }


							  }
						       else
							   if(ch==3)
							   break;
							 else
							  { clrscr();
							    cout<<"\n\n\n\t\t\t!!!! INVALID CHOICE !!!!!";
							    getch();
							   }
							   infile.close();
						       }while(ch!=3);

						   getch();
					       }
//______________________________________________________________________________________________________________
			  void soft_heading()
			       {  cout<<"\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|";
				  cout<<"\n|\t\t"<<"         INDIAN ARMY MISSILE SOFTWARE"<<setw(26)<<"|";
				  cout<<"\n|_____________________________________________________________________________|"<<endl;
				}

//________________________________________________________________________________________________________________

			void last_launch()
			   { clrscr();
			     int gd=DETECT,gm;
			     initgraph(&gd,&gm,"c:\\tc\\bgi");


			      for(int i=0;i<480;i+=20)
			     { setcolor(BLUE);
			       line(250,350-i,250,450-i);
			       line(275,350-i,275,450-i);
			       setcolor(GREEN);
			       line(250,350-i,262,300-i);
			       line(275,350-i,262,300-i);

			       line(250,350-i,275,350-i);
			       line(250,450-i,275,450-i);
			       setcolor(RED);
			       line(250,450-i,240,480-i);
			       line(275,450-i,285,480-i);
			       line(240,480-i,258,458-i);
			       line(258,458-i,264,480-i);
			       line(264,480-i,268,457-i);
			       line(268,457-i,285,480-i);
			       delay(500);
			       cleardevice();
			     }
				  closegraph();
				cout<<"\n\n\n\n\n\n\n\t\t\t\t SAVING DATA";
				for(i=0;i<4;i++)
				{cout<<" * ";
				  delay(600);
				  }
			   }












