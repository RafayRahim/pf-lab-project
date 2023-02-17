#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 int 
main () 
{
    remove("student.txt");
int choice,th_number=0,z;
float divi;
char name[50], pass[50], again;
int arn;
char passdsu[] = { "Admin" };
system("cls");
printf ("\n\t\t\t\t\t***************************\n\n"); 
		printf("\033[0m");
		printf("\033[32m"); 
		printf("\n\t\t\t\t\t      \e[1m ZRV Quiz Game \e[m    \n\n");
		printf("\033[0m");     
printf ("\n\t\t\t\t\t***************************\n\n\n");  
while (1)     
    {
printf("\033[32m"); 
printf ("\t\t\t\t\t\e[1m 1.Admission Test\e[m\n"); 
printf("\033[32m"); 
printf ("\t\t\t\t\t \e[1m2.Test Scores\e[m\n");
printf("\033[32m"); 
printf ("\t\t\t\t\t \e[1m3.Search Scores\e[m\n");
printf("\033[32m"); 
printf ("\t\t\t\t\t \e[1m4.Merit Calculator\e[m\n");
printf("\033[32m"); 
printf ("\t\t\t\t\t \e[1m5.Selection\e[m\n");
printf("\033[32m"); 
printf("\t\t\t\t\t \e[1m6.\e[m");
printf("\033[32m"); 
printf ("\e[1mExit\e[m\n\n");
printf("\033[0m");
printf("\t\t\t\tPlease Choose What Page You Want To Visit :");
scanf ("%d", &choice);
if (choice == 1)
	{  system("cls");
	  do
	    { 
printf ("\n \t \t\t Enter Your Name :");	       
scanf ("%s", name);
printf ("\n \t \t\tEnter your ARN No :");
scanf ("%d", &arn);
printf ("\n \t \t\tEnter ZRV Password (Admin) : ");
scanf ("%s", pass);
	      int d = strcmp (pass, passdsu);
if (d == 0){
		system("cls");
printf ("\n \t \t\t Welcome to ZRV Quiz Game \n\n");
char ch;
int sub;
int score;
char ans;
printf ("What subject do you want to choose\n\n\t\t1.Physics\n\t\t2.Maths\n\t\t3.Chemistry\n\t\t4.English\n\nEnter the digit to select the subject :"); 
scanf ("%d", &sub); 
if (sub == 1)
		{ system("cls");
score = 0; 
printf ("\n1. A 50*10^(-6)F capacitor has a potential difference of 8 V across it. The charge on capacitor is \nA) 4*10^(-4)C\nB) 4*10^(-3)C\nC) 6.25*10^(-6)C\nD) 6.25*10^(-5)C\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'A' || ans == 'a')
	{score = score + 20;}
printf ("\n2. Two forces equal in magnitude have a resultant with its magnitude equal to either. The angle between them is\nA) 45\nB) 60\nC) 90\nD) 120\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'D' || ans == 'd')
			{score = score + 20;}
printf("\n3. A current of 4.8 A is flowing in a conductor. The number of electrons passing through any cross-section per second is\nA) 3C10^19\nB) 3C10^20\nC) 7.68C10^19\nD) 7.68C10^20\nYour Answer=");		      
scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
			{score = score + 20;}
printf("\n4. When the velocity of a body is doubled\nA) Its K.E. is doubled\nB) Its P.E. is doubled\nC) Its momentum is doubled\nD) Its acceleration is doubled\nYour Answer=");	       
scanf (" %c", &ans);
if (ans == 'c' || ans == 'C')
			{score = score + 20;}
printf 
			("\nThe Kinetic Energy of a body of mass 2 kg and momentum of 2 Ns is\nA) 1 J\nB) 2 J\nC) 3 J\nD) 4 J\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
			{score = score + 20;}
printf ("Your Score is : %d", score);}
		  else if (sub == 2)
		    { system("cls");
		      score = 0;
printf("\n1. The perimeter of a triangle is 240. Its sides are proportional to 3:4:5. The largest side of the triangle is\nA) 80\nB) 120\nC) 60\nD) 100\nYour Answer="); 
scanf (" %c", &ans);
if (ans == 'D' || ans == 'd')
{
score = score + 20;
}
printf ("\n2. The width of a rectangle is 6 cm less than its length. If its perimeter is 80 cm then its lengths (in cm) and area (in cmB2) are respectively\nA) 16 , 351\nB) 23 , 391\nC) 17 , 391\nD) 20 , 341\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'B' || ans == 'b'){ 
score = score + 20;
}
printf 	("\n3. A shop was sold for Rs. 3,000,000 by an agent who received a commission of 2.5 How much commission did he receive?\nA) 30,000\nB) 750,000\nC) 7,500\nD) 75,000\nYour Answer=");      
scanf (" %c", &ans);
if (ans == 'D' || ans == 'd')
			{score = score + 20;}
printf ("\n4.How long will it take Jafar and Kadir working together to cultivate a field which Jafar can cultivate alone in three hours and Kadir alone in six hours?\nA) Two hours\nB) Four hours\nC) Eight hours\nD) None of the above\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
			{score = score + 20;}
		      printf ("%d", score);
		  printf("\n5.Tickets numbered 1 to 20 are mixed up and then a ticket is drawn at random. What is the probability that the ticket drawn has a number which is a multiple of 3 or 5?\nA) 2/5\nB) 1/2\nC) 8/15\nD) 9/20\nYour Answer=");
            scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
		    {score = score + 20;
}
printf ("Your Score is : %d", score); 
}
	      else if (sub == 3){
            system("cls");
		    score = 0;
printf("\n1. Properties that distinguish a substance from other but does not tell about its reaction, is\nA) Energetic property\nB) Reacting property\nC) Chemical property\nD) Physical property \nYour Answer="); 
scanf (" %c", &ans);
if (ans == 'D' || ans == 'd')
		    {score = score + 20;}
printf  ("\n2. Boiling point of a liquid is a\nA) Physical property\nB) Bonding property\nC) Internal property\nD) Chemical property\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
		    {score = score + 20;
} 
printf ("\n3. Burning is a process\nA) Chemical\nB) Physical\nC) Nucls\nD) Biological\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'A' || ans == 'a')
		    {score = score + 20;}
printf ("\n4. The total pressure of a mixture gas is of individual gases\nA) Sum of partial pressures\nB) Multiple of partial pressure\nC) Difference in partial pressure\nD) Independent of partial pressure\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'A' || ans == 'a')
{		      
 score = score + 20;		    
}
printf("\n5.The SI unit for the measurement of pressure of gas is\nA) Newton\nB) Pascal\nC) Pound\nD) Coulomb\nYour Answer=");		  
scanf (" %c", &ans);
if (ans == 'b' || ans == 'B')
		    {
score = score + 20;
}
printf ("Your Score is : %d", score);
}
	      else if (sub == 4)
		{  system("cls");
score = 0;
printf 
		    ("\n1. You would have empathy if you\na. shared sad feelings\nb. lost in a game\nc. hurt your arm\nd. ate a large meal\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'A' || ans == 'a')
		    {
score = score + 20;
}
printf 
		    ("\n2. How would you feel if there was a dearth of food?\na. Happy\nb. Hungry\nc. Full\nd.Sleepy\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'B' || ans == 'b')
		    {
score = score + 20;
}
printf 
		    ("\n3. If something is a convenience, then it makes\na. you very angry\nb. you feel sick\nc. a lot of money\nd.a task easier\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'D' || ans == 'd')
		    {
score = score + 20;
}
printf 
		    ("\n4. Choose the word that is most nearly similar in meaning to the word BESEECH\n(A) starving\n(B) implore\n(C) weak\n(D) highly skilled\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'b' || ans == 'B')
		    {
score = score + 20;
}
printf 
		    ("\n5. Choose the word that is most nearly similar in meaning to the word RAVENOUS\n(A) starving\n(B) voracious\n(C) easily broken\n(D) highly skilled\nYour Answer=");
scanf (" %c", &ans);
if (ans == 'a' || ans == 'A')
		    {
score = score + 20;
}
printf ("Your Score is : %d\n", score);
}
FILE * fptr;
fptr = fopen ("student.txt", "a");
fprintf (fptr, "Name :%s\n", name);
fprintf (fptr, "ARNNumber :%d\n", arn);
fprintf (fptr, "Score :%d\n", score);
fclose (fptr);
printf ("\nDo you want to add another response?(y/n)");
scanf (" %c", &again);
}
th_number++;
system("cls");
}
while (again == 'y');
}
if (choice == 2)
	{   system("cls");
char a, b, ch;
FILE * fptr;
fptr = fopen ("student.txt", "r");
	  do
	    {
ch = fgetc (fptr);
printf ("%c", ch);
}
while (ch != EOF);
}
	if (choice == 3)
	{  system("cls");
int num;
char nameletter[50], scoreletter[50], score[50], name[50],
searchscore[50], arnletter[50], arnstudent[50];
printf 
	    ("Search Score Of Any Student Using his/her ARN Number : ");
scanf ("%s", searchscore);
system("cls");
	    FILE * fptr;
fptr = fopen ("student.txt", "r");
int i;
for ( i = 1; i <= th_number; i++) {
	int i;
for ( i = 0; i <= 50; i++)
		{
nameletter[i] = fgetc (fptr);
if (nameletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
name[i] = fgetc (fptr);
if (name[i] == '\n')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
arnletter[i] = fgetc (fptr);
if (arnletter[i] == ':')
		    {
break;
}
}
		for ( i = 0; i <= 50; i++)
		{
arnstudent[i] = fgetc (fptr);
if (arnstudent[i] == '\n')
		    {
num = i;
arnstudent[i] = NULL;
break;
}
}
for ( i = 0; i <= 50; i++)
		{
scoreletter[i] = fgetc (fptr);
if (scoreletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
score[i] = fgetc (fptr);
if (score[i] == '\n')
		    {
break;
}
}
int d = strcmp (arnstudent, searchscore);
if (d == 0)
		{
printf ("%s", nameletter);
printf ("%s", name);
printf ("%s", scoreletter);
printf ("%s\n", score);
break;
}
}

}

	if (choice == 4)
	{   system("cls");
int num, score[50],summerit=0,merit;
char nameletter[50], scoreletter[50], name[50],total=th_number*100,
searchscore[50], arnletter[50], arnstudent[50];
	    FILE * fptr;
fptr = fopen ("student.txt", "r");
int i;
for ( i = 1; i <= th_number; i++) {
	int i;
for ( i = 0; i <= 50; i++)
		{
nameletter[i] = fgetc (fptr);
if (nameletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
name[i] = fgetc (fptr);
if (name[i] == '\n')
		    {
break;
}
}
for ( i = 0; i <= 50; i++)
		{
arnletter[i] = fgetc (fptr);
if (arnletter[i] == ':')
		    {
break;
}
}

		for ( i = 0; i <= 50; i++)
		{
arnstudent[i] = fgetc (fptr);
if (arnstudent[i] == '\n')
		    {
num = i;
arnstudent[i] = NULL;
break;
}
}
		for ( i = 0; i <= 50; i++)
		{
scoreletter[i] = fgetc (fptr);
if (scoreletter[i] == ':')
		    {
break;
}
}
for ( i = 0; i <= 50; i++)
		{
score[i] = fgetc (fptr);
if (score[i] == '\n')
		    {
break;
}
}
   int y = atoi(score);
   if(y==1){
       summerit=summerit+(y*100);
   }
   else{
        summerit=summerit+(y*10);
   }
//   printf("%d",summerit);
}
divi=(float) summerit/(float) th_number;

printf("\nThe Merit For All The Participants Are :%f\n\n",divi);
}
	if (choice == 5)
	{  system("cls");
int num;
int  score[50],summerit=0,merit;
char nameletter[50],scoreletter[50], name[50],total=th_number*100,
searchscore[50], arnletter[50], arnstudent[50];
	    FILE * fptr;
fptr = fopen ("student.txt", "r");
int i;
for ( i = 1; i <= th_number; i++) {
	int i;
for ( i = 0; i <= 50; i++)
		{
nameletter[i] = fgetc (fptr);
if (nameletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
name[i] = fgetc (fptr);
if (name[i] == '\n')
		    {
break;
}
}
for ( i = 0; i <= 50; i++)
		{
arnletter[i] = fgetc (fptr);
if (arnletter[i] == ':')
		    {
break;
}
}

		for ( i = 0; i <= 50; i++)
		{
arnstudent[i] = fgetc (fptr);
if (arnstudent[i] == '\n')
		    {
num = i;
arnstudent[i] = NULL;
break;
}
}
		for ( i = 0; i <= 50; i++)
		{
scoreletter[i] = fgetc (fptr);
if (scoreletter[i] == ':')
		    {
break;
}
}
for ( i = 0; i <= 50; i++)
		{
score[i] = fgetc (fptr);
if (score[i] == '\n')
		    {
break;
}
}
   int y = atoi(score);
   if(y==1){
       summerit=summerit+(y*100);
   }
   else{
        summerit=summerit+(y*10);
   }
//   printf("%d",summerit);
}
divi=(float) summerit/(float) th_number;
printf 
	    ("Search Score Of Any Student Using his/her ARN Number : ");
scanf ("%s", searchscore);
system("cls");
	   // FILE * fptr;
fptr = fopen ("student.txt", "r");
for ( i = 1; i <= th_number; i++) {
	int i;
for ( i = 0; i <= 50; i++)
		{
nameletter[i] = fgetc (fptr);
if (nameletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
name[i] = fgetc (fptr);
if (name[i] == '\n')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
arnletter[i] = fgetc (fptr);
if (arnletter[i] == ':')
		    {
break;
}
}
		
		for ( i = 0; i <= 50; i++)
		{
arnstudent[i] = fgetc (fptr);
if (arnstudent[i] == '\n')
		    {
num = i;
arnstudent[i] = NULL;
break;
}
}

		for ( i = 0; i <= 50; i++)
		{
scoreletter[i] = fgetc (fptr);
if (scoreletter[i] == ':')
		    {
break;
}
}

for ( i = 0; i <= 50; i++)
		{
score[i] = fgetc (fptr);
if (score[i] == '\n')
		    {
break;
}
}
int d = strcmp (arnstudent, searchscore);
if (d == 0){
    int y=atoi(score);
    if(y==1){
        z=y*100;
    }
    else{
        z=y*10;
    }
}
}
if(z<divi){
    printf("\nYour Marks Has Not Reached The Required Merit :(\n\n");
}
else if(z>=divi){
    printf("\nCongratulation Your Marks Has Reached The Required Merit :)\n\n");
}
}

if (choice == 6)
	{
		system("cls");
		printf("\033[0m");
		printf("\033[9;30;41m");
		printf("\n\n\n\n\t\t\t\t\t Thank You For Your Great Time\n\n\n\n\n\n");
		printf("\033[0m");

break;
}

}

return 0;
}

 
 
 
 
