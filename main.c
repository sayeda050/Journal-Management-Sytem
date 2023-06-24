#include<stdio.h>
#include<stdlib.h>
#include "login.h"
#include "splash.h"
#include <dos.h>
#include <unistd.h>
#include "menu.h"


int main (void)
{

    recursiveLoading(0);
    splash();
    system("cls");
    login();
    system("cls");




    int ch;

    printf("\n\n\t***********************************\n");

    printf("\t*PASSWORD PROTECTED JOURNAL *\n");

    printf("\t***********************************");

    while(1)

    {

        printf("\n\n\t\tMAIN MENU:");

        printf("\n\n\tADD RECORD\t[1]");

        printf("\n\tVIEW RECORD\t[2]");

        printf("\n\tEDIT RECORD\t[3]");

        printf("\n\tDELETE RECORD\t[4]");

        printf("\n\tEDIT PASSWORD\t[5]");

        printf("\n\tEXIT\t\t[6]");

        printf("\n\n\tENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            addrecord();

            break;

        case 2:

            viewrecord();

            break;

        case 3:

            editrecord();

            break;

        case 4:

            deleterecord();

            break;

        case 5:

            editpassword();

            break;

        case 6:

            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ");

            getch();

            exit(0);

        default:

            printf("\nYOU ENTERED WRONG CHOICE..");

            printf("\nPRESS ANY KEY TO TRY AGAIN");

            getch();

            break;

        }

        system("cls");

    }



    return 0;
}
