#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()

{
int convertDecimalToOctal();
int elenxos_stoixion();
int pin,k,f,mistake; 
int epi;
int pass,F;
char username[10]; 
int temp20,temp50,temp1,temp2,temp3,temp4;
int i,Accounts[1000],Amounts[1000];
float met;
int logmet,posomet;
int euro_50 = 10, euro_20 = 20;
int posoanal, s;
int div50, mod50, div20, mod20;
int logkata,sam20,posokata,posokata50;
int calc;
//start:
//dhmioyrgia logariasmwn kai poswn
//arxika posa me 20eyra kai 50eyra 
euro_50= euro_50 * 50;
euro_20= euro_20 * 20;
s = (euro_50 * 50) + (euro_20 *20);

for(i=0;i<1000;i++)  
{
  Accounts[i]=i+2000;
  Amounts[i]=(5000.0-100.0)*((float)rand()/RAND_MAX)+100.0;
//printf(" %.1f\n",Am[i] );
//printf(" %d",Ac[i]);
}

start:	
calc=3;
printf("\t����������� ��� �������� ������������ ");
printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
printf("\n 1 ���������\t\t\t\t 3 �������");
printf("\n 2 ��������\t\t\t\t 4 ��������");
	
printf("\n    �������� �������� ��� �� ������� ������ (1-4):");
scanf("%d",&epi);

two:
switch(epi)
{

case 1  
	 if (calc!=1&&calc<4)
	 {
	 printf("����� ��� ������ ����������� ��� ");
     scanf("%d",&k); 
     if (k<=2000&&k<=3000)  
 	 {
        printf("����� �� ��� ���:");
        scanf("%d",&pin);
	    if (pin==convertDecimalToOctal())
		 {
		 f=1;
		 return 1;
	     }
	     if (f=1)
	     {
	     calc=3;
		 goto here1;
		 }
	     else if (f!=1)
	     {
	     calc=calc-1;
	     printf("����� ����� %d �����������",calc);
	     }
	}else if (calc=1)
	calc=3;
	 goto start;
}
here1:
{
	printf("� ����������� ��� ���� %d ��������� ��������",Amounts[k]);
}
system("pause");
    system("cls");
    goto start;
    
case 2

 	if (calc!=1)
	 {
	 printf("����� ��� ������ ����������� ��� ");
     scanf("%d",&k); 
     if (k<=2000&&k<=3000)  
 	 {
        printf("����� �� ��� ���:");
        scanf("%d",&pin);
	    if (pin==convertDecimalToOctal())
		 {
		 f=1;
		 return 1;
	     }
	     if (f=1)
	     {
	     calc=3;
		 goto here2;
		 }
	     else if (f!=1)
	     {
	     calc=calc-1;
	     printf("����� ����� %d �����������",calc);
	     }
	}else if (calc=1)
	 calc=3;
	 goto start;
}
here2:
if (f=1)
{

	printf("\n�� �������� ��� ����������� ��� ����� :%d",Amounts[k]);
	
	printf("\n�������������� �� ������ ����������� ��� ������ �� ����� � ��������");
	scanf("%d",&logmet);
	
	edw:
		
	printf("\n�������������� �� ���� ��� ������ �� ����������,��� ��� 1 �������� �����:");
    scanf("%f",&met);
    
	if (posomet<=Amounts[k]){
	Amounts[logmet]=Amounts[logmet]+posomet;
	}
	else printf("�� ���� ��� ������ �� ���������� ����� ������,��������� ���� ���� ");
	goto edw;
}

}
}
 system("pause");
    system("cls");
    goto start; 

case 3
	 if (calc!=1)
	 {
	 printf("����� ��� ������ ����������� ��� ");
     scanf("%d",&k); 
     if (k=<2000&&k<=3000)  
 	 {
        printf("����� �� ��� ���:");
        scanf("%d",&pin);
	    if (pin==convertDecimalToOctal())
		 {
		 f=1;
		 return 1;
	     }
	     if (f=1)
	     {
	     calc=3;
		 goto here3;
		 }
	     else if (f!=1)
	     {
	     calc=calc-1;
	     printf("����� ����� %d �����������",calc);
	     }
	}else if (calc=1)
	calc=3;
	 goto start;
}
here3:
if (f=1)
{
	printf("� ����������� ��� ���� %d ��������� ��������",Amounts[k]);
}
    printf("�������������� �� ���� ��� ������ �� ������ �������:");
    scanf("%d", &posoanal);
    if (posoanal<=Amounts[k])
    {Amounts[k]=Amounts[k]- posoanal;
	}
div50 = posoanal / 50;
mod50 = posoanal % 50;
div20 = posoanal / 20;
mod20 = posoanal % 20;

if (posoanal % 10 != 0){
	goto n;
}
if (posoanal > s)
{
		goto n;
	}
if (posoanal < 20){
	printf ("\tTO �������� ����� 20 ���� !!!");

}
else {
	if ((div50 >= 1) && (euro_50 > 0)){
		if (mod50 == 0){
			euro_50 = euro_50 - div50;
			if (euro_50 < 0){
				euro_50 = 0;
				if (posoanal > 500){
					euro_20 = euro_20 - (posoanal - 500) / 20;
				}
			}
		}
		if (mod50 == 10){
			euro_50 = euro_50 - div50 + 1;
			euro_20 = euro_20 - 3;
			if (euro_50 < 0){
				euro_50 = 0;
				euro_20 = euro_20 - (posoanal - 500) / 20;
			}
			if (euro_20 < 0){
				euro_20 = 0;
				goto n;
			} 
		}
		if (mod50 == 20){
			euro_50 = euro_50 - div50;
			euro_20 = euro_20 - 1;
			if (euro_50 < 0){
				euro_50 = 0;
				goto n;
			}
			if (euro_20 < 0){
				euro_20 = 0;
				goto n;
			} 
		}
		if (mod50 == 30){
			euro_50 = euro_50 - div50 + 1;
			euro_20 = euro_20 - 4;
			if (euro_50 < 0){
				euro_50 = 0;
				euro_20 = euro_20 - (posoanal - 500) / 20;
			}
			if (euro_20 < 0){
				euro_20 = 0;
				goto n;
			} 
		}
		if (mod50 == 40){
			euro_50 = euro_50 - div50;
			euro_20 = euro_20 - 2;
			if (euro_50 < 0){
				euro_50 = 0;
				goto n;
			}
			if (euro_20 < 0){
				euro_20 = 0;
				goto n;
			} 
		}
	}
	else if (div20 >= 1){
			if (mod20 == 0){
				euro_20 = euro_20 - div20;
				if (euro_20 < 0){
					euro_20 = 0;
					goto n;
				} 
			}
			if (mod20 == 10){
				goto n;
			}
		}
	if ((div50 == 0) && (div20 == 0)){
		n:
		printf("\t ���������� ��� �������� �� ��� �������������� ��� ���� �� ����\n");
		system("pause");
	}

	system("pause");
    system("cls");
    goto start; 

case 4:

    {
     printf("����� ��� ������ ����������� ���� ����� �� ����� � ��������:");
     scanf("%d",&logkata);
     t:
	 printf("�������������� �� ���� ���������:");
     scanf("%d",&posokata);
     if (posokata<20)
	     {
     	printf("\n�� ���� ���������� ������ �� ����� ����������� ��� 20 ���� ��� ����");
     	 goto t;
		  }
     	  printf("���� 50���� �� ����������:");
     	  scanf("%d",&posokata50);
         Amounts[logkata]=Amounts[logkata]+posokata50;
	     euro_50-euro_50+posokata50;
	     sam20=posokata-(posokata50*10);
         euro_20=euro_20+(sam20/20);
         
    }
         system("pause");
     system("cls");
     goto start; 
         
	
	


case 101
:elenxos_stoixion_ipalilou();
  
   if(F=1)
   {
   printf("\n�� 20���� ����� %d ��� 50���� %d ����� ��� �������� �� ������������� �� �������� �� �������� �������������� ",euro_20,euro_50); 
   system("pause");
    system("cls");    
}
else if (F=0) 
goto start;
   
   
case 102  
:elenxos_stoixion_ipalilou();

    if(F=1)
   
    if ((euro_20==20)&&(euro_50==10)) printf("\n �� �������� ����� ������ ��� �� ������� ��� ������� �� ������� ���� ������� ");
      
	 else if (euro_20<20&&euro_50==10)
	{
	temp20=20-euro_20;
    printf("� ������ �� �� 50���� ����� ������ ��� � ������ �� �� 20���� ������ �� ������ ����� %d �������������� ����� �� ���� �� �� ����� ������ �� ������������� �� �������� ",temp20);
    scanf("%d",&temp3);
	euro_20=euro_20+temp3;
	temp3=temp3*0;
    }
	
	else if (euro_20==20&&euro_50<10){
    temp50=10-euro_50;
	printf("� ������ �� �� 20���� ����� ������ ��� � ������ �� �� 50���� ������ �� ������ ����� %d �������������� ����� �� ���� �� �� ����� ������ �� ������������� �� �������� ",temp50);
	scanf("%d",temp4);
	euro_50=euro_50+temp4;
	temp4=temp4*0;
	}
	
	else if (euro_20<20&&euro_50){
    temp20=20-euro_20;
    temp50=10-euro_50;
    printf("\n � ������ �� �� 20���� ������ �� ������ ����� %d ��������������",temp20);
    scanf("%d",&temp1);
    euro_20=euro_20+temp1;
    temp1=temp1*0;
	printf("\n � ������ �� �� 50���� ������ �� ������ ����� %d ��������������",temp50);
	scanf("%d",&temp2);
	euro_50=euro_50+temp2;
	temp2=temp2*0;
    }
    
system("pause");
    system("cls");
    goto start;
    
case 103
:elenxos_stoixion_ipalilou();
 
    if(F=1)
    printf("���� � ������� �� ������� �������� �� �������");
    system("pause");
break;
    

return 0; 

}


int elenxos_stoixion_ipalilou()
{
  	int pass,F=0;
    char username[10]; 
    
    printf("����� �� ���������� ���������� �� ������� ���:");
    scanf("%s",username);
   
    if (strcmp(username,"IOSIFIDIS")==0)
	{
        printf("����� �� ��� ���:");
        scanf("%d",&pass);

        if (pass==4061) 
		F=1;
		return 1;
		}
   return 0;}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}




