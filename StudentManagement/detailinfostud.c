

///       ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
///           P R O G R A M    F O R   M A N A G I N G    S T U D E N T   D E T A I L S   I N  A   C L A S S
///       ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//  NOTE:-  FOR SETTING PASSWORD GOTO - password.c


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>


//    GLOBAL   VARIABLES

    int roll,pin,i=0;
    float  totalmarks,percentage,math,phy,chem,bio,eng,phylab,chemlab,biolab;
    char name[30],ch,adr[200],fath[30],moth[30];


//                         *****************************
//                           M A I N   F U N C T I O N
//                         *****************************


void main()
{
    FILE *fp1,*fp2,*fp3,*fp4,*fp5;
    int x,pass,pass2,flag=0,flag1=0;
    char pass1[30],pass3[30];
    fp5=fopen("password.txt","r");
     printf("\n\tWELCOME TO THE SCREEN...HOPE YOU ARE READY");
    printf("\n\t------------------------------------------\n");
    getch();

        printf("ENTER THE NUMERIC PASSWORD:");                   //      NUMERIC PASSWORD
        scanf("%d",&pass2);
        fflush(stdin);
    while(!feof(fp5))
    {
        fscanf(fp5,"%d%s",&pass,&pass1);
        if(feof(fp5))
            break;
        if(pass==pass2)
          {
              flag=1;
              printf("ENTER THE ALPHABETIC PASSWORD:");          //     ALPHABETIC PASSWORD
              gets(pass3);
    if(strcmp(pass3,pass1)==0)
        {
    flag1=1;
    do
    {

    //                    -------------------------------------
    //                     S T A R T I N G   I N T E R F A C E
    //                    -------------------------------------

    system("cls");
    printf("\n\t----------------------------------");
    printf("\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    printf("\n\t----------------------------------");
    printf("\n\t DETAILED INFORMATION OF STUDENTS");
    printf("\n\t----------------------------------");
    printf("\n\txxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    printf("\n\t----------------------------------");
    printf("\n\n\n\t^^^^^^^^^^^^^^^^");
     printf("\n\t FILE OPERATION");
    printf("\n\t----------------");
    printf("\n\n\t(1)=WRITING");                                                     //   ENTERING WHOLE NEW RECORDS
    printf("\n\n\t(2)=READING");                                                     //   READING ALL RECORDS
    printf("\n\n\t(3)=SEARCHING");                                                   //   SEARCHING A PARTICULAR RECORD
    printf("\n\n\t(4)=REMOVING");                                                    //   REMOVING A PARTICULAR RECORD
    printf("\n\n\t(5)=MODIFYING");                                                   //   MODIFYING A PARTICUAL RECORD
    printf("\n\n\t(6)=APPENDING");                                                   //   ADDIND A NEW RECORD TO EXISTING RECORDS
    printf("\n\n\t(7)=EXIT ");                                                       //   EXITING THIS WHOLE OPERATIONS
    printf("\n\n  Enter your choice : ");
    scanf("%d",&x);
    printf("\n ----------------------");
    if(x==1)
        write(fp1,fp3);
    if(x==2)
        read(fp1,fp3);
     if(x==3)
        search(fp1,fp3);
    if(x==4)
        remov(fp1,fp3,fp4,fp2);
    if(x==5)
        modify(fp1,fp3,fp4,fp2);
    if(x==6)
        append(fp1,fp3);
    if(x==7)
    {
       printf("\n   THANK YOU FOR YOUR TIME\n");
        exit(0);
    }
    if(x>=8)
        printf("\n\nSORRY NO MORE OPERATION AVAILABLE");                             //  FOR  WRONG  OPTION  ENTERED
        fflush(stdin);


         //              OPTION  FOR TRYING OTHER OPERATIONS SIMULTANEOUSLY


    printf("\n\n   DO  YOU  WANT  TO  TRY  OTHER  OPERATION ( y / n ) ? :");
    scanf("%c",&ch);
    printf("\n|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
    }while(ch=='y');
            }

        //               ALERT!!!!! ......... IF   WRONG   PASSWORDS   ARE  ENTERED

          if(flag1==0  )
            printf("\n\a\a\a\aWrong Alphabetic Password\n");
        }
if(flag==0 )
    printf("\n\a\a\a\aWrong Numeric Password\n");

    }
}



                               ///    **************************************************
                               ///         E N T E R I N G   N E W    R E C O R D S
                               ///    **************************************************



int write(FILE *fp1,FILE *fp3)
{
    fp1=fopen("detailinfostud1.txt","w");
    fp3=fopen("detailinfostud2.txt","w");
    do
    {

    //                 ------------------------
    //                  STUDENT'S  INFORMATION
    //                 ------------------------

        printf("\nEnter the roll number : ");
        scanf("%d",&roll);
        fflush(stdin);
        printf("\nEnter Student's Name : ");
        gets(name);
        printf("\nEnter Father's Name  : ");
        gets(fath);
        printf("\nEnter Mother's Name  : ");
        gets(moth);
        printf("\nEnter Students Address:");
        gets(adr);
        pin:
        printf("\nEnter PIN CODE::");
        scanf("%d",&pin);
        if(pin<100000 || pin>999999 )
        {
            printf("!!Enter Correct PIN CODE!!\n");
            goto pin;
        }

        //        ----------------------------
        //           MARKS SCORED BY STUDENT
        //        ----------------------------

        printf("\n  MARKS");
        printf("\n -------");
        printf("\n!!!![CAUTION]-ALL MARKS ENTERED SHOULD BE COMPARED FROM 100 !!!!\n\n");
       math:
        printf("\nMathematics  = ");
        scanf("%f",&math);
        if(math>100)
        {
            printf("!!!!!Enter Correctly");
            goto math;
        }
       physics:
        printf("Physics      = ");
        scanf("%f",&phy);
        if(phy>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto physics;
        }
        chem:
        printf("Chemistry    = ");
        scanf("%f",&chem);
        if(chem>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chem;
        }
       bio:
        printf("Biology      = ");
        scanf("%f",&bio);
        if(bio>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto bio;
        }
        eng:
        printf("English      = ");
        scanf("%f",&eng);
        if(eng>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto eng;
        }
        phylab:
        printf("Physics Lab. = ");
        scanf("%f",&phylab);
        if(phylab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto phylab;
        }
        chemlab:
        printf("Chemistry Lab.= ");
        scanf("%f",&chemlab);
        if(chemlab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chemlab;
        }
        biolab:
        printf("Biology Lab. = ");
        scanf("%f",&biolab);
        if(biolab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto biolab;
        }
        totalmarks=math+phy+chem+bio+eng+phylab+chemlab+biolab;
        percentage=totalmarks/8;
        fprintf(fp1,"%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",math,phy,chem,bio,eng,phylab,chemlab,biolab,totalmarks,percentage);
        fprintf(fp3,"%d\n%s\n%s\n%s\n%s\n%d\n",roll,name,fath,moth,adr,pin);
        fflush(stdin);

        //           OPTION FOR ADDITION OF MORE STUDENT'S INFORMATION

        printf("\n\nDo you want to add information of another student(y/n)?");
        scanf("%c",&ch);
        printf("\n##########################################################\n");
    }while(ch=='y');
    fclose(fp1);
    fclose(fp3);
}



                               ///    *************************************************************
                               ///     R E A D I N G     A L L     E X I S T I N G   R E C O R D S
                               ///    *************************************************************


int read(FILE *fp1,FILE *fp3)
{
     fp3=fopen("detailinfostud2.txt","r");
     fp1=fopen("detailinfostud1.txt","r");
     while(!feof(fp3) || !feof(fp1) )
     {
         fscanf(fp3,"%d%s%s%s%s%d",&roll,&name,&fath,&moth,&adr,&pin);
         fscanf(fp1,"%f%f%f%f%f%f%f%f%f%f",&math,&phy,&chem,&bio,&eng,&phylab,&chemlab,&biolab,&totalmarks,&percentage);
       if(feof(fp3) || feof(fp1))
        break;
        else
             {
             printf("\n\n");
             printf("\nRoll=%d\n",roll);
             printf("Student's Name=%s\n",name);
             printf("Father's Name=%s\n",fath);
             printf("Mother's Name=%s\n",moth);
             printf("Address=%s\n",adr);
             printf("PIN Code=%d",pin);
              printf("\n\n   MARKS");
             printf("\n  --------");
             printf("\nMathematics=%f\n",math);
             printf("Physics=%f\n",phy);
             printf("Chemistry=%f\n",chem);
             printf("Biology=%f\n",bio);
             printf("English=%f\n",eng);
             printf("Physics Lab.=%f\n",phylab);
             printf("Chemistry Lab.=%f\n",chemlab);
             printf("Biology Lab.=%f\n",biolab);
             printf("\n\n\n   TOTAL MARKS = %f",totalmarks);
             printf("\n   ---------------------");
             printf("\n\n   PERCENTAGE = %f",percentage);
             printf("\n   ---------------------");
             }
     }
     fclose(fp1);
     fclose(fp3);
}


                                         ///    ******************************************
                                         ///       S E A R C H I N G    A   R E C O R D
                                         ///    ******************************************


int search(FILE *fp1,FILE *fp3)
{
    int r,temp=0;
    fp3=fopen("detailinfostud2.txt","r");
    fp1=fopen("detailinfostud1.txt","r");
    printf("\n\nEnter the roll number :");
    scanf("%d",&r);
     while(!feof(fp3) || !feof(fp1))
     {
        fscanf(fp3,"%d%s%s%s%s%d",&roll,&name,&fath,&moth,&adr,&pin);
        fscanf(fp1,"f%f%f%f%f%f%f%f%f%f",&math,&phy,&chem,&bio,&eng,&phylab,&chemlab,&biolab,&totalmarks,&percentage);
       if(feof(fp3) || feof(fp1))
        break;
        else if(roll==r)
           {
             temp=1;
             printf("\n\nRoll=%d\n",roll);
             printf("Student's Name=%s\n",name);
             printf("Father's Name=%s\n",fath);
             printf("Mother's Name=%s\n",moth);
             printf("Address=%s\n",adr);
             printf("PIN Code=%d",pin);
             printf("\n\n   MARKS");
             printf("\n    --------");
             printf("\nMathematics   =%f\n",math);
             printf("\nPhysics       =%f\n",phy);
             printf("\nChemistry     =%f\n",chem);
             printf("\nBiology       =%f\n",bio);
             printf("\nEnglish       =%f\n",eng);
             printf("\nPhysics Lab.  =%f\n",phylab);
             printf("\nChemistry Lab.=%f\n",chemlab);
             printf("\nBiology Lab.  =%f\n",biolab);
             printf("\n\n\n   TOTAL MARKS = %f",totalmarks);
             printf("\n   ---------------------");
             printf("\n\n   PERCENTAGE = %f",percentage);
             printf("\n   ---------------------");
           }
    }
    if(temp==0)
        printf("Roll number is not in the record");
    fclose(fp3);
    fclose(fp1);
}



                                ///    ************************************************************
                                ///     R E M O V I N G    A    P A R T I C U L A R    R E C O R D
                                ///    ************************************************************


int remov(FILE *fp1,FILE *fp3,FILE *fp4,FILE *fp2)
{
  int temp=0,r;
  fp3=fopen("detailinfostud2.txt","r");
  fp1=fopen("detailinfostud1.txt","r");
  fp4=fopen("stud1.txt","w");
  fp2=fopen("stud2.txt","w");
  printf("\n\nEnter the roll number to be deleted:");
  scanf("%d",&r);
   while(!feof(fp3) || !feof(fp1))
     {
        fscanf(fp3,"%d%s%s%s%s%d",&roll,&name,&fath,&moth,&adr,&pin);
        fscanf(fp1,"%f%f%f%f%f%f%f%f%f%f",&math,&phy,&chem,&bio,&eng,&phylab,&chemlab,&biolab,&totalmarks,&percentage);
       if(feof(fp3) || feof(fp1))
        break;
        if(roll==r)
            temp=1;
        else
            {
            fprintf(fp4,"%d\n%s\n%s\n%s\n%s\n%d\n",roll,name,fath,moth,adr,pin);
            fprintf(fp2,"%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",math,phy,chem,bio,eng,phylab,chemlab,biolab,totalmarks,percentage);
            }
     }
  if(temp==0)
    printf("\nInvalid ROLL NUMBER");
  else
    printf("\nDeleted successfully");
  fclose(fp3);
  fclose(fp1);
  fclose(fp4);
  fclose(fp2);
  remove("detailinfostud2.txt");
  rename("stud1.txt","detailinfostud2.txt");
  remove("detailinfostud1.txt");
  rename("stud2.txt","detailinfostud1.txt");
}


                            ///    ***********************************************************
                            ///       M O D I F Y I N G   A   S E L E C T E D   R E C O R D
                            ///    ***********************************************************


int modify(FILE *fp1,FILE *fp3,FILE *fp4,FILE *fp2)
{
    int r,temp=0;
    fp3=fopen("detailinfostud2.txt","r");
    fp1=fopen("detailinfostud1.txt","r");
    fp4=fopen("stud1.txt","w");
    fp2=fopen("stud2.txt","w");
    printf("\n\nEnter the roll number to be modified:");
    scanf("%d",&r);
    while(!feof(fp3) || !feof(fp1))
     {
        fscanf(fp3,"%d%s%s%s%s%d",&roll,&name,&fath,&moth,&adr,&pin);
        fscanf(fp1,"%f%f%f%f%f%f%f%f%f%f",&math,&phy,&chem,&bio,&eng,&phylab,&chemlab,&biolab,&totalmarks,&percentage);
        if(feof(fp3) || feof(fp1))
            break;
       else if(roll==r)
        {
             //                 ------------------------
             //                  STUDENT'S  INFORMATION
             //                 ------------------------

            temp=1;
        printf("\n\n--ENTER NEW RECORD--\n");
        printf("\nEnter  roll number : ");
        scanf("%d",&roll);
        fflush(stdin);
        printf("\nEnter Student's Name : ");
        gets(name);
        printf("\nEnter Father's Name  : ");
        gets(fath);
        printf("\nEnter Mother's Name  : ");
        gets(moth);
        printf("\nEnter Students Address:");
        gets(adr);
        pin:
        printf("\nEnter PIN CODE::");
        scanf("%d",&pin);
        if(pin<=100000 || pin>=999999 )
        {
            printf("!!Enter Correct PIN CODE!!\n");
            goto pin;
        }

        //        ----------------------------
        //           MARKS SCORED BY STUDENT
        //        ----------------------------

        printf("\n  MARKS");
        printf("\n -------");
        printf("\n!!!![CAUTION]-ALL MARKS ENTERED SHOULD BE COMPARED FROM 100 !!!!\n\n");
       math:
        printf("\nMathematics  = ");
        scanf("%f",&math);
        if(math>100)
        {
            printf("!!!!!Enter Correctly");
            goto math;
        }
       physics:
        printf("Physics      = ");
        scanf("%f",&phy);
        if(phy>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto physics;
        }
        chem:
        printf("Chemistry    = ");
        scanf("%f",&chem);
        if(chem>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chem;
        }
       bio:
        printf("Biology      = ");
        scanf("%f",&bio);
        if(bio>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto bio;
        }
        eng:
        printf("English      = ");
        scanf("%f",&eng);
        if(eng>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto eng;
        }
        phylab:
        printf("Physics Lab. = ");
        scanf("%f",&phylab);
        if(phylab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto phylab;
        }
        chemlab:
        printf("Chemistry Lab.= ");
        scanf("%f",&chemlab);
        if(chemlab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chemlab;
        }
        biolab:
        printf("Biology Lab. = ");
        scanf("%f",&biolab);
        if(biolab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto biolab;
        }
        totalmarks=math+phy+chem+bio+eng+phylab+chemlab+biolab;
        percentage=totalmarks/8;
            fprintf(fp4,"%d\n%s\n%s\n%s\n%s\n%d\n",roll,name,fath,moth,adr,pin);
            fprintf(fp2,"%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",math,phy,chem,bio,eng,phylab,chemlab,biolab,totalmarks,percentage);
        }
         else
         {
            fprintf(fp4,"%d\n%s\n%s\n%s\n%s\n%d\n",roll,name,fath,moth,adr,pin);
            fprintf(fp2,"%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",math,phy,chem,bio,eng,phylab,chemlab,biolab,totalmarks,percentage);
         }
     }
    if(temp==0)
        printf("\nInvalid ROLL NUMBER");
    else
        printf("\nModified successfully");
 fclose(fp3);
  fclose(fp1);
  fclose(fp4);
  fclose(fp2);
  remove("detailinfostud2.txt");
  rename("stud1.txt","detailinfostud2.txt");
  remove("detailinfostud1.txt");
  rename("stud2.txt","detailinfostud1.txt");
}


                            ///    *****************************************
                            ///       A P P E N D I N G   A   R E C O R D
                            ///    *****************************************


int append(FILE *fp1,FILE *fp3)
{
    fp1=fopen("detailinfostud1.txt","a");
    fp3=fopen("detailinfostud2.txt","a");
    do
    {
          //                 ------------------------
          //                  STUDENT'S  INFORMATION
          //                 ------------------------

        printf("\nEnter the roll number : ");
        scanf("%d",&roll);
        fflush(stdin);
        printf("\nEnter Student's Name : ");
        gets(name);
        printf("\nEnter Father's Name  : ");
        gets(fath);
        printf("\nEnter Mother's Name  : ");
        gets(moth);
        printf("\nEnter Students Address:");
        gets(adr);
        pin:
        printf("\nEnter PIN CODE::");
        scanf("%d",&pin);
        if(pin<100000 || pin>999999 )
        {
            printf("!!Enter Correct PIN CODE!!\n");
            goto pin;
        }
               //        ----------------------------
               //           MARKS SCORED BY STUDENT
               //        ----------------------------

        printf("\n  MARKS");
        printf("\n -------");
        printf("\n!!!![CAUTION]-ALL MARKS ENTERED SHOULD BE COMPARED FROM 100 !!!!\n\n");
       math:
        printf("\nMathematics  = ");
        scanf("%f",&math);
        if(math>100)
        {
            printf("!!!!!Enter Correctly");
            goto math;
        }
       physics:
        printf("Physics      = ");
        scanf("%f",&phy);
        if(phy>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto physics;
        }
        chem:
        printf("Chemistry    = ");
        scanf("%f",&chem);
        if(chem>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chem;
        }
       bio:
        printf("Biology      = ");
        scanf("%f",&bio);
        if(bio>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto bio;
        }
        eng:
        printf("English      = ");
        scanf("%f",&eng);
        if(eng>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto eng;
        }
        phylab:
        printf("Physics Lab. = ");
        scanf("%f",&phylab);
        if(phylab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto phylab;
        }
        chemlab:
        printf("Chemistry Lab.= ");
        scanf("%f",&chemlab);
        if(chemlab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto chemlab;
        }
        biolab:
        printf("Biology Lab. = ");
        scanf("%f",&biolab);
        if(biolab>100)
        {
            printf("!!!!!Enter Correctly\n");
            goto biolab;
        }
        totalmarks=math+phy+chem+bio+eng+phylab+chemlab+biolab;
        percentage=totalmarks/8;
        fprintf(fp1,"%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",math,phy,chem,bio,eng,phylab,chemlab,biolab,totalmarks,percentage);
        fprintf(fp3,"%d\n%s\n%s\n%s\n%s\n%d\n",roll,name,fath,moth,adr,pin);
        fflush(stdin);

         //           OPTION FOR ADDITION OF MORE STUDENT'S INFORMATION

        printf("\n\nDo you want to add information of another student(y/n)?");
        scanf("%c",&ch);
        printf("\n##########################################################\n");
    }while(ch=='y');
    fclose(fp1);
    fclose(fp3);
}







///*************************************************************************************************************************************************************************************************************************************************

                                           ///       <===============================================>
                                           ///         *********************************************
                                           ///                 E N D    O F   P R O G R A M
                                           ///         *********************************************
                                           ///       <===============================================>

///*************************************************************************************************************************************************************************************************************************************************

