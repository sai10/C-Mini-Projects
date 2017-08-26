

///  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
///    A     P R O G R A M      F O R     C O N D U C T I N G     A     S E L F    A W A R N E S S    T E S T    I N T O    A N    I N S T I T U T I O N
///  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<stdlib.h>

                           //*********************************************
                           //     MAIN FUNCTION----STARTING INTERFACE
                           //*********************************************

 void main()
{
    int option,m=0;
    char ch;
    printf("\n\n\t HOPE YOU ARE READY TO TAKE THE EXAMINATION");
    getch();
    do
    {
    system("cls");
    printf("\n\n________________________________________________________________________________");
    printf("\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
    printf("\n________________________________________________________________________________\n\n");
    printf("\n\n\n\t\t************************");
    printf("\n\t\tP . A . G . K    2 K 1 5"); //     Name of the examination
    printf("\n\t\t************************");

                                  //------------------------
                                  // OPTIONS TO BE PROVIDED
                                  //------------------------

    printf("\n\n\n\t(1)TAKE TEST\n");
    printf("\n\t(2)EXIT\n");
    printf("\n    ENTER YOUR CHOICE:");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
        if(m%2==0)
        {
        exam();
        }
        if(m%2==1)
        {
        reexam();
        }
        break;
    default:
        exit(0);
    }
    printf("\n  DO YOU WANT TO GIVE RETEST :(y/n)?");          //    OPTION FOR RETEST
    ch=getchar();
    m++;
    }while(ch=='y');
}



///                  ***************************************************************************
///                                      SET-1  PAPER----------FOR 1ST ATTEMPT
///                  ***************************************************************************



 void exam()
{
    FILE *fp1;
    int k=0;
    char c1[100],c2[100],c3[100],c4[100],c5[100],c6[100],c7[100],c8[100],c9[100],c10[100],q1[100],q2[100],q3[100],q4[100],q5[100],q6[100],q7[100],q8[100],q9[100],q10[100],c,k1[100],k2[100],k3[100],k4[100],k5[100],k6[100],k7[100],k8[100],k9[100],k10[100];
    fp1=fopen("exam.txt","r");
    printf("\n\n\tINSTRUCTIONS\n");
    printf("\n\t(1)  Total Marks is 10");
    printf("\n\t(2)  Any Suspicious Activities will Result in Your Disqualification");
    printf("\n\t(3)  In Examination Hall invigilator is provided with sole authority");
    printf("\n\t(4)  Time Limit is 30:00 mins");
    printf("\n\t(5)  Any typing mistakes should be informed to the invigilator\n\n");
    getch();
    while(!feof(fp1))
    {
        fscanf(fp1,"%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&q1,&q2,&q3,&q4,&q5,&q6,&q7,&q8,&q9,&q10,&k1,&k2,&k3,&k4,&k5,&k6,&k7,&k8,&k9,&k10);
        if(feof(fp1))
            break;
        else
        {
            //          -----------------------------
            //            FIRST  QUESTION   PATTERN
            //          -----------------------------

            printf("\n\tQUESTIONS FROM 1-5 ARE TRUE AND FALSE BASED-\n\n");
            getch();
            fflush(stdin);

            printf("\n(1)-%s",q1);
            printf("\nEnter your answer:");
            scanf("%s",&c1);
            if(stricmp(k1,c1)==0)
                k++;

            fflush(stdin);
            printf("\n(2)-%s",q2);
            printf("\nEnter your answer:");
            scanf("%s",&c2);
            if(stricmp(k2,c2)==0)
                k++;

            fflush(stdin);
            printf("\n(3)-%s",q3);
            printf("\nEnter your answer:");
            scanf("%s",&c3);
            if(stricmp(k3,c3)==0)
                k++;
            fflush(stdin);
            printf("\n(4)-%s",q4);
            printf("\nEnter your answer:");
            scanf("%s",&c4);
            if(stricmp(k4,c4)==0)
                k++;
            fflush(stdin);
            printf("\n(5)-%s",q5);
            printf("\nEnter your answer:");
            scanf("%s",&c5);
            if(stricmp(k5,c5)==0)
                k++;

                //           ----------------------------
                //            SECOND  QUESTION   PATTERN
                //           ----------------------------


            printf("\n\tQUESTIONS FROM 6-10 FILL IN THE BLANKS-\n\n");
            getch();
            fflush(stdin);

            printf("\n(6)-%s",q6);
            printf("\nEnter your answer:");
            scanf("%s",&c6);
            if(stricmp(k6,c6)==0)
                k++;
            fflush(stdin);
            printf("\n(7)-%s",q7);
            printf("\nEnter your answer:");
            scanf("%s",&c7);
            if(stricmp(k7,c7)==0)
                k++;
            fflush(stdin);
            printf("\n(8)-%s",q8);
            printf("\nEnter your answer:");
            scanf("%s",&c8);
            if(stricmp(k8,c8)==0)
                k++;
            fflush(stdin);
            printf("\n(9)-%s",q9);
            printf("\nEnter your answer:");
            scanf("%s",&c9);
            if(stricmp(k9,c9)==0)
                k++;
            fflush(stdin);
            printf("\n(10)-%s",q10);
            printf("\nEnter your answer:");
            scanf("%s",&c10); fflush(stdin);
            if(stricmp(k10,c10)==0)
                k++;
            fflush(stdin);

            //  <========  P E R F O R M A N C E    A N A L Y S I S  ========>

            printf("\n\n\n\n    YOUR SCORE IS  = %d ",k);
            if(k>8)
                printf("\n Excellent Performance");
            else if(k<=8 && k>=6)
                printf("\n Satisfactory Performance");
            else if(k==5)
                printf("\n Average Performance");
            else if(k<5)
                printf("\n Need to improve a Lot");
            }
    }
    fclose(fp1);
}



///                  ***************************************************************************
///                                       SET-2  PAPER----------FOR 2ND ATTEMPT
///                  ***************************************************************************



 void reexam()
{
    FILE *fp2;
    int k=0;
    char c1[100],c2[100],c3[100],c4[100],c5[100],c6[100],c7[100],c8[100],c9[100],c10[100],r1[100],r2[100],r3[100],r4[100],r5[100],r6[100],r7[100],r8[100],r9[100],r10[100],c,j1[100],j2[100],j3[100],j4[100],j5[100],j6[100],j7[100],j8[100],j9[100],j10[100];
    fp2=fopen("exam1.txt","r");
    printf("\n\n\tINSTRUCTIONS\n");
    printf("\n\t(1)  Total Marks is 10");
    printf("\n\t(2)  Any Suspicious Activities will Result in Your Disqualification");
    printf("\n\t(3)  In Examination Hall invigilator is provided with sole authority");
    printf("\n\t(4)  Time Limit is 30:00 mins");
    printf("\n\t(5)  Any typing mistakes should be informed to the invigilator\n\n");
    getch();
    while(!feof(fp2))
    {
        fscanf(fp2,"%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&r1,&r2,&r3,&r4,&r5,&r6,&r7,&r8,&r9,&r10,&j1,&j2,&j3,&j4,&j5,&j6,&j7,&j8,&j9,&j10);
        if(feof(fp2))
            break;
        else
        {
                     //           ---------------------------
                     //            FIRST  QUESTION   PATTERN
                     //           ---------------------------


            printf("\n\tQUESTIONS FROM 1-5 ARE TRUE AND FALSE BASED-\n\n");
            getch();
             fflush(stdin);

            printf("\n(1)-%s",r1);
            printf("\nEnter your answer:");
            scanf("%s",&c1);
            if(stricmp(j1,c1)==0)
                k++;
                fflush(stdin);
            printf("\n(2)-%s",r2);
            printf("\nEnter your answer:");
            scanf("%s",&c2);
            if(stricmp(j2,c2)==0)
                k++;
                fflush(stdin);
            printf("\n(3)-%s",r3);
            printf("\nEnter your answer:");
            scanf("%s",&c3);
            if(stricmp(j3,c3)==0)
                k++;
                fflush(stdin);
            printf("\n(4)-%s",r4);
            printf("\nEnter your answer:");
            scanf("%s",&c4);
            if(stricmp(j4,c4)==0)
                k++;
                fflush(stdin);
            printf("\n(5)-%s",r5);
            printf("\nEnter your answer:");
            scanf("%s",&c5);
            if(stricmp(j5,c5)==0)
                k++;

                      //           ----------------------------
                      //            SECOND  QUESTION   PATTERN
                      //           ----------------------------


            printf("\n\tQUESTIONS FROM 6-10 FILL IN THE BLANKS-\n\n");
            getch();
                fflush(stdin);

            printf("\n(6)-%s",r6);
            printf("\nEnter your answer:");
            scanf("%s",&c6);
            if(stricmp(j6,c6)==0)
                k++;
                fflush(stdin);
            printf("\n(7)-%s",r7);
            printf("\nEnter your answer:");
            scanf("%s",&c7);
            if(stricmp(j7,c7)==0)
                k++;
                fflush(stdin);
             printf("\n(8)-%s",r8);
            printf("\nEnter your answer:");
            scanf("%s",&c8);
            if(stricmp(j8,c8)==0)
                k++;
                fflush(stdin);
             printf("\n(9)-%s",r9);
            printf("\nEnter your answer:");
            scanf("%s",&c9);
            if(stricmp(j9,c9)==0)
                k++;
                 fflush(stdin);
             printf("\n(10)-%s",r10);
            printf("\nEnter your answer:");
            scanf("%s",&c10);
            if(stricmp(j10,c10)==0)
                k++;
                fflush(stdin);

            // <========  P E R F O R M A N C E    A N A L Y S I S  ========>

            printf("\n\n\n\n    YOUR SCORE IS  = %d ",k);
            if(k>8)
                printf("\n Excellent Performance\n");
            else if(k<=8 && k>=6)
                printf("\n Satisfactory Performance\n");
            else if(k==5)
                printf("\n Average Performance\n");
            else if(k<5)
                printf("\n Need to improve a Lot\n");
            }
    }
    fclose(fp2);
}



///       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///                  N O T E --          A G A I N     A F T E R     2 N D     A T T E M P T     S E T - 1      R E A P P E A R S
///       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





 ///*************************************************************************************************************************************************************************************************************************************************

                                     ///       <===============================================>
                                     ///         *********************************************
                                     ///                 E N D    O F   P R O G R A M
                                     ///         *********************************************
                                     ///       <===============================================>

///**************************************************************************************************************************************************************************************************************************************************
