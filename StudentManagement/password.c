


///    ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
///              P R O G R A M    F O R    S E T T I N G    P A S S W O R D    F O R    O T H E R    P R O G R A M
///    ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



#include<stdio.h>

//                         *****************************
//                           M A I N   F U N C T I O N
//                         *****************************

void main()
{
    FILE *fp1,*fp2;
    int x,c=0,i,y;


    //                    -------------------------------------
    //                     S T A R T I N G   I N T E R F A C E
    //                    -------------------------------------


    printf("\n\tFILE OPERATIONS");
    printf("\n\t---------------");
    printf("\n\n\t1=WRITING");
   printf("\n\n<A SIMPLE TEST FOR YOUR EYESIGHT::>");
    printf("\n\n  Enter 1 to proceed : ");
    scanf("%d",&x);
    if(x==1)
        write(fp1);
    else
        printf("\n\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a !!!!!!!!!!! INTRUDER !!!!!!!!!!!!\n\n");
    fflush(stdin);
}


///                                             *********************************************
///                                              E N T E R I N G    N E W    P A S S W O R D
///                                             *********************************************


int write(FILE *fp1)
{
    int pass,y,i,c=0;
    char pass1[30];
    fp1=fopen("password.txt","w");


    //      ----------------------------------------
    //           A   S E C U R I T Y    T E S T
    //      ----------------------------------------

    printf("\n\n            S E C U R I T Y  T E S T \n\n");
    printf("\n WHICH ONE IS LONGER:\n\n");
    printf("\n (a)    >---------------<");
    printf("\n\n\n (b)                          <--------------->");
    printf("\n\n\n   ----->1= a");
    printf("\n   ----->2= b");
    printf("\n   ----->3= NO ONE");
    printf("\n\n ENTER YOUR CHOICE::");
    scanf("%d",&y);
    if(y==1 || y==2 && ((char)y<'0'||(char)y>'9'))
        goto hell;
    if(y==3)
    {

        //  ----------------------------------------------
        //    T E R M S     A N D    C O N D I T I O N S
        //  ----------------------------------------------


       printf("\n\n!!!! C-A-U-T-I-O-N-----Numeric Password should be minimum of 6 numbers");
       printf("\n     AND EVEN       Alphabetic Password should also be of minimum 6 characters  without any space\n");
        do
        {

        // --------------------------------------
        //   N U M E R I C      P A S S W O R D
        // --------------------------------------


            fflush(stdin);
        printf("\n\nEnter the New Numeric Password:");
        scanf("%d",&pass);
        }while(pass<100000);
        fflush(stdin);
        do
        {


        // -------------------------------------------
        //   A L P H A B E T I C      P A S S W O R D
        // -------------------------------------------


        printf("\n\nEnter New Alphabetic password:");
        gets(pass1);
        for(i=0;pass1[i]!='\0';i++)
            {
                if(pass1[i]==' ')
                    break;
                c++;
            }
        }while(c<6 || pass1[i]==' ');
        printf("\n\n      _PASSWORD CHANGED SUCCESSFULLY_\n\n");
        fprintf(fp1,"%d\n%s\n",pass,pass1);
        fflush(stdin);
    }

    //   --------------------------------------------------------------------
    //     A L E R T   ----   F O R    B R E A C H I N G   S E C U R I T Y
    //   --------------------------------------------------------------------

    goto heaven;
    hell:
        if(y==1 || y==2 || (char)y<'0'||(char)y>'9')
        printf("\n\n\a\a\a\a\a\a    _______S E C U R I T Y   B R E A C H E D_______\n\n");
    heaven:
    fclose(fp1);
}






///*************************************************************************************************************************************************************************************************************************************************

                                           ///       <===============================================>
                                           ///         *********************************************
                                           ///                 E N D    O F   P R O G R A M
                                           ///         *********************************************
                                           ///       <===============================================>

///*************************************************************************************************************************************************************************************************************************************************

