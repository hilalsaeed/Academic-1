#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_CHAR 100
void artic(int,int,int,int,char[]);
void main()
{
    FILE *fp;
    int l=0,n,ca=0,cl=0,cthe=0,can=0,cdt=0,i=0;
    char filename[MAX_CHAR],c,line[10000];
    printf("Enter File Name\n");
    scanf("%s",&filename);
    fp=fopen(filename,"r");
    if(fp==0)
    {
        printf("Oops! file '%s' not found or try again",filename);
        exit(1);
    }
    else
    {
        printf("Enter a number\n");
        scanf("%d",&n);
        do
        {
            c=fgetc(fp);
            if(c=='\n'||c==EOF)
            l++;
        } while(c!=EOF);
        fclose(fp);
      fp=fopen(filename,"r");
        if(n>l)
            printf("Sorry! Not enough paragraphs, Try with value <= %d\n",l);
        else
        {
            l=0;
            while(fp!=EOF&&l<n)
            {
                fgets(line,10000,fp);
                {
                    artic(ca,can,cthe,cdt,line);
                    l++;
                    i=0;
                }
            }
        }
    fclose(fp);
    }
    getch();
}
void artic(int ac,int thec,int anc,int dt,char lin[])
{
    int i=0,j=0,k,z=0,tmp[MAX_CHAR];
    char t[MAX_CHAR];
    for(k=0;lin[k]!='\0';k++)
    {
        lin[k]=tolower(lin[k]);
    }
    while(lin[i]!='\0')
    {
        if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='a'&&lin[i+5]=='n'&&lin[i+6]=='u'&&lin[i+7]=='a'&&lin[i+8]=='r'&&lin[i+9]=='y')&&(lin[i+10]=='/'||lin[i+10]=='.'||lin[i+10]=='-'||lin[i+10]==','||lin[i+10]==' '))
            dt++;
        else if((((int)lin[i])<=50&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='f'&&lin[i+4]=='e'&&lin[i+5]=='b'&&lin[i+6]=='r'&&lin[i+7]=='u'&&lin[i+8]=='a'&&lin[i+9]=='r'&&lin[i+10]=='y')&&(lin[i+11]=='/'||lin[i+11]=='.'||lin[i+11]=='-'||lin[i+11]==','||lin[i+11]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='m'&&lin[i+4]=='a'&&lin[i+5]=='r'&&lin[i+6]=='c'&&lin[i+7]=='h')&&(lin[i+8]=='/'||lin[i+8]=='.'||lin[i+8]=='-'||lin[i+8]==','||lin[i+8]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='a'&&lin[i+4]=='p'&&lin[i+5]=='r'&&lin[i+6]=='i'&&lin[i+7]=='l')&&(lin[i+8]=='/'||lin[i+8]=='.'||lin[i+8]=='-'||lin[i+8]==','||lin[i+8]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='m'&&lin[i+4]=='a'&&lin[i+5]=='y')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='u'&&lin[i+5]=='n'&&lin[i+6]=='e')&&(lin[i+7]=='/'||lin[i+7]=='.'||lin[i+7]=='-'||lin[i+7]==','||lin[i+7]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='u'&&lin[i+5]=='l'&&lin[i+6]=='y')&&(lin[i+7]=='/'||lin[i+7]=='.'||lin[i+7]=='-'||lin[i+7]==','||lin[i+7]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='a'&&lin[i+4]=='u'&&lin[i+5]=='g'&&lin[i+6]=='u'&&lin[i+7]=='s'&&lin[i+8]=='t')&&(lin[i+9]=='/'||lin[i+9]=='.'||lin[i+9]=='-'||lin[i+9]==','||lin[i+9]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='s'&&lin[i+4]=='e'&&lin[i+5]=='p'&&lin[i+6]=='t'&&lin[i+7]=='e'&&lin[i+8]=='m'&&lin[i+9]=='b'&&lin[i+10]=='e'||lin[i+11]=='r')&&(lin[i+12]=='-'||lin[i+12]==','||lin[i+12]==' '||lin[i+12]=='/'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='o'&&lin[i+4]=='c'&&lin[i+5]=='t'&&lin[i+6]=='o'&&lin[i+7]=='b'&&lin[i+8]=='e'&&lin[i+9]=='r')&&(lin[i+10]=='/'||lin[i+10]=='.'||lin[i+10]=='-'||lin[i+10]==','||lin[i+10]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='n'&&lin[i+4]=='o'&&lin[i+5]=='v'&&lin[i+6]=='e'&&lin[i+7]=='m'&&lin[i+8]=='b'&&lin[i+9]=='e'&&lin[i+10]=='r')&&(lin[i+11]=='.'||lin[i+11]=='-'||lin[i+11]==','||lin[i+11]==' '||lin[i+11]=='/'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='d'&&lin[i+4]=='e'&&lin[i+5]=='c'&&lin[i+6]=='e'&&lin[i+7]=='m'&&lin[i+8]=='b'&&lin[i+9]=='e'&&lin[i+10]=='r')&&(lin[i+11]=='.'||lin[i+11]=='-'||lin[i+11]==','||lin[i+11]==' '||lin[i+11]=='/'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='a'&&lin[i+5]=='n')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=50&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='f'&&lin[i+4]=='e'&&lin[i+5]=='b')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='m'&&lin[i+4]=='a'&&lin[i+5]=='r')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='a'&&lin[i+4]=='p'&&lin[i+5]=='r')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='m'&&lin[i+4]=='a'&&lin[i+5]=='y')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='u'&&lin[i+5]=='n')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='j'&&lin[i+4]=='u'&&lin[i+5]=='l')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='a'&&lin[i+4]=='u'&&lin[i+5]=='g')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='s'&&lin[i+4]=='e'&&lin[i+5]=='p')&&(lin[i+6]=='-'||lin[i+6]=='.'||lin[i+6]==' '||lin[i+6]=='/'||lin[i+6]==','))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='s'&&lin[i+4]=='e'&&lin[i+5]=='p'&&lin[i+6]=='t')&&(lin[i+7]=='.'||lin[i+7]==' '||lin[i+7]=='/'||lin[i+7]=='-'||lin[i+6]==','))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='o'&&lin[i+4]=='c'&&lin[i+5]=='t')&&(lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='n'&&lin[i+4]=='o'&&lin[i+5]=='v')&&(lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '||lin[i+6]=='/'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&(lin[i+2]=='/'||lin[i+2]=='.'||lin[i+2]=='-'||lin[i+2]==','||lin[i+2]==' ')&&(lin[i+3]=='d'&&lin[i+4]=='e'&&lin[i+5]=='c')&&(lin[i+6]=='.'||lin[i+6]=='-'||lin[i+6]==','||lin[i+6]==' '||lin[i+6]=='/'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='a'&&lin[i+10]=='n'&&lin[i+11]=='u'&&lin[i+12]=='a'&&lin[i+13]=='r'&&lin[i+14]=='y'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='f'&&lin[i+9]=='e'&&lin[i+10]=='b'&&lin[i+11]=='r'&&lin[i+12]=='u'&&lin[i+13]=='a'&&lin[i+14]=='r'&&lin[i+15]=='y'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='m'&&lin[i+9]=='a'&&lin[i+10]=='r'&&lin[i+11]=='c'&&lin[i+12]=='h'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='a'&&lin[i+9]=='p'&&lin[i+10]=='r'&&lin[i+11]=='i'&&lin[i+12]=='l'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='m'&&lin[i+9]=='a'&&lin[i+10]=='y'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='u'&&lin[i+10]=='n'&&lin[i+11]=='e'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='u'&&lin[i+10]=='l'&&lin[i+11]=='y'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='a'&&lin[i+9]=='u'&&lin[i+10]=='g'&&lin[i+11]=='u'&&lin[i+12]=='s'&&lin[i+13]=='t'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='s'&&lin[i+9]=='e'&&lin[i+10]=='p'&&lin[i+11]=='t'&&lin[i+12]=='e'&&lin[i+13]=='m'&&lin[i+14]=='b'&&lin[i+15]=='e'&&lin[i+16]=='r'))
                 dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='o'&&lin[i+9]=='c'&&lin[i+10]=='t'&&lin[i+11]=='o'&&lin[i+12]=='b'&&lin[i+13]=='e'&&lin[i+14]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='n'&&lin[i+9]=='o'&&lin[i+10]=='v'&&lin[i+11]=='e'&&lin[i+12]=='m'&&lin[i+13]=='b'&&lin[i+14]=='e'&&lin[i+15]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='d'&&lin[i+9]=='e'&&lin[i+10]=='c'&&lin[i+11]=='e'&&lin[i+12]=='m'&&lin[i+13]=='b'&&lin[i+14]=='e'&&lin[i+15]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='a'&&lin[i+10]=='n'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='f'&&lin[i+9]=='e'&&lin[i+10]=='b'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='m'&&lin[i+9]=='a'&&lin[i+10]=='r'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='a'&&lin[i+9]=='p'&&lin[i+10]=='r'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='m'&&lin[i+9]=='a'&&lin[i+10]=='y'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='u'&&lin[i+10]=='n'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='j'&&lin[i+9]=='u'&&lin[i+10]=='l'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='a'&&lin[i+9]=='u'&&lin[i+10]=='g'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='s'&&lin[i+9]=='e'&&lin[i+10]=='p'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='s'&&lin[i+9]=='e'&&lin[i+10]=='p'&&lin[i+11]=='t'))
                 dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='o'&&lin[i+9]=='c'&&lin[i+10]=='t'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='n'&&lin[i+9]=='o'&&lin[i+10]=='v'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&lin[i+5]=='o'||lin[i+6]=='f'&&lin[i+7]==' '&&(lin[i+8]=='d'&&lin[i+9]=='e'&&lin[i+10]=='c'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='a'&&lin[i+7]=='n'&&lin[i+8]=='u'&&lin[i+9]=='a'&&lin[i+10]=='r'&&lin[i+11]=='y'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='f'&&lin[i+6]=='e'&&lin[i+7]=='b'&&lin[i+8]=='r'&&lin[i+9]=='u'&&lin[i+10]=='a'&&lin[i+11]=='r'&&lin[i+12]=='y'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='m'&&lin[i+6]=='a'&&lin[i+7]=='r'&&lin[i+8]=='c'&&lin[i+9]=='h'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='a'&&lin[i+6]=='p'&&lin[i+7]=='r'&&lin[i+8]=='i'&&lin[i+9]=='l'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='m'&&lin[i+6]=='a'&&lin[i+7]=='y'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='u'&&lin[i+7]=='n'&&lin[i+8]=='e'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='u'&&lin[i+7]=='l'&&lin[i+8]=='y'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='a'&&lin[i+6]=='u'&&lin[i+7]=='g'&&lin[i+8]=='u'&&lin[i+8]=='s'&&lin[i+10]=='t'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='s'&&lin[i+6]=='e'&&lin[i+7]=='p'&&lin[i+8]=='t'&&lin[i+9]=='e'&&lin[i+10]=='m'&&lin[i+11]=='b'&&lin[i+12]=='e'&&lin[i+13]=='r'))
                 dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='o'&&lin[i+6]=='c'&&lin[i+7]=='t'&&lin[i+8]=='o'&&lin[i+9]=='b'&&lin[i+10]=='e'&&lin[i+11]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='n'&&lin[i+6]=='o'&&lin[i+7]=='v'&&lin[i+8]=='e'&&lin[i+9]=='m'&&lin[i+10]=='b'&&lin[i+11]=='e'&&lin[i+12]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='d'&&lin[i+6]=='e'&&lin[i+7]=='c'&&lin[i+8]=='e'&&lin[i+9]=='m'&&lin[i+10]=='b'&&lin[i+11]=='e'&&lin[i+12]=='r'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='a'&&lin[i+7]=='n'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='f'&&lin[i+6]=='e'&&lin[i+7]=='b'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='m'&&lin[i+6]=='a'&&lin[i+7]=='r'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='a'&&lin[i+6]=='p'&&lin[i+7]=='r'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='m'&&lin[i+6]=='a'&&lin[i+7]=='y'))
                dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='u'&&lin[i+7]=='n'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='j'&&lin[i+6]=='u'&&lin[i+7]=='l'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='a'&&lin[i+6]=='u'&&lin[i+7]=='g'))
                 dt++;
        else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='s'&&lin[i+6]=='e'&&lin[i+7]=='p'))
                 dt++;
       else  if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='s'&&lin[i+6]=='e'&&lin[i+7]=='p'&&lin[i+8]=='t'))
                 dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='o'&&lin[i+6]=='c'&&lin[i+7]=='t'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='n'&&lin[i+6]=='o'&&lin[i+7]=='v'))
                dt++;
        else if((((int)lin[i])<=51&&((int)lin[i+1])<=57)&&lin[i+2]=='t'&&lin[i+3]=='h'&&lin[i+4]==' '&&(lin[i+5]=='d'&&lin[i+6]=='e'&&lin[i+7]=='c'))
                dt++;
        else if((lin[i]=='j'&&lin[i+1]=='a'&&lin[i+2]=='n'&&lin[i+3]=='u'&&lin[i+4]=='a'&&lin[i+5]=='r'&&lin[i+6]=='y')&&(lin[i+7]==' '||lin[i+7]=='/'||lin[i+7]=='.'||lin[i+7]=='-')&&(((int)lin[i+8])<=51&&((int)lin[i+9])<=57)&&lin[i+10]=='t'&&lin[i+11]=='h')
                dt++;
        else if((lin[i]=='f'&&lin[i+1]=='e'&&lin[i+2]=='b'&&lin[i+3]=='r'&&lin[i+4]=='u'&&lin[i+5]=='a'&&lin[i+6]=='r'&&lin[i+7]=='y')&&(lin[i+8]==' '||lin[i+8]=='/'||lin[i+8]=='.'||lin[i+8]=='-')&&(((int)lin[i+9])<=51&&((int)lin[i+10])<=57)&&lin[i+11]=='t'&&lin[i+12]=='h')
                dt++;
        else if((lin[i]=='m'&&lin[i+1]=='a'&&lin[i+2]=='r'&&lin[i+3]=='c'&&lin[i+4]=='h')&&(lin[i+5]==' '||lin[i+5]=='/'||lin[i+5]=='.'||lin[i+5]=='-')&&(((int)lin[i+6])<=51&&((int)lin[i+7])<=57)&&lin[i+8]=='t'&&lin[i+9]=='h')
                dt++;
        else if((lin[i]=='a'&&lin[i+1]=='p'&&lin[i+2]=='r'&&lin[i+3]=='i'&&lin[i+4]=='l')&&(lin[i+5]==' '||lin[i+5]=='/'||lin[i+5]=='.'||lin[i+5]=='-')&&(((int)lin[i+6])<=51&&((int)lin[i+7])<=57)&&lin[i+8]=='t'&&lin[i+9]=='h')
                dt++;
        else if((lin[i]=='m'&&lin[i+1]=='a'&&lin[i+2]=='y')&&(lin[i+3]==' '||lin[i+3]=='/'||lin[i+3]=='.'||lin[i+3]=='-')&&(((int)lin[i+4])<=51&&((int)lin[i+5])<=57)&&lin[i+6]=='t'&&lin[i+7]=='h')
                dt++;
        else if((lin[i]=='j'&&lin[i+1]=='u'&&lin[i+2]=='n'&&lin[i+3]=='e')&&(lin[i+4]==' '||lin[i+4]=='/'||lin[i+4]=='.'||lin[i+4]=='-')&&(((int)lin[i+5])<=51&&((int)lin[i+6])<=57)&&lin[i+7]=='t'&&lin[i+8]=='h')
                dt++;
        else if((lin[i]=='j'&&lin[i+1]=='u'&&lin[i+2]=='l'&&lin[i+3]=='y')&&(lin[i+4]==' '||lin[i+4]=='/'||lin[i+4]=='.'||lin[i+4]=='-')&&(((int)lin[i+5])<=51&&((int)lin[i+6])<=57)&&lin[i+7]=='t'&&lin[i+8]=='h')
                dt++;
        else if((lin[i]=='a'&&lin[i+1]=='u'&&lin[i+2]=='g'&&lin[i+3]=='u'&&lin[i+4]=='s'&&lin[i+5]=='t')&&(lin[i+6]==' '||lin[i+6]=='/'||lin[i+6]=='.'||lin[i+6]=='-')&&(((int)lin[i+7])<=51&&((int)lin[i+8])<=57)&&lin[i+9]=='t'&&lin[i+10]=='h')
                dt++;
        else if((lin[i]=='s'&&lin[i+1]=='e'&&lin[i+2]=='p'&&lin[i+3]=='t'&&lin[i+4]=='e'&&lin[i+5]=='m'&&lin[i+6]=='b'&&lin[i+7]=='e'&&lin[i+8]=='r')&&(lin[i+9]==' '||lin[i+9]=='/'||lin[i+9]=='.'||lin[i+9]=='-')&&(((int)lin[i+10])<=51&&((int)lin[i+11])<=57)&&lin[i+12]=='t'&&lin[i+13]=='h')
                dt++;
        else if((lin[i]=='o'&&lin[i+1]=='c'&&lin[i+2]=='t'&&lin[i+3]=='o'&&lin[i+4]=='b'&&lin[i+5]=='e'&&lin[i+6]=='r')&&(lin[i+7]==' '||lin[i+7]=='/'||lin[i+7]=='.'||lin[i+7]=='-')&&(((int)lin[i+8])<=51&&((int)lin[i+9])<=57)&&lin[i+10]=='t'&&lin[i+11]=='h')
                dt++;
        else if((lin[i]=='n'&&lin[i+1]=='o'&&lin[i+2]=='v'&&lin[i+3]=='e'&&lin[i+4]=='m'&&lin[i+5]=='b'&&lin[i+6]=='e'&&lin[i+7]=='r')&&(lin[i+8]==' '||lin[i+8]=='/'||lin[i+8]=='.'||lin[i+8]=='-')&&(((int)lin[i+9])<=51&&((int)lin[i+10])<=57)&&lin[i+11]=='t'&&lin[i+12]=='h')
                dt++;
        else if((lin[i]=='d'&&lin[i+1]=='e'&&lin[i+2]=='c'&&lin[i+3]=='e'&&lin[i+4]=='m'&&lin[i+5]=='b'&&lin[i+6]=='e'&&lin[i+7]=='r')&&(lin[i+8]==' '||lin[i+8]=='/'||lin[i+8]=='.'||lin[i+8]=='-')&&(((int)lin[i+9])<=51&&((int)lin[i+10])<=57)&&lin[i+11]=='t'&&lin[i+12]=='h')
                dt++;
        i++;
    }
    i=0;
    while(lin[z]!='\0')
    {
        tmp[i]=lin[z];
        if(tmp[i]==' ')
        {
            tmp[i]='\0';
            if(((tmp[i-3]=='.')&&(tmp[i-6]=='.'))||((tmp[i-4]=='.')&&(tmp[i-2]=='.'))||((tmp[i-2]=='.')&&(tmp[i-5]=='.'))||((tmp[i-5]=='.')&&(tmp[i-7]=='.'))||((tmp[i-3]=='.')&&(tmp[i-5]=='.'))||((tmp[i-5]=='.')&&(tmp[i-8]=='.')))
                dt++;
            i=-1;
        }
        z++;
        i++;
    }
    i=0;
    while(lin[i]!='\0')
    {
        t[j]=lin[i];
        if(t[j]==' '||t[j]=='\n'||t[j]=='.'||t[j]==',')
        {
            t[j]='\0';
            if(strcmp(t,"a")==0)
                ac++;
            else if(strcmp(t,"an")==0)
                anc++;
            else if(strcmp(t,"the")==0)
                thec++;
            else if(((t[j-3]=='/')&&(t[j-6]=='/'))||((t[j-3]=='-')&&(t[j-6]=='-'))||((t[j-3]==':')&&(t[j-6]==':'))||((t[j-4]=='/')&&(t[j-2]=='/'))||((t[j-4]=='-')&&(t[j-2]=='-'))||((t[j-4]==':')&&(t[j-2]==':'))||((t[j-2]=='/')&&(t[j-5]=='/'))||((t[j-2]=='-')&&(t[j-5]=='-'))||((t[j-2]==':')&&(t[j-5]==':'))||((t[j-5]=='/')&&(t[j-7]=='/'))||((t[j-5]=='-')&&(t[j-7]=='-'))||((t[j-5]==':')&&(t[j-7]==':'))||((t[j-3]=='/')&&(t[j-5]=='/'))||((t[j-3]=='-')&&(t[j-5]=='-'))||((t[j-3]==':')&&(t[j-5]==':'))||((t[j-5]==':')&&(t[j-8]==':'))||((t[j-5]=='/')&&(t[j-8]=='/'))||((t[j-5]=='-')&&(t[j-8]=='-')))
                dt++;
            j=-1;
        }
        i++;
        j++;
    }
    printf("\n%d,%d,%d,%d",ac,anc,thec,dt);
}
