#include<stdio.h>
#include<stdlib.h>
  struct play {  
            char name[20];  
            int score;  
            int stars;       //ratings  
}p;  
  
void high_score();  
void start();  
void help();  
  
void main()  
{    
       int chc=0;  
  
    printf("Press 1 to start the game\n2 to see high scores \n3 to see game help\n0 to exit :   ");  
    scanf("%d",&chc);  
  
    switch(chc)  
    {  
        case 1:  
        start();  
        break;  
  
        case 2:  
        high_score();  
        break;  
  
        case 3:  
        help();  
        break;  
  
          default:  
        exit(1);  
    }  
  
  getc;  
}  
  
void help()  
{  
     int ch;  
  
     printf("\n\n ************************* GAME HELP *************************");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n ....................FunGame...........\n");  
     printf("\n >> There will be a total of 20 questions. Each Question carries 10 marks. Every correct option will give you 10 marks and each wrong answere will deduct 10 marks from your score");
     printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
  
void start()  
{  
          int answere;  
          int count=0;  
          char rating[20];  
  
          FILE *fp;  
  
          if((fp=fopen("\\tmp\play1.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  
  
        printf("\nPlease enter your name: ");  
        scanf("%s",p.name);  
  
  
  
  
        printf("******************* Welcome \" %s \"  to C Quiz Game *************************** \n\n", p.name);  
  
  
        printf("Q(1).What is git \n 1.Open Source Project \t\t2.Distributed Version Control System \n 3.Secured By SHA1\t\t 4.All of the above\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&answere);  
  
        if(answere==4)  
        {  
            printf("Correct! +10 points\n\n");  
            ++count;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4.All of the above\n\n");  
        }  
  
        printf("Q(2) Which vendor acquired GitHub for $7.5 billion in June 2018? \n 1.Oracle\t\t 2.Microsoft \n3.Google\n4.IBM\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Microsoft\n\n");
            --count;
              
        }  
  
        printf("Q(3) Which of the following is not a Git configuration scope? \n1.Local\t\t2.User\n3.System\t4.Global\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&answere);  
  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.User\n\n");
            --count;  
        }  
  
  
        printf("Q(4).Which of the following is one of Gits powerfull feature \n1.Rooting\t2.Leafing\n3.Branching\t4.Planting\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.Branching\n\n");
              --count;
        }  
  
        printf("Q(5).Which file can you configure to ensure that certain files are never committed to the local git repository?\n1.Ignore.git\t2..gitignore\n3.gitignore.txt\t4.git.ignore\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2..gitignore\n\n");
            --count;  
        }  
  
        printf("Q(6).Command to check the created, modified, deleted filesin gitbash before commit\n1.git show\t2.git log\n3.git status\t4.All of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Nazi Party\n\n");  
        }  
  
        printf("Q(7). FFC stands for \n1.Foreign Finance Corporation\t2.Film Finance Corporation\n3.Federation of Football Council\t4.None of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.git status\n\n");
            --count;  
        }  
  
        printf("Q(8). After you add a file, it becomes \n1.Committed\t2.Modified\n3.Staged\t4.Untracked\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.Staged\n\n");
            --count;  
        }  
  
        printf("Q(9).How are strings represented in memory in c?\n1.An array of characters\t2.The object of some class\n3.Same as other primitive data types\t4.Linked list of characters\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.An array of characters \n\n");
            --count;  
        }  
  
        printf("Q(10).What does the following declaration indicates: int x : 8; \n1.x stores a value of 8\t2.x is an 8 bit integer\n3.both 1&2\t4.None\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.x is an 8 bit integer\n\n");
            --count;  
        }  
  
       //counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", count*10);  
  
                p.score=count*10;  
  
                if(p.score >= 80)  
                {  
                    printf("Rating: * * * * *");  
                    p.stars=5;  
                }  
                else if(p.score >= 60 && p.score < 80)  
                {  
                    printf("Rating: * * * *");  
                    p.stars=4;  
                }  
                else if(p.score >= 40 && p.score < 60)  
                {  
                    printf("Rating: * * *");  
                  p.stars=3;  
                }  
                else if(p.score >= 20 && p.score < 40)  
                {  
                    printf("Rating: * *");  
                    p.stars=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf("Rating: *");  
                     p.stars=1;  
                }  
  
            //writing to file  
  
                    fprintf(fp,"%s %d %d", p.name,p.score,p.stars);  
                    fclose(fp);  
        }  
        else  
        {  
            printf("Try again!");  
        }  
}  
  
void high_score()  
{  
  
    int ch;  
  
    FILE *fp;  
    if((fp=fopen("\\tmp\play1.txt", "r"))==NULL)  
          {  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.stars) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.stars);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  