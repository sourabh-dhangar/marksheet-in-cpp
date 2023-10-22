#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Roll_Number, maths, science, social_science, English, Hindi;
    char father_name[30], name[30], mother_name[30], school_name[40];

    int choise, Total;
    printf("Enter the key 1 for the fill information about the student\n");
    printf("Enter the key 2 for show the information abut the student\n");
    printf("Enter the key for revaluation of that subject\n");
    while(1)
    {
    printf("Enter your choise: ");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:

        printf("Enter the name :");
        scanf("%s", &name);
        printf("Enter the Roll Number :");
        scanf("%d", &Roll_Number);
        printf("Enter your school name :");
        scanf("%s", &school_name);
        printf("Enter Your fathe's Namne:");
        scanf("%s", &father_name);
        printf("Enter your mother's Name:");
        scanf("%s", &mother_name);
        printf("Enter the mathe's number :");
        scanf("%d", &maths);
        printf("Enter the science number:");
        scanf("%d", &science);
        printf("Enter the s social_science number:");
        scanf("%d", &social_science);
        printf("Enter the English number:");
        scanf("%d", &English);
        printf("Enter the Hindi number:");
        scanf("%d", &Hindi);
        Total = maths + science + social_science + Hindi + English;
        break;
    case 2:
        printf("________________________________________________________________________\n");
        printf("\n\n\n\n                       MARKSHEET OF STANDARD :%s\n\n", school_name);
        printf("__________________________________________________________________________\n");
        printf("Roll Number :-  %d\n", Roll_Number);
        printf("Student name:-  %s\n", name);
        printf("father's Namne:-%s\n", father_name);
        printf("Mother's Name :-%s\n", mother_name);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("SUBJECT\t\t\tMARKS\n");
        printf("-----------------------------------------------------------------------\n");
        printf("English\t\t\t%d\n", English);
        printf("Maths\t\t\t%d\n", maths);
        printf("Social Science\t\t%d\n", social_science);
        printf("Science\t\t\t%d\n", science);
        printf("Hindi\t\t\t%d\n", Hindi);
        printf("-------------------------------------------------------------------------\n");
        printf("Total\t\t\t%d\n", Total);
        printf("-------------------------------------------------------------------------\n");

        printf("\t\t\t\tTGRADE IS %d     'A'", Total / 5);
        printf("\n\n\n\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        break;
    case 0:
        exit(0);
    }
    }
}