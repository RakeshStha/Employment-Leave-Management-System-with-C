#include<stdio.h>
#include<conio.h>
#include<string.h>
void run();
void cal();
void ra1();
void hr1();
void hr2();
void hr3();
void hr4();
void ra2();
void ra3();
struct l
   {
   char name[10];
   int age;
   char username[10];
   char password[10];
   };
struct al
   {
   char name[10];
   int age;
   char username[10];
   char password[10];
   };
struct app
   {
   char name[10];
   char s[10];
   char l[10];
   char type[10];
   };
void main()
   {
   clrscr();
   run();
   getch();
   }
   void run()
     {
     int choice;
     printf("________________________________________________________________________________\n");
     printf("##############################################################################\n");
     printf("\t\t\t:::::::::::::ASIA PACIFIC UNIVERSITY::::::::::\n");
     printf("\t\t\t\t:::::::::::::Malaysia:::::::::::::\n");
     printf("..............................................................................\n");
     printf("\t\t\t**********WELCOME TO OUR SYSTEM**********\n\n\n");
     printf("\tPress (1)------> Login for HR\n\n");
     printf("\tPress (2)------> Login for Academic Leader\n\n");
     printf("\tPress (3)------> Login for Lecturer\n\n\n");
     again:
     printf("________________________________________________________________________________\n");
     printf("\t\t\t#Please enter your login ID and password#\n");
     scanf("%d",&choice);
     system("cls");
     switch(choice)
       {
       case 1:
       ra1();
       break;
       case 2:
       ra2();
       break;
       case 3:
       ra3();
       break;
       default:
       printf("Invalid choice\n");
       goto again;
       }
     }

    void ra1()
     {
     struct al AL;
     struct l l1;
     FILE *ag,*ad;
     char u[10],p[10],n[10],cg;
     char w[10],r[10];
     char t;
     int chx;
     char U[20],P[20],M[10]="Rakesh",N[10]="Rojan",O[10]="Roj";
     char M1[10]="rakesh123",N1[10]="rojan123",O1[10]="roj123";
     int choice1,x,choic,cho,q,k;
     system("cls");
     printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n");
     printf("------------------------------------->>>>><<<<<-------------------------------------\n");
     printf("#################################################################################\n\n\n\n");
     printf("#You need to enter the username and password to access#\n\n\n\n");
     printf("Username:");
     scanf("%s",U);
     printf("\n\n\n");
     printf("Password:");
     scanf("%s",P);
     if(strcmp(U,M)==0 || strcmp(U,N)==0 || strcmp(U,O)==0)
       {
       if(strcmp(P,M1)==0 || strcmp(P,N1)==0 || strcmp(P,O1)==0)
       {
       again:
       system("cls");
       printf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
       printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");

       printf("\t\tPress (1)----> Create new Academic Leader's profile\n\n");
       printf("\t\tPress (2)----> Create new Lecturer's profile\n\n");
       printf("\t\tPress (3)----> Modify,delete,view & search lecturer profile\n\n");
       printf("\t\tPress (4)----> View the employee leaves status\n\n");
       printf("\t\tPress (5)----> Upload the yearly leaves in system\n\n");
       printf("\t\tPress (6)----> Upload the public & university holidays\n\n");
       printf("\t\tPress (7)----> Update & upload FAQs about university's leaves\n");
       printf("\t\t\t\t\tpolicies in system\n\n");
       printf("\t\tPress (8)---->To exit\n");
       scanf("%d",&choice1);
       switch(choice1)
	   {
	   case 1:
           system("cls");
	   printf("................................................................................\n");
	   printf("****************************CREATE NEW PROFILE****************************\n");
	   printf("*****************************OF ACADEMIC LEADER****************************\n");
	   printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	   ag=fopen("Shrestha.txt","a");
	   printf("#Please Enter the information of new Academic Leader below#\n\n");
	   printf("Name:");
	   scanf("%s",l1.name);
	   printf("\n\n");
	   printf("Age:");
	   scanf("%d",&l1.age);
	   printf("\n\n");
	   printf("Username:");
	   scanf("%s",l1.username);
	   printf("\n\n");
	   printf("Password:");
	   scanf("%s",l1.password);
	   fwrite(&l1,sizeof(l1),1,ag);
	   fclose(ag);
	   printf("Press (1) to continue.................................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }

	   case 2:
	   system("cls");
	   printf("________________________________________________________________________________\n");
	   printf("************************CREATE NEW PROFILE************************\n");
	   printf("*****************************OF LECTURER********************************\n");
	   printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n\n");
	   ag=fopen("rakesh.txt","a");
	   printf("Please Enter the information of new lecturer below\n\n");
	   printf("Name:");
	   scanf("%s",AL.name);
	   printf("\n\n");
	   printf("Age:");
	   scanf("%d",&AL.age);
	   printf("\n\n");
	   printf("Username:");
	   scanf("%s",AL.username);
	   printf("\n\n");
	   printf("Password:");
	   scanf("%s",AL.password);
	   fwrite(&AL,sizeof(AL),1,ag);
	   fclose(ag);
	   printf("Press (1) to continue..........................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 3:
	   hr3();
	   break;
	   case 4:
	   system("cls");
	   ad=fopen("Status.txt","r");
	   while((t=getc(ad))!=EOF)
	   {
	   printf("%c",t);
	   }
	   fclose(ad);
	   printf("Press (1) to continue.....................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 5:
	   system("cls");
	   printf("Press (1)----> To view calender\n\n");
	   printf("Press (2)----> To upload yearly leave\n\n");
	   printf("Press (3)----> To exist the system\n\n");
	   scanf("%d",&choic);
	   switch(choic)
	   {
	   case 1:
	   cal();
	   break;
	   case 2:
	   ad=fopen("Year.txt","a");
	   while((cg=getchar())!=EOF)
	   {
	   putc(cg,ad);
	   }
	   fclose(ad);
	   goto e;
	   case 3:
	   exit();
	   default:
	   goto e;
	   }
	   e:
	   printf("Press (1) to continue.............................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	    {
	    goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 6:
	   system("cls");
	   printf("Press (1)----> To upload public holidays\n\n");
	   printf("Press (2)----> To upload university or college holidays\n\n");
	   printf("Press (3)----> To view calender\n\n");
	   printf("Press (4)----> To exit\n");
	   scanf("%d",&cho);
	   switch(cho)
	   {
	   case 1:
	   ad=fopen("ABC.txt","a");
	   printf("#Upload the HOLIDAYS#\n\n");
	   while((cg=getchar())!=EOF)
	   {
	   putc(cg,ad);
	   }
	   fclose(ad);
	   goto ex;
	   case 2:
	   ad=fopen("DEF.txt","a");
	   printf("#Upload the HOLIDAYS#\n\n");
	   while((cg=getchar())!=EOF)
	   {
	   putc(cg,ad);
	   }
	   fclose(ad);
	   goto ex;
	   case 3:
	   cal();
	   goto ex;
	   case 4:
	   exit();
	   default:
	   goto ex;
	   }
	   ex:
	   printf("Press (1) to continue.........................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 7:
	   ad=fopen("MNO.txt","a");
	   printf("#Upload Or Upadate Policy And FAQ's of system#\n\n");
	   while((cg=getchar())!=EOF)
	   {
	   putc(cg,ad);
	   }
	   fclose(ad);
	   printf("Press (1) to continue.............................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 8:
	   exit();
	   default:
	   printf("Invalid Input\n\n");
	   printf("Press (1) to continue........................\n");
	   scanf("%d",&chx);
	   if(chx==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	     }
	   }
	   }
	   }
	   void cal()
	   {
	   char *y[]={"Janaury","Febrary","March","April","May","June","July","August","September","October","November","December"};
	   int week,first=1,day,month;
	   int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	   char nx;
	   for(month=0;month<12;month++)
	   {
	   again:
	   system("cls");
	   printf("\t  ___________________________________________________\n");
	   printf("       -----------------------------------------------------\n",y[month]);
	   printf("\tSUN     MON      TUE      WED     THUR      FRI      SAT\n");
	   for(week=0;week<first;week++)
	   {
	   printf("         ");
	   }
	   for(day=1;day<days[month];day++)
	   {
	   printf("%9d",day);
	   if(++week>6)
	   {
	   printf("\n");
	   week=0;
	   }
	   }
	   printf("\n\n\n");
	   printf("\n\t\t*Press 'n' to next* \n\n\t\t*Press 'r' to previous*\n\n\t\t*Press 'e' to exist*\n\n ");
	   scanf("%c",&nx);
	   if(nx=='n')
	   {
	   }
	   else if(nx=='r')
	   {
	   month=month-1;
	   goto again;
	   }
	   else
	   {
	   goto end;
	   }
	   first=week;
	   }
	   end:
       }
       void hr3()
	 {
	 struct al AL;
	 FILE *ag,*ag1,*ag3,*ag12;
	 int choice,a,i,m=0,a1,chxx;
	 char na[10],p[10],u[10],n[10],n1[10],u1[10],p1[10];
	 again:
	 system("cls");
	 printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#####################~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\n");
	 printf("\t\tPress (1)---> To modify lecturer profile\n\n");
	 printf("\t\tPress (2)----> To delete lecturer profile\n\n");
	 printf("\t\tPress (3)----> To view lecturer profile\n\n");
	 printf("\t\tPress (4)----> To search lecturer profile\n\n");
	 printf("\t\tPress (5)----> To exist system\n\n");
	 scanf("%d",&choice);
	 switch(choice)
	   {
	   case 1:
	   system("cls");
	   printf("-----------------------------------------------------------------------------------\n");
	   printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<UPDATE>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	   printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n\n\n");
	   printf("\t#Please enter your name to modify#\n");
	   scanf("%s",na);
	   ag1=fopen("Tar.txt","a");
	   ag=fopen("rakesh.txt","r");
	   while(fread(&AL,sizeof(AL),1,ag)==1)
	     {
	     printf("%s",AL.name);
	     if(strcmp(na,AL.name)==0)
	       {
	       printf("#Please enter the information for modification#\n");
	       printf("Name:");
	       scanf("%s",AL.name);
	       printf("\n\n");
	       printf("Age:");
	       scanf("%d",&AL.age);
	       printf("\n\n");
	       printf("Username:");
	       scanf("%s",AL.username);
	       printf("\n\n");
	       printf("Password:");
	       scanf("%s",AL.password);
	       fwrite(&AL,sizeof(AL),1,ag1);
	       m=1;
	       }
	       else
	       {
	       fwrite(&AL,sizeof(AL),1,ag1);
	       }
	       }
	       if(m==0)
	       {
	       printf("Error file not match\n");
	       break;
	       }
	       fclose(ag);
	       fclose(ag1);
	       ag=fopen("rakesh.txt","w");
	       fclose(ag);
	       ag1=fopen("Tar.txt","r");
	       ag=fopen("rakesh.txt","a");
	       while(fread(&AL,sizeof(AL),1,ag1)==1)
		  {
		 fwrite(&AL,sizeof(AL),1,ag);
		  }
		  fclose(ag);
		  fclose(ag1);
		  ag1=fopen("Tar.txt","w");
		  fclose(ag1);
		  printf("Press (1) to continue..............................\n");
		  scanf("%d",&chxx);
		  if(chxx==1)
		  {
		  goto again;
		  }
		  else
		  {
		  break;
		  }
	   case 2:
	   system("cls");
	   printf("..................................................................................\n");
	   printf(":::::::::::::::::::::::::::::::::::DELETE:::::::::::::::::::::::::::::::::::::::::::\n");
	   printf("<><><><><><><><><><><><><><><>><><<><><><><><><><><><><><><><><><><><><><><><><>\n\n\n\n\n");
	   printf("\t\t##Please enter your name that you want to delete information##\n");
	   scanf("%s",na);
	   ag12=fopen("raw.txt","w");
	   ag3=fopen("rakesh.txt","r");
	   while(fread(&AL,sizeof(AL),1,ag3)==1)
	     {
	   if(strcmp(na,AL.name)==0)
	     {
	     m=1;
	     }
	   else
	     {
	     fwrite(&AL,sizeof(AL),1,ag12);
	     }
	     }
	     if(m==0)
	       {
	       printf("Match doesnot found\n");
	       break;
	       }
	       fclose(ag12);
	       fclose(ag3);
	       ag3=fopen("rakesh.txt","w");
	       fclose(ag3);
	       ag3=fopen("rakesh.txt","w");
	    ag12=fopen("raw.txt","r");
	    if(ag12==0)
	    {
	    printf("Error opening file\n");
	    }
	    while(fread(&AL,sizeof(AL),1,ag12)==1)
	      {
	      fwrite(&AL,sizeof(AL),1,ag3);
	      printf("\n");
	      }
	      fclose(ag3);
	      fclose(ag1);
	     ag12=fopen("Tat.txt","w");
	     fclose(ag12);
	     printf("Press (1) to continue..............................\n");
	     scanf("%d",&chxx);
	     if(chxx==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	   case 3:
	   system("cls");
	   printf("<><><><><><><><><><><>><<><><><>>><<><><><><><><><><><><><><><><><><><><><><><>><><><><\n");
	   printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!Lecturer Profile!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	   printf("--------------------------------------------------------------------------------\n\n\n\n\n");

	   printf("\t\tName             Age         Username       Password\n");
	   ag=fopen("rakesh.txt","r");
	   while(fread(&AL,sizeof(AL),1,ag)==1)
	   {
	   printf("\t\t%s    \t %d\t      %s   \t %s\n",AL.name,AL.age,AL.username,AL.password);
	   }
	   fclose(ag);
	   printf("Press (1) to continue...................................\n");
	   scanf("%d",&chxx);
	   if(chxx==1)
	   {
	   hr3();
	    }
	    else
	    {
	    exit();
	    }
	   case 4:
	   system("cls");
	   printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	   printf("       ::::::::::::::::::::SEARCH LECTURER PROFILE:::::::::::::::::::: \n");
	   printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>><><><>\n");
	   printf("TYPE HERE:");
	   scanf("%s",n1);
	   printf("\n\n\n\n");
	   ag=fopen("rakesh.txt","r");
	   while(fread(&AL,sizeof(AL),1,ag)==1)
	     {
	      if(strcmp(n1,AL.name)==0)
	      {
	      m=1;
	      printf("#Here is the information of %s#\n\n\n");
	      printf(" Name:%s\n Age:%d\n Username:%s\n Password:%s\n",AL.name,AL.age,AL.username,AL.password);
	      break;
	      }
	      }
	      if(m==0)
		{
		printf("##The name that you search is not present in the organization##\n");
		break;
		}
	     fclose(ag);
	     printf("Press (1) to continue..................................\n");
	     scanf("%d",&chxx);
	     if(chxx==1)
	     {
	     hr3();
	     }
	     else
	     {
	     break;
	     }
	   case 5:
	   exit();
	   break;
	   default:
	   break;
	   }
	 }


       void ra2()
	{
	struct l l1;
	struct app LE;
	char ch11,ch2,ch3,cx;
	FILE *ad,*ad1;
	char na[10];
	int choice2,c,a,choice;
	int chx1;
	char *o[]={"Approved","Rejected"};
	char n2[10],u2[10],p2[10],d2a[10],d3[10],t2[10],n3[10],u3[10],p3[10],da[10],db[10],t3[10];
	char n[10],p1[10],n1[10],u[10],p[10],d1[10],d2[10],u1[10],ch,ch1,ty1[10],t1[10];
	system("cls");
	printf("******************************WELCOME TO THE SYSTEM******************************\n\n\n");
	printf("#Please enter your username & password#\n\n");
	printf("Username:");
	scanf("%s",u1);
	printf("\n\n");
	printf("Password:");
	scanf("%s",p1);
	printf("\n\n");
	ad=fopen("Shrestha.txt","r");
	while(fread(&l1,sizeof(l1),1,ad)==1)
	{
	if(strcmp(u1,l1.username)==0 && strcmp(p1,l1.password)==0)
	{
	again:
	system("cls");
	printf("*****************************************************************************\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\t\tPress (1)----> To view lecturer's leave application\n");
	printf("\t\tPress (2)----> To approve or reject the leave\n");
	printf("\t\tPress (3)----> To delete the leave application\n");
	printf("\t\tPress (4)----> To view public university holiday and  policy\n");
	printf("\t\tPress (5)----> To exit\n");
	printf("##Please enter the choice given above##\n");
	scanf("%d",&choice2);
	switch(choice2)
	  {
	   case 1:
	   system("cls");
	   ad=fopen("app.txt","r");
	   printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	   printf("=====================================================================================\n\n");
	   printf("Name             Username           Date:               Type\n\n\n");
	   while(fread(&LE,sizeof(LE),1,ad)==1)
	   {
	   printf("Appliacant Name:%s  ",LE.name);
	   printf("Duration of leave:%s-%s  ",LE.s,LE.l);
	   printf("Type of leave:%s\n",LE.type);
		   }
	   fclose(ad);
	   printf("\n\nPress (1) to continue..................................\n");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 2:
	   ad1=fopen("Status.txt","a");
	   ad=fopen("Application.txt","r");
	   system("cls");
	   printf(".................................................................................................\n");
	   while(fread(&LE,sizeof(LE),1,ad)==1)
	   {
	   printf("Name=%s  Duration of leave=%s-%s  Type of leave=%s\n",LE.name,LE.s,LE.l,LE.type);
	   printf("\n##Please enter 1 to approve application##\n");
	   printf("Press (0)----> To reject application\n");
	   scanf("%d",&c);
	   if(c==1)
	   {
	   fprintf(ad1,"Name=%s Duration Date:%s-%s",LE.name,LE.s,LE.l);
	   fprintf(ad1,"\tResult=%s\n",o[0]);
	   }
	   if(c==0)
	   {
	   fprintf(ad1,"Name=%s  Duration Date:%s-%s",LE.name,LE.s,LE.l);
	   fprintf(ad1,"\tResult=%s\n",o[1]);
	   }
	   }
	   fclose(ad);
	   fclose(ad1);
	   printf("\n\nPress (1) to continue...........................\n");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 3:
	   printf("Please enter the name to delete\n\n");
	   scanf("%s",na);
	   ad1=fopen("Del.txt","a");
	   ad=fopen("app.txt","r");
	   while(fread(&LE,sizeof(LE),1,ad)==1)
	   {
	   if(strcmp(na,LE.name)==0)
	   {
	   }
	   else
	   {
	   fwrite(&LE,sizeof(LE),1,ad1);
	   }
	   }
	   fclose(ad);
	   fclose(ad1);
	   ad=fopen("app.txt","w");
	   fclose(ad);
	   ad=fopen("app.txt","a");
	   ad1=fopen("Del.txt","r");
	   while(fread(&LE,sizeof(LE),1,ad1)==1)
	   {
	   fwrite(&LE,sizeof(LE),1,ad);
	   }
	   fclose(ad);
	   fclose(ad1);
	   ad1=fopen("Del.txt","w");
	   fclose(ad1);
	   printf("\n\nPress (1) to continue......................................\n");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 4:
	   system("cls");
	   printf("**********************************View**************************************\n");
	   printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
	   printf("Press (1)----> To view calender\n");
	   printf("Press (2)----> To view public holidays\n");
	   printf("Press (3)----> To view university or college holidays\n");
	   printf("Press (4)----> To view policies\n");
	   printf("Press (5)----> To exit\n");
	   scanf("%d",&choice);
	   switch(choice)
	   {
	   case 1:
	   cal();
	   break;
	   case 2:
	   ad=fopen("ABC.txt","r");
	   while((ch11=getc(ad))!=EOF)
	   {
	   printf("%c",ch11);
	   }
	   fclose(ad);
	   printf("\n\nPress (1) to continue.............................");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 3:
	   ad1=fopen("DEF.txt","r");
	   while((ch2=getc(ad1))!=EOF)
	   {
	   printf("%c",ch2);
	   }
	   fclose(ad1);
	   printf("\n\nPress (1) to continue................................\n");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 4:
	   ad=fopen("MNO.txt","r");
	   while((ch3=getc(ad))!=EOF)
	   {
	   printf("%c",ch3);
	   }
	   fclose(ad);
	   printf("\n\nPress (1) to continue..................................\n");
	   scanf("%d",&chx1);
	   if(chx1==1)
	   {
	   goto again;
	   }
	   else
	   {
	   break;
	   }
	   case 5:
	   exit();
	   default:
	   break;
	   }
	   break;
	   case 5:
	   exit();
	   default:
	   break;
	  }
	}
	}
	fclose(ad);
	}
	 void ra3()
	  {
	  struct al AL;
	  struct app LE;
	  FILE *ad,*ad1;
	  char u1[10],p1[10],n[10],u[10],p[10],d1[10],d2[10],n1[10];
	  char x[10],y[10],ty[10];
	  int a,choicee,c,choice1,z,cha,cw;
	  char ch,ch1,ch2,ch3,c1;
	  e:
	  system("cls");
	  printf("+++++++++++++++++++++++++++++++++++++++APU+++++++++++++++++++++++++++++++++++++\n");
	  printf("<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n\n");
	  printf("##Please enter your username & password##\n\n\n");
	  printf("Username:");
	  scanf("%s",u1);
	  printf("\n\n");
	  printf("Password:");
	  scanf("%s",p1);
	  printf("\n\n");
	  ad=fopen("rakesh.txt","r");
	  while(fread(&AL,sizeof(AL),1,ad)==1)
	  {
	  if(strcmp(u1,AL.username)==0 && strcmp(p1,AL.password)==0)
	     {
	     again:
	     system("cls");
	     printf("#######################################################################################\n");
	     printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!WELCOME TO THE SYSTEM!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n\n");
	     printf("Press (1)----> To apply application\n");
	     printf("Press (2)----> To check leave status\n");
	     printf("Press (3)----> To view public,university holidays and policies\n");
	     printf("Press (4)----> To exit\n");
	     scanf("%d",&choicee);
	     switch(choicee)
	     {
	     case 1:
	     system("cls");
	     printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
	     ad1=fopen("app.txt","a");
	     printf("Do you want to apply:\n\n\n");
	     printf("\t\tPress (1)----> To apply\n\n");
	     printf("\t\t\t##Enter any key to exist##\n\n\n");
	     scanf("%d",&c);
	     if(c==1)
	     {
	     system("cls");
	     printf("**************************************************************************************\n\n");
	     printf("#Please Fill up the below information#\n");
	     printf("Name:");
	     scanf("%s",LE.name);
	     printf("\n\n");
	     printf("Starting date:mm/dd:");
	     scanf("%s",LE.s);
	     printf("\n\n");
	     printf("Ending date:mm/dd:");
	     scanf("%s",LE.l);
	     printf("\n\n");
	     printf("Enter your type of leave\n");
	     scanf("%s",LE.type);
	     fwrite(&LE,sizeof(LE),1,ad1);
	     }
	     else
	     {
	     goto end;
	     }
	     fclose(ad1);
	     end:
	     printf("\n\n\n");
	     printf("Press (1) to continue.....................................\n");
	     scanf("%d",&cha);
	     if(cha==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	     case 2:
	     ad=fopen("Status.txt","r");
	     while((c1=getc(ad))!=EOF)
	     {
	     printf("%c",c1);
	     }
	     printf("\n\n");
	     printf("Press (1) to continue........................................\n");
	     scanf("%d",&cha);
	     if(cha==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	     case 3:
	     printf("Press (1)----> To view calender\n");
	     printf("Press (2)----> To view public holidays\n");
	     printf("Press (3)----> To view university holidays\n");
	     printf("Press (4)----> To view policies\n");
	     printf("Press (5)----> To exit\n");
	     scanf("%d",&choice1);
	     switch(choice1)
	     {
	     case 1:
	     cal();
	     break;
	     case 2:
	     ad=fopen("ABC.txt","r");
	     while((ch1=getc(ad))!=EOF)
	     {
	     printf("%c",ch1);
	     }
	     fclose(ad);
	     printf("\n\nPress (1) to continue...................................\n");
	     scanf("%d",&cw);
	     if(cw==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	     case 3:
	     ad1=fopen("DEF.txt","r");
	     while((ch2=getc(ad1))!=EOF)
	     {
	     printf("%c",ch2);
	     }
	     fclose(ad1);
	     printf("\n\nPress (1) to continue...............................\n");
	     scanf("%d",&cw);
	     if(cw==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	     case 4:
	     ad=fopen("MNO.txt","r");
	     while((ch3=getc(ad))!=EOF)
	     {
	     printf("%c",ch3);
	     }
	     fclose(ad);
	     printf("\n\nPress (1) to  continue................................\n");
	     scanf("%d",&cw);
	     if(cw==1)
	     {
	     goto again;
	     }
	     else
	     {
	     break;
	     }
	     case 5:
	     exit();
	     default:
	     break;
	     }
	     case 4:
	     exit();
	     break;
	     default:
	     printf("Error");
	     printf("Invalid choice");
	     goto again;
	     }
	     break;
	  }
	  else
	  {
	  printf("Error invalid choice\n");
	  goto e;
	  }
	  }
	  fclose(ad);
	  }
