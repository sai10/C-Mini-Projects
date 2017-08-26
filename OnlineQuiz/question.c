

///    +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
///              P R O G R A M    F O R    S E T T I N G    Q U E S T I O N    P A P E R    F O R   A   E X A M I N A T I O N
///    +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


 #include<stdio.h>
 #include<conio.h>

 //                       *****************
 //                         MAIN FUNCTION
 //                       *****************

void main()
{
    int choice,i;

    //                    --------------------
    //                     STARTING INTERFACE
    //                    --------------------

    for(i=0;i<2;i++)
    {
    printf("\n\n\n\t QUESTION SECTION");
    printf("\n\t__________________\n");
    printf("\n(1)Question for test");
    printf("\n(2)Question for retest");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==1)
            exam();
    else if(choice==2)
        reexam();
    else
        exit(0);

    }
}


///                          ******************************
///                          QUESTIN SECTION--------SET - 1
///                          ******************************


void exam()
{
    FILE *fp1;
    char q1[100],q2[100],q3[100],q4[100],q5[100],q6[100],q7[100],q8[100],q9[100],q10[100],c,k1[100],k2[100],k3[100],k4[100],k5[100],k6[100],k7[100],k8[100],k9[100],k10[100];
    fp1=fopen("exam.txt","w");
    fflush(stdin);
    printf("\n\tTHIS SECTION IS EXCLUSIVELY FOR TEACHERS:");
    printf("\n\t`````````````````````````````````````````");
    printf("\n\n\n ARE YOU SURE TO OVERWRITE PREVIOUS QUESTION PAPER(y/n)?:");
    c=getchar();
    if(c=='y')
    {

        //      --------------------
        //       QUESTION OF TYPE-1
        //      --------------------

        printf("\n   QUESTIONS FROM 1 TO 5 SHOULD BE TRUE OR FALSE BASED :");
        printf("\n\n  ENTER QUESTION (1)");
        scanf("%s",&q1);
        printf("\n  ans(1)-");
        scanf("%s",&k1);
        printf("\n\n  ENTER QUESTION (2)");
        scanf("%s",&q2);
         printf("\n  ans(2)-");
        scanf("%s",&k2);
        printf("\n\n  ENTER QUESTION (3)");
        scanf("%s",&q3);
         printf("\n  ans(3)-");
        scanf("%s",&k3);
        printf("\n\n  ENTER QUESTION (4)");
        scanf("%s",&q4);
         printf("\n  ans(4)-");
        scanf("%s",&k4);
        printf("\n\n  ENTER QUESTION (5)");
        scanf("%s",&q5);
         printf("\n  ans(5)-");
        scanf("%s",&k5);

        //     --------------------
        //      QUESTION OF TYPE-2
        //     --------------------

        printf("\n   QUWESTION FROM 6 TO 10 SHOULD BE FILL IN THE BLANKS...");
        printf("\n\n  ENTER QUESTION (6)");
        scanf("%s",&q6);
         printf("\n  ans(6)-");
        scanf("%s",&k6);
        printf("\n\n  ENTER QUESTION (7)");
        scanf("%s",&q7);
         printf("\n  ans(7)-");
        scanf("%s",&k7);
        printf("\n\n  ENTER QUESTION (8)");
        scanf("%s",&q8);
         printf("\n  ans(8)-");
        scanf("%s",&k8);
        printf("\n\n  ENTER QUESTION (9)");
        scanf("%s",&q9);
         printf("\n  ans(9)-");
        scanf("%s",&k9);
        printf("\n\n  ENTER QUESTION (10)");
        scanf("%s",&q10);
         printf("\n  ans(10)-");
        scanf("%s",&k10);
        fprintf(fp1,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10);
        printf("\n   QUESTIONS ARE READY");
    }
else
{
    //      ---------------
    //       LAST  SEGMENT
    //      ---------------

    fflush(stdin);
    printf("\n\n   THANH YOU FOR YOUR TIME\n");
}
fclose(fp1);
}


///                          ******************************
///                          QUESTIN SECTION--------SET - 2
///                          ******************************



void reexam()
{
    FILE *fp2;
    char r1[100],r2[100],r3[100],r4[100],r5[100],r6[100],r7[100],r8[100],r9[100],r10[100],c,j1[100],j2[100],j3[100],j4[100],j5[100],j6[100],j7[100],j8[100],j9[100],j10[100];
    fp2=fopen("exam1.txt","w");
    fflush(stdin);
    printf("\n\tTHIS SECTION IS EXCLUSIVELY FOR TEACHERS:");
    printf("\n\t`````````````````````````````````````````");
    printf("\n\n\n ARE YOU SURE TO OVERWRITE PREVIOUS RETEST QUESTION PAPER(y/n)?:");
    c=getchar();
    if(c=='y')
    {
        //      --------------------
        //       QUESTION OF TYPE-1
        //      --------------------

        printf("\n   QUESTIONS FROM 1 TO 5 SHOULD BE TRUE OR FALSE BASED :");
        printf("\n\n  ENTER QUESTION (1)");
        scanf("%s",&r1);
        printf("\n  ans(1)-");
        scanf("%s",&j1);
        printf("\n\n  ENTER QUESTION (2)");
        scanf("%s",&r2);
         printf("\n  ans(2)-");
        scanf("%s",&j2);
        printf("\n\n  ENTER QUESTION (3)");
        scanf("%s",&r3);
         printf("\n  ans(3)-");
        scanf("%s",&j3);
        printf("\n\n  ENTER QUESTION (4)");
        scanf("%s",&r4);
         printf("\n  ans(4)-");
        scanf("%s",&j4);
        printf("\n\n  ENTER QUESTION (5)");
        scanf("%s",&r5);
         printf("\n  ans(5)-");
        scanf("%s",&j5);

        //     --------------------
        //      QUESTION OF TYPE-2
        //     --------------------

        printf("\n   QUWESTION FROM 6 TO 10 SHOULD BE FILL IN THE BLANKS...");
        printf("\n\n  ENTER QUESTION (6)");
        scanf("%s",&r6);
         printf("\n  ans(6)-");
        scanf("%s",&j6);
        printf("\n\n  ENTER QUESTION (7)");
        scanf("%s",&r7);
         printf("\n  ans(7)-");
        scanf("%s",&j7);
        printf("\n\n  ENTER QUESTION (8)");
        scanf("%s",&r8);
         printf("\n  ans(8)-");
        scanf("%s",&j8);
        printf("\n\n  ENTER QUESTION (9)");
        scanf("%s",&r9);
         printf("\n  ans(9)-");
        scanf("%s",&j9);
        printf("\n\n  ENTER QUESTION (10)");
        scanf("%s",&r10);
         printf("\n  ans(10)-");
        scanf("%s",&j10);
        fprintf(fp2,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,j1,j2,j3,j4,j5,j6,j7,j8,j9,j10);
        printf("\n   RETEST QUESTIONS ARE READY");
    }
else
{
    //            --------------
    //             LAST SEGMENT
    //            --------------

    fflush(stdin);
    printf("\n\n   THANK YOU FOR YOUR TIME\n");
}
fclose(fp2);
}





///*************************************************************************************************************************************************************************************************************************************************

                                           ///       <===============================================>
                                           ///         *********************************************
                                           ///                 E N D    O F   P R O G R A M
                                           ///         *********************************************
                                           ///       <===============================================>

///*************************************************************************************************************************************************************************************************************************************************
