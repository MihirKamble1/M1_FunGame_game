#include<stdio.h>
#include<stdlib.h>
  struct Quiz {  
            char name[20];  
            int score;  
            int stars;       //star ratings  
}q;  
  
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
        break;  1
  
          default:  
        exit(1);  
    }  
  
  getc;  
}  
  
void help()  
{  
     int ch;  
  
      
     printf("\n ....................FunGame...........\n");  
     printf("\n >> There will be a total of 20 questions");  
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");  
     printf("\n    right option");  
     printf("\n >> Each question will carry 10 points");  
     printf("\n >> You will be asked questions continuously.");  
     printf("\n >> There will be negative marking for wrong answer 10 points will be deducted");  
  
      
  
  
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
        scanf("%s",q.name);  
  
  
  
  
        printf("******************* Welcome \" %s \" *************************** \n\n", q.name);  
  
  
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
          --count;
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
  
  
        printf("Q(4).What is the base data type of a pointer variable by which the memory would be allocated to it \n1. int\t2.float\n3.No data type\t4.unsigned int\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3. No data type\n\n");
          --count;
              
        }  
  
        printf("Q(5).How to add standard input or output header file in c program \n1.#include<stdio.h>\t2.#header<stdio.h>\n3. #include<standardio.h>\t4.#include<io.h>\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.#include<stdio.b>\n\n");
          --count;
        }  
  
        printf("Q(6).The preprocessor directive which is used to remove the defination of an indentifier which was previously defined with #define \n1.#ifdef\t2.#undef\n3.#ifndef\t4.#def\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.#undef\n\n");
          --count;
        }  
  
        printf("Q(7). What is the key word used to define a macro.? \n1.def\t2.defination\n3.define\t4.defy\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.define\n\n");
          --count;
        }  
  
        printf("Q(8). Which of the following is not a preprosessor directive\n1.#error\t2.#pragma\n3.#if\t4.#ifelse\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4.#ifelse\n\n");
          --count;
        }  
  
        printf("Q(9). A pointer variable can be \n1.Passed to a function\t2.Changed within a function\n3.Returned by a function\t4.Can be assigned a integer value\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 3.Returned by function\n\n");
          --count;
        }  
  
        printf("Q(10). The value of L1/2.L5/2JJ is\n1.1\t2.2\n3.3\t\.0.5\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. 1\n\n");
          --count;
        }  
  
        printf("Q(11). Which of the following function f:ZXZ=Z IS not onto \n1. f(a,b)=a+b\t2. f(a,b)=a\n3. f(a,b)=modb\t4.f(a,b)=a+b\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2. f(a,b)=mob\n\n");
          --count;
        }  
  
        printf("Q(12). The domain of the function that assign to each pair of integers the maximum of these\n1. N\t2. Z\n3.  Z*\t4. Z*XZ*\n\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. *Z*XZ*\n");
          --count;
        }  
  
        printf("Q(13). What are the most commonly used transmission speeds in BPS used in data communication?\n1.   300\t2. 1200\n3.   2400\t4. 9600\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==4)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4. 9600\n\n");
          --count;
        }  
  
        printf("Q(14).  Which of the following is used for modulation and demodulation?\n1. modem\t2. protocols\n3. gateway\t4. multiplexer\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.modem\n\n");
          --count;
        }  
  
        printf("Q(15). Contention is \n1. One or more conductors that serve as a common connection for a related group of devices\n2.   a continuous frequency capable of being modulated or impressed with a second signal\n3.  the condition when two or more stations attempt to use the same channel at the same time\n4.   a collection of interconnected functional units that provides a data communications service among stations attached to the network\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. the condition when two or more stations attempt to use the same channel at the same time\n\n");
          --count;
        }  
  
        printf("Q(16). When you ping the loopback address, a packet is sent where?\n1. On the network\n2. Down through the layers of the IP architecture and then up the layers again\n3. Across the wire\n4. through the loopback dongle\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==2)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  2. Down through the layers of the IP architecture and then up the layers again\n\n");
          --count;
        }  
  
        printf("Q(17). Which of the following TCP/IP protocol is used for transferring electronic mail messages from one machine to another?\n1. FTP\t2.    SNMP\n3. SMTP\t4. RPC\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. SMTP\n\n");
          --count;
        }  
  
        printf("Q(18). Which of the following device is used to connect two systems, especially if the systems use different protocols?\n1. hub\t2. bridge\n3. gateway\t4. repeater\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==3)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  3. gateway\n\n");
          --count;
        }  
  
        printf("Q(19). The slowest transmission speeds are those of\n1. twisted-pair wire\t2. coaxial cable\n3. fiber-optic cable\t4.   microwaves\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. twisted-pair wire\n\n");
            --count;
        }  
  
        printf("Q(20). What is the port number for NNTP?\n1. 119\t2. 80\n3. 79\t4. 70\n");  
        printf("Your answer: ");  
        scanf("%d",&answere);  
        if(answere==1)  
        {  
            printf("Correct! +10 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is  1. 119 \n\n");
            --count;
        }  
  
  
        //counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", count*10);  
  
                q.score=count*10;
                
  
                if(q.score >= 80)  
                {  
                    printf("Rating: * * * * *");  
                    q.stars=5;  
                }  
                else if(q.score >= 60 && q.score < 80)  
                {  
                    printf("Rating: * * * *");  
                    q.stars=4;  
                }  
                else if(q.score >= 40 && q.score < 60)  
                {  
                    printf("Rating: * * *");  
                  q.stars=3;  
                }  
                else if(q.score >= 20 && q.score < 40)  
                {  
                    printf("Rating: * *");  
                    q.stars=2;  
                }  
                else if(q.score < 20)  
                {  
                    printf("Rating: *");  
                     q.stars=1;  
                }  
  
            //writing to file  
  
                    fprintf(fp,"%s %d %d", q.name,q.score,q.stars);  
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
    while(fscanf(fp,"%s %d %d",q.name,&q.score, &q.stars) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",q.name,q.score,q.stars);  
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
