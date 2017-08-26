

///       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
///           P R O G R A M    F O R   M A N A G I N G    C U S T O M E R   D E T A I L S   I N  A   G E N E R A L    S H O P
///       +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>
#include<conio.h>

//                            #################################

//                                 M A I N  F U N C T I O N

//                            #################################

void main()
{
    FILE *fp1,*fp2;
    int x;
    char ch,c;
    do
    {

      //                            **********************
      //                              STARTING INTERFACE
      //                            **********************

    printf("\n\t*----------------------------*");
    printf("\n\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxx|");
    printf("\n\t|----------------------------|");
    printf("\n\t| CUSTOMER SHOPPING DETAILS  |");
    printf("\n\t|----------------------------|");
    printf("\n\t|xxxxxxxxxxxxxxxxxxxxxxxxxxxx|");
    printf("\n\t*----------------------------*");
    printf("\n\n\n\t____________________");
    printf("\n\t||----------------||");
    printf("\n\t|| FILE OPERATION ||");
    printf("\n\t||________________||");
    printf("\n\n\t(1)=ADD RECORD AND CHEQUEOUT");
    printf("\n\n\t(2)=READ ALL RECORDS");
    printf("\n\n\t(3)=SEARCH A RECORD");
    printf("\n\n\t(4)=REMOVE A RECORD");
    printf("\n\n\t(5)=MODIFY AN EXISTING RECORD");
    printf("\n\n\t(6)=OVERWRITE ALL PREVIOUS RECORDS");
    printf("\n\n\t(7)=EXIT");
    printf("\n\n  Enter your choice : ");
    scanf("%d",&x);
    printf("\n ----------------------");
    if(x==1)
        append(fp1);                                                                           //     ADDING A RECORD
    if(x==2)
        read(fp1);                                                                             //     READING ALL EXISTING RECORDS
    if(x==3)
        search(fp1);                                                                           //     SEARCHING A PARTICULAR RECORD
    if(x==4)
    {
        fflush(stdin);
        printf("\nDO YOU WANT TO REMOVE A RECORD FOR SURE(y/n)?");                             //     REMOVING A PARTICULAR RECORD
        c=getchar();
        if(c=='y')
        remov(fp1,fp2);
    }
    if(x==5)
       {
        fflush(stdin);
        printf("\nDO YOU WANT TO MODIFY A RECORD FOR SURE(y/n)?");                             //    MODIFYING A PARTIOCULAR RECORD
        c=getchar();
        if(c=='y')
        modify(fp1,fp2);
       }

    if(x==6)
        {
            fflush(stdin);
            printf("\nDO YOU WANT TO OVERWRITE ALL OREVIOUS RECORDS FOR SURE(y/n)?");          //    OVERWRITING ALL PREVIOUS RECORD AND A NEW RECORD
            c=getchar();
            if(c=='y')
                write(fp1);
        }
    if(x==7)
        exit(9);                                                                               //      EXITING  THIS WHOLE OPERATION
    if(x>=8)
        printf("\nSORRY NO MORE OPERATION AVAILABLE\n");
    fflush(stdin);

        //              OPTION  FOR TRYING OTHER OPERATIONS SIMULTANEOUSLY

    printf("\n\n   DO  YOU  WANT  TO  TRY  OTHER  OPERATION ( y / n ) ? :");
    ch=getchar();
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n");
    }while(ch=='y');
}



                                   ///    **************************************************************************
                                   ///     A D D I N G   A   R E C O R D    O R     S I M P L Y   A P P E N D I N G
                                   ///    **************************************************************************



int append(FILE *fp1)
{
    int phone;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
    fp1=fopen("customerdetails.txt","a");
    do
    {
        printf("\nEnter name : ");
        scanf("%s",&name);
        printf("\nEnter the phone number : ");
        scanf("%d",&phone);
        printf("\nEnter Address:");
        scanf("%s",&address);
        printf("\n  ITEMS PURCHASED           PRICE(in Rs/-)");
        printf("\n------------------------------------------");
        printf("\nSTATIONARY ITEMS             = ");
        scanf("%f",&sta);
        printf("GROCERY ITEMS                = ");
        scanf("%f",&gro);
        printf("KITCHEN WARES                = ");
        scanf("%f",&kit);
        printf("CLOTHES                      = ");
        scanf("%f",&clo);
        printf("DECORATING STUFFS            = ");
        scanf("%f",&deco);
        printf("FOOD ITEMS                   = ");
        scanf("%f",&food);
        printf("ELECTRIC ITEMS               = ");
        scanf("%f",&elec);
        printf("SPORTS ITEMS                 = ");
        scanf("%f",&sport);
        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=");
        scanf("%f",&paid);
        if(totalamount>paid)
        {
            bal2=0;
            bal1=totalamount-paid;
            printf("\nNEED TO GET=%f",bal1);
        }
       else if(paid>totalamount)
        {
            bal1=0;
            bal2=paid-totalamount;
            printf("\nNEED TO GIVE=%f",bal2);
        }
        else
        {
            bal1=0;bal2=0;
            printf("\nEXACT AMOUNT PAID");
        }
        fprintf(fp1,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
        fflush(stdin);
        printf("\n\nDo you want to add  another record(y/n)?");
        ch=getchar();
    }while(ch=='y');
    fclose(fp1);
}




                               ///    *************************************************************
                               ///     R E A D I N G     A L L     E X I S T I N G   R E C O R D S
                               ///    *************************************************************




int read(FILE *fp1)
{
    int phone;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
     fp1=fopen("customerdetails.txt","r");
     while(!feof(fp1))
     {
        fscanf(fp1,"%d%s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
         else
         {
             printf("\n\nPHONE NUMBER=%d\n",phone);
             printf("Name=%s\n",name);
             printf("ADDRESS=%s",address);
             printf("\n\n  ITEMS PURCHASED           PRICE(in Rs/-) ");
             printf("\n   ------------------------------------------");
             printf("\nSTATIONARY ITEMS            =%f\n",sta);
             printf("GROCERY ITEMS               =%f\n",gro);
             printf("KITCHEN WARES               =%f\n",kit);
             printf("CLOTHES                     =%f\n",clo);
             printf("DECORATIVE ITEMS            =%f\n",deco);
             printf("FOOD  ITEMS                 =%f\n",food);
             printf("ELECTRIC ITEMS              =%f\n",elec);
             printf("SPORTS ITEMS                =%f\n",sport);
             printf("\n\n\n   TOTAL AMOUNT          = %f",totalamount);
             printf("\n   ---------------------");
             printf("\n\n   AMOUNT PAID           = %f",paid);
             printf("\n   ---------------------");
             if(bal1!=0 && bal2==0)
                printf("\n   NEED TO GET           =%f",bal1);
             else if(bal1==0 && bal2!=0)
                printf("\n\n   NEED TO GIVE          =%f",bal2);
             else
                printf("\n\n  EXACT AMOUNT PAID");
         }
     }
     fclose(fp1);
}




                                         ///    ******************************************
                                         ///       S E A R C H I N G    A   R E C O R D
                                         ///    ******************************************




int search(FILE *fp1)
{
    int phone,temp=0,k=0,phone1;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch,fname[30],dup_name[30],str_name;
    fp1=fopen("customerdetails.txt","r");
    printf("\n\nEnter Name :");
    scanf("%s",&fname);
    printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
    while(!feof(fp1))
    {
        fscanf(fp1,"%d%s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
        if(strcmp(name,fname)==0&&phone1==phone)
        {
             temp=1;
             printf("\nCustomer Details FOUND-");
             printf("\n\n\nCustomer Name =%s",name);
             printf("\nPHONE NO.     =%d",phone);
             printf("\nADDRESS       =%s",address);
             printf("\n\n  ITEMS PURCHASED           PRICE(in Rs/-) ");
             printf("\n   ------------------------------------------");
             printf("\nSTATIONARY ITEMS            =%f\n",sta);
             printf("GROCERY ITEMS               =%f\n",gro);
             printf("KITCHEN WARES               =%f\n",kit);
             printf("CLOTHES                     =%f\n",clo);
             printf("DECORATIVE ITEMS            =%f\n",deco);
             printf("FOOD  ITEMS                 =%f\n",food);
             printf("ELECTRIC ITEMS              =%f\n",elec);
             printf("SPORTS ITEMS                =%f\n",sport);
             printf("\n\n\n   TOTAL AMOUNT          = %f",totalamount);
             printf("\n   ---------------------");
             printf("\n\n   AMOUNT PAID           = %f",paid);
             printf("\n   ---------------------");
             if(bal1!=0 && bal2==0)
                printf("\n     NEED TO GET           =%f",bal1);
             else if(bal1==0 && bal2!=0)
                printf("\n\n   NEED TO GIVE          =%f",bal2);
             else
                printf("\n\n  EXACT AMOUNT PAID");
            k++;
            }

    }
    if(temp==0)
        printf("Customer is not in the record");
    fclose(fp1);
}




                                ///    ************************************************************
                                ///     R E M O V I N G    A    P A R T I C U L A R    R E C O R D
                                ///    ************************************************************




int remov(FILE *fp1,FILE *fp2)
{
  int phone,temp=0,phone1;
  float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
  char name[30],address[30],ch,fname[30];
  fp1=fopen("customerdetails.txt","r");
  fp2=fopen("cust.txt","w");
  printf("\n\nEnter the name of customer :");
  scanf("%s",&fname);
  printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
  while(!feof(fp1))
  {
      fscanf(fp1,"%d%s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
      if(feof(fp1))
        break;
      if(strcmp(name,fname)==0&&phone1==phone)
      temp=1;
      else
        fprintf(fp1,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
  }
  if(temp==0)
    printf("Customer not found");
  else
    printf("Customer Details Deleted successfully");
  fclose(fp1);
  fclose(fp2);
  remove("customerdetails.txt");
  rename("cust.txt","customerdetails.txt");
}




                            ///    ***********************************************************
                            ///       M O D I F Y I N G   A   S E L E C T E D   R E C O R D
                            ///    ***********************************************************



int modify(FILE *fp1,FILE *fp2)
{
    int phone,temp=0,y,k=0,phone1;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2,paid1;
    char name[30],address[30],ch,fname[30],c;
    fp1=fopen("customerdetails.txt","r");
    fp2=fopen("cust.txt","w");
    printf("\n\nEnter the Customer Name to be modified:");
    scanf("%s",&fname);
    printf("\nEnter Phone Number Of Customer:");
    scanf("%d",&phone1);
    while(!feof(fp1))
    {
       fscanf(fp1,"%d%s%s%f%f%f%f%f%f%f%f%f%f%f%f",&phone,&name,&address,&sta,&gro,&kit,&clo,&deco,&food,&elec,&sport,&totalamount,&paid,&bal1,&bal2);
        if(feof(fp1))
            break;
        else if(strcmp(name,fname)==0&&phone1==phone)
        {
            temp=1;
            fflush(stdin);


            //    -----------------------------------------------------------------------------------
            //     MODIFYING TYPE (1) ------  OVERWRITING   SELECTED   RECORD   WITH   A NEW  RECORD
            //    -----------------------------------------------------------------------------------


            printf("\nDO YOU WANT TO OVERWRITE THIS CUSTOMER DETAILS(y/n)?:");
            c=getchar();
            if(c=='y')
            {
            k=1;
            printf("\nEnter New Name : ");
            scanf("%s",&name);
            printf("\nEnter New Phone Number : ");
            scanf("%d",&phone);
            printf("\nEnter New Address:");
            scanf("%s",&address);
        printf("\n  ITEMS PURCHASED           PRICE(in Rs/-)");
        printf("\n ------------------------------------------");
        printf("\nSTATIONARY ITEMS             = ");
        scanf("%f",&sta);
        printf("GROCERY ITEMS                = ");
        scanf("%f",&gro);
        printf("KITCHEN WARES                = ");
        scanf("%f",&kit);
        printf("CLOTHES                      = ");
        scanf("%f",&clo);
        printf("DECORATING STUFFS            = ");
        scanf("%f",&deco);
        printf("FOOD ITEMS                   = ");
        scanf("%f",&food);
        printf("ELECTRIC ITEMS               = ");
        scanf("%f",&elec);
        printf("SPORTS ITEMS                 = ");
        scanf("%f",&sport);
        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=");
        scanf("%f",&paid);
        if(totalamount>paid)
        {
            bal2=0;
            bal1=totalamount-paid;
            printf("\nNEED TO GET=%f",bal1);
        }
       else if(paid>totalamount)
        {
            bal1=0;
            bal2=paid-totalamount;
            printf("\nNEED TO GIVE=%f",bal2);
        }
        else
        {
            bal1=0;bal2=0;
            printf("\nEXACT AMOUNT PAID");
        }
        fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
            fflush(stdin);


            //    --------------------------------------------------------------------
            //      MODIFYING TYPE (2) ------  SELECTED  ITEMS  IN  SELECTED  RECORD
            //    --------------------------------------------------------------------

     if(k==0)
            {
            do
            {
               fflush(stdin);
            printf("\nDO YOU WANT TO MODIFY ITEM DETAILS OF THE CUSTOMER(y/n)?:");
            c=getchar();
            if(c=='y')
            {
                printf("\nWhich One You Want To Modify?");
                printf("\n(1)STATIONARY ITEMS");
                printf("\n(2)GROCERY ITEMS");
                printf("\n(3)KITCHEN WARES");
                printf("\n(4)CLOTHES");
                printf("\n(5)DECORATIVE ITEMS");
                printf("\n(6)FOOD ITEMS");
                printf("\n(7)SPORTS ITEMS");
                printf("\n(8)ELECTRIC ITEMS");
                printf("\n\n  ENTER YOUR CHOICE:");
                scanf("%d",&y);
                if(y==1)
                {
                   printf("\nSTATIONARY ITEMS (amount in Rs/-)  = ");
                   scanf("%f",&sta);
                }
                if(y==2)
                {
                   printf("GROCERY ITEMS  (amount in Rs/-)      = ");
                   scanf("%f",&gro);
                }
                if(y==3)
                {
                   printf("KITCHEN WARES  (amount in Rs/-)       = ");
                   scanf("%f",&kit);

                }
                if(y==4)
                {
                    printf("CLOTHES      (amount in Rs/-)         = ");
                    scanf("%f",&clo);

                }
                if(y==5)
                {
                    printf("DECORATING STUFFS  (amount in Rs/-)    = ");
                    scanf("%f",&deco);

                }
                if(y==6)
                {
                   printf("FOOD ITEMS    (amount in Rs/-)         = ");
                   scanf("%f",&food);

                }
                if(y==7)
                {
                   printf("ELECTRIC ITEMS    (amount in Rs/-)    = ");
                   scanf("%f",&elec);

                }
                if(y==8)
                {
                    printf("SPORTS ITEMS  (amount in Rs/-)        = ");
                    scanf("%f",&sport);

                }

            }

        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=%f",paid);

        if(totalamount>paid)
        {
            bal2=0;
            bal1=totalamount-paid;
            printf("\nNEED TO GET=%f",bal1);
        }
       else if(paid>totalamount)
        {
            bal1=0;
            bal2=paid-totalamount;
            printf("\nNEED TO GIVE=%f",bal2);
        }
        else
        {
            bal1=0;bal2=0;
            printf("\nEXACT AMOUNT PAID");
        }
        fflush(stdin);
        printf("\nDo you want to modify another item(y/n)? ");
        c=getchar();
        }while(c=='y');
        fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
}
        else
            fprintf(fp2,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
    }
    if(temp==0)
        printf("\nInvalid ");
    else
        printf("\n\nModified successfully");
  fclose(fp1);
  fclose(fp2);
  remove("customerdetails.txt");
  rename("cust.txt","customerdetails.txt");

}




             ///    ******************************************************************************************************************
             ///     O V E R W R I T I N G   A L L   E X I S T I N G   R E C O R D S    A N D   A D D I N G   A   N E W   R E C O R D
             ///    ******************************************************************************************************************



int write(FILE *fp1)
{
    int phone;
    float  totalamount,paid,sta,gro,kit,clo,deco,food,elec,sport,bal1,bal2;
    char name[30],address[30],ch;
    fp1=fopen("customerdetails.txt","w");
    do
    {
        printf("\nEnter name : ");
        scanf("%s",&name);
        printf("\nEnter the phone number : ");
        scanf("%d",&phone);
        printf("\nEnter Address:");
        scanf("%s",&address);
        printf("\n  ITEMS PURCHASED           PRICE(in Rs/-)");
        printf("\n ------------------------------------------");
        printf("\nSTATIONARY ITEMS             = ");
        scanf("%f",&sta);
        printf("GROCERY ITEMS                = ");
        scanf("%f",&gro);
        printf("KITCHEN WARES                = ");
        scanf("%f",&kit);
        printf("CLOTHES                      = ");
        scanf("%f",&clo);
        printf("DECORATING STUFFS            = ");
        scanf("%f",&deco);
        printf("FOOD ITEMS                   = ");
        scanf("%f",&food);
        printf("ELECTRIC ITEMS               = ");
        scanf("%f",&elec);
        printf("SPORTS ITEMS                 = ");
        scanf("%f",&sport);
        totalamount=sta+gro+kit+clo+deco+food+elec+sport;
        printf("\nTOTAL AMOUNT=%f",totalamount);
        printf("\n\nAMOUNT PAID=");
        scanf("%f",&paid);
        if(totalamount>paid)
        {
            bal2=0;
            bal1=totalamount-paid;
            printf("\nNEED TO GET=%f",bal1);
        }
       else if(paid>totalamount)
        {
            bal1=0;
            bal2=paid-totalamount;
            printf("\nNEED TO GIVE=%f",bal2);
        }
        else
        {
            bal1=0;bal2=0;
            printf("\nEXACT AMOUNT PAID");
        }
        fprintf(fp1,"%d\n%s\n%s\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n",phone,name,address,sta,gro,kit,clo,deco,food,elec,sport,totalamount,paid,bal1,bal2);
        fflush(stdin);
        printf("\n\nDo you want to add  another record(y/n)?");
        ch=getchar();
    }while(ch=='y');
    fclose(fp1);
}



///*********************************************************************************************************************************************************************************************************************************************



                                       ///       <===============================================>
                                       ///         *********************************************
                                       ///                 E N D    O F   P R O G R A M
                                       ///         *********************************************
                                       ///       <===============================================>


///*********************************************************************************************************************************************************************************************************************************************
