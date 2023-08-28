//TIC-TAC-TOE CODE
//AUTHOR:: SAGAR SINGH DATE:: 22/04/2023
#include<stdio.h>
#include<conio.h>
int row; int col;
int choose(int n);
int main()
{
    printf("\n WELCOME TO TIC-TAC-TOE by SAGAR GAME STUDIOS \n");

    char box[3][3]; char x='X'; char o='O'; char p1[100], p2[100];

    label5:
    //INITIALISING 2-D ARRAY
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                box[i][j]='_';
            }
        }
        
    printf("\n LOADING...!! \n");
    for(int m=1;m<=100;m++)
    printf(".");

    printf("\n RULES: \n");
    printf("\n 1. CHOOSE BOX NUMBER BETWEEN 1-9 !! \n");
    printf("\n 2. IF YOU OVERWRITE YOUR OPPONENT'S BOX... YOU WILL BE DISQUALIFIED AND YOUR OPPONENT WILL WIN..!! \n");
    printf("\n 3. ROAD-MAP OF THE TIC-TAC-TOE BOX IS SHOWN BELOW: \n");
    int b=1;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d |\t",b);
                b++;
            }
            printf("\n ___\t ___\t ___\n");
        }

    printf("\n LOADING....!! \n");
    for(int m=1;m<=100;m++)
    printf(".");

    //TAKING INPUT NAME OF PLAYERS
    printf("\n ENTER NAME OF PLAYER 1: \n");
    scanf("%s",&p1);
    printf("\n ENTER THE NAME OF PLAYER 2: \n");
    scanf("%s",&p2);

    printf("\n PLAYER 1 GETS X \n");
    printf("\n PLAYER 2 GETS O \n");

    printf("\n LOADING...!! \n");
    for(int m=1;m<=100; m++)
    printf(".");
    printf("\n GAME STARTS...!! \n");
    int k=0; int bnum=0; 

    //GAME STARTS HERE
    for(k=1;k<=9;k++)
    {
        if(k%2!=0)
        {
            label: printf("\n %s YOUR CHANCE:: \n",p1);
            printf("\n ENTER BOX NUMBER:: \n");
            scanf("%d",&bnum);
            choose(bnum);
            if(box[row][col]==o)                                       //CHECKING FOR POSSIBLE OVERWRITE
            {
                printf("%s WINS THE MATCH BY DISQUALIFICATION!!",p2);
                break;
            }
            else if(row>2 || col>2)                                     //CONDITION TO PREVENT ARRAY OUT OF BOUNDS
            goto label;
            else
            box[row][col]=x;
        }

        else if(k%2==0)
        {
            label2: printf("\n %s YOUR CHANCE:: \n",p2);
            printf("\n ENTER BOX NUMBER:: \n");
            scanf("%d",&bnum);
            choose(bnum);
            if(box[row][col]==x)                                        //CHECKING FOR POSSIBLE OVERWRITE
            {
                printf("%s WINS THE MATCH BY DISQUALIFICATION!!",p1);
                break;
            }
            else if(row>2 || col>2)                                     //CONDITION TO PREVENT ARRAY OUT OF BOUNDS
            goto label2;
            else
            box[row][col]=o;
        }

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%c |\t",box[i][j]);
            }
            printf("\n__\t__\t__\n");
        }

        //CHECKS FOR EQUAL BOXES IN A STRAIGHT LINE START HERE 
        if(k>=5)
        {
            if(box[0][0]==box[0][1] && box[0][1]==box[0][2] && box[0][0]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }
            if(box[0][0]==box[0][1] && box[0][1]==box[0][2] && box[0][0]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }
            if(box[1][0]==box[1][1] && box[1][1]==box[1][2] && box[1][1]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }
            if(box[1][0]==box[1][1] && box[1][1]==box[1][2] && box[1][1]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[2][0]==box[2][1] && box[2][1]==box[2][2] && box[2][0]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[2][0]==box[2][1] && box[2][1]==box[2][2] && box[2][0]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[0][0]==box[1][0] && box[1][0]==box[2][0] && box[0][0]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[0][0]==box[1][0] && box[1][0]==box[2][0] && box[0][0]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[0][1]==box[1][1] && box[1][1]==box[2][1] && box[0][1]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[0][1]==box[1][1] && box[1][1]==box[2][1] && box[0][1]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[0][2]==box[1][2] && box[1][2]==box[2][2] && box[0][2]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[0][2]==box[1][2] && box[1][2]==box[2][2] && box[0][2]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[0][0]==box[1][1] && box[1][1]==box[2][2] && box[0][0]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[0][0]==box[1][1] && box[1][1]==box[2][2] && box[0][0]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }if(box[0][2]==box[1][1] && box[1][1]==box[2][0] && box[0][2]==x)
            {
                printf("\n %s WINS....!!\n",p1);
                break;
            }if(box[0][2]==box[1][1] && box[1][1]==box[2][0] && box[0][2]==o)
            {
                printf("\n %s WINS....!!\n",p2);
                break;
            }
        }
        if(k==9)
        {
            printf("\n MATCH DRAW..!! \n");
            break;
        }
    }

    printf("\n MATCH ENDS....!! \n");

    printf("\n DO YOU WANT TO PLAY AGAIN?? \n");
    int choice=0;

    //CHOICE FOR USE IF HE/SHE WANTS TO PLAY AGAIN
    printf("\n PRESS 1 for YES and 2 for NO!! \n");
    scanf("%d",&choice);

    if(choice==1)
    goto label5;
    else
    printf("\n THANK YOU FOR PLAYING THE GAME.... SEE YOU SOON!! \n");

    getch();
    return 0;
}

//FUNCTION TO DETERMINE THE LOCATION OF BOX CHOOSEN BY USERS
int choose(int n)
{
    switch(n)
    {
        case 1:
        row=0; col=0;
        break;
        case 2:
        row=0; col=1;
        break;
        case 3:
        row=0; col=2;
        break;
        case 4:
        row=1; col=0;
        break;
        case 5:
        row=1; col=1;
        break;
        case 6:
        row=1; col=2;
        break;
        case 7:
        row=2; col=0;
        break;
        case 8:
        row=2; col=1;
        break;
        case 9:
        row=2; col=2;
        default:
        return 0;
    }
}