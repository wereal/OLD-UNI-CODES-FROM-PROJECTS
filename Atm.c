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
printf("\tÐÅÉÑÁÌÁÔÉÊÏ ÁÔÌ ÔÌÇÌÁÔÏÓ ÐËÇÑÏÖÏÑÉÊÇÓ ");
printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
printf("\n 1 ÅÍÇÌÅÑÙÓÇ\t\t\t\t 3 ÁÍÁËÇØÇ");
printf("\n 2 ÌÅÔÁÖÏÑÁ\t\t\t\t 4 ÊÁÔÁÈÅÓÇ");
	
printf("\n    ÐÁÑÁÊÁËÙ ÅÐÉËÅÎÔÅ ÔÇÍ ÔÉ ÅÐÉËÏÃÇ ÈÅËÅÔÅ (1-4):");
scanf("%d",&epi);

two:
switch(epi)
{

case 1  
	 if (calc!=1&&calc<4)
	 {
	 printf("ÄÙÓÔÅ ÔÏÍ ÁÑÉÈÌÏ ËÏÃÁÑÉÁÓÌÏÕ ÓÁÓ ");
     scanf("%d",&k); 
     if (k<=2000&&k<=3000)  
 	 {
        printf("ÄÙÓÔÅ ÔÏ ÐÉÍ ÓÁÓ:");
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
	     printf("Å×ÅÔÅ ÁÊÏÌÁ %d ÐÑÏÓÐÁÈÅÉÅÓ",calc);
	     }
	}else if (calc=1)
	calc=3;
	 goto start;
}
here1:
{
	printf("Ï ËÏÃÁÑÉÁÓÌÏÓ ÓÁÓ Å×ÅÉ %d ÄÉÁÈÅÓÇÌÏ ÕÐÏËÏÉÐÏ",Amounts[k]);
}
system("pause");
    system("cls");
    goto start;
    
case 2

 	if (calc!=1)
	 {
	 printf("ÄÙÓÔÅ ÔÏÍ ÁÑÉÈÌÏ ËÏÃÁÑÉÁÓÌÏÕ ÓÁÓ ");
     scanf("%d",&k); 
     if (k<=2000&&k<=3000)  
 	 {
        printf("ÄÙÓÔÅ ÔÏ ÐÉÍ ÓÁÓ:");
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
	     printf("Å×ÅÔÅ ÁÊÏÌÁ %d ÐÑÏÓÐÁÈÅÉÅÓ",calc);
	     }
	}else if (calc=1)
	 calc=3;
	 goto start;
}
here2:
if (f=1)
{

	printf("\nÔÏ ÕÐÏËÏÉÐÏ ÔÏÕ ËÏÃÁÑÉÁÓÌÏÕ ÓÁÓ ÅÉÍÁÉ :%d",Amounts[k]);
	
	printf("\nÐËÇÊÔÑÏËÏÃÇÓÔÅ ÔÏ ÁÑÉÈÌÏ ËÏÃÁÑÉÁÓÌÏÕ ÐÏÕ ÈÅËÅÔÅ ÍÁ ÃÉÍÅÉ Ç ÌÅÔÁÖÏÑÁ");
	scanf("%d",&logmet);
	
	edw:
		
	printf("\nÐËÇÊÔÑÏËÏÃÇÓÔÅ ÔÏ ÐÏÓÏ ÐÏÕ ÈÅËÅÔÅ ÍÁ ÌÅÔÁÖÅÑÅÔÅ,ÅÙÓ ÊÁÉ 1 ÄÅÊÁÄÉÊÏ ØÇÖÉÏ:");
    scanf("%f",&met);
    
	if (posomet<=Amounts[k]){
	Amounts[logmet]=Amounts[logmet]+posomet;
	}
	else printf("ÔÏ ÐÏÓÏ ÐÏÕ ÈÅËÅÔÅ ÍÁ ÌÅÔÁÖÅÑÅÔÅ ÅÉÍÁÉ ÌÅÃÁËÏ,ÄÏÊÉÌÁÓÔÅ ÁËËÏ ÐÏÓÏ ");
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
	 printf("ÄÙÓÔÅ ÔÏÍ ÁÑÉÈÌÏ ËÏÃÁÑÉÁÓÌÏÕ ÓÁÓ ");
     scanf("%d",&k); 
     if (k=<2000&&k<=3000)  
 	 {
        printf("ÄÙÓÔÅ ÔÏ ÐÉÍ ÓÁÓ:");
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
	     printf("Å×ÅÔÅ ÁÊÏÌÁ %d ÐÑÏÓÐÁÈÅÉÅÓ",calc);
	     }
	}else if (calc=1)
	calc=3;
	 goto start;
}
here3:
if (f=1)
{
	printf("Ï ËÏÃÁÑÉÁÓÌÏÓ ÓÁÓ Å×ÅÉ %d ÄÉÁÈÅÓÇÌÏ ÕÐÏËÏÉÐÏ",Amounts[k]);
}
    printf("ÐËÇÊÔÑÏËÏÃÉÓÔÅ ÔÏ ÐÏÓÏ ÐÏÕ ÈÅËÅÔÅ ÍÁ ÊÁÍÅÔÅ ÁÍÁËÇØÇ:");
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
	printf ("\tTO ÅËÁ×ÉÓÔÏ ÅÉÍÁÉ 20 ÅÕÑÏ !!!");

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
		printf("\t ËÕÐÏÕÌÁÓÔÅ ÄÅÍ ÌÐÏÑÏÕÌÅ ÍÁ ÓÁÓ ÅÎÕÐÇÑÅÔÇÓÏÕÌÅ ÃÉÁ ÁÕÔÏ ÔÏ ÐÏÓÏ\n");
		system("pause");
	}

	system("pause");
    system("cls");
    goto start; 

case 4:

    {
     printf("ÄÙÓÔÅ ÔÏÍ ÁÑÉÈÌÏ ËÏÃÁÑÉÁÓÌÏÕ ÓÔÏÍ ÏÐÏÉÏ ÈÁ ÃÉÍÅÉ Ç ÊÁÔÁÈÅÓÇ:");
     scanf("%d",&logkata);
     t:
	 printf("ÐËÇÊÔÑÏËÏÃÉÓÔÅ ÔÏ ÐÏÓÏ ÊÁÔÅÈÁÓÇÓ:");
     scanf("%d",&posokata);
     if (posokata<20)
	     {
     	printf("\nÔÏ ÐÏÓÏ ÊÁÔÁÈÅÓÅÉÓ ÐÑÅÐÅÉ ÍÁ ÅÉÍÁÉ ÔÏÕËÁ×ÉÓÔÏÍ ÁÐÏ 20 ÅÕÑÏ ÊÁÉ ÐÁÍÙ");
     	 goto t;
		  }
     	  printf("ÐÏÓÁ 50åõñá ÈÁ ÊÁÔÁÈÅÓÅÉÓ:");
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
   printf("\nÔá 20åõñá åéíáé %d êáé 50åõñá %d ïðïôå äåí ìðïñåéôå íá ôñïöïäùôçóåôå ôï ìç÷áíçìá ìå ðáñáðáíù ÷áñôïíïìçóìáôá ",euro_20,euro_50); 
   system("pause");
    system("cls");    
}
else if (F=0) 
goto start;
   
   
case 102  
:elenxos_stoixion_ipalilou();

    if(F=1)
   
    if ((euro_20==20)&&(euro_50==10)) printf("\n Ôï ìç÷áíçìá åéíáé ãåìáôï êáé ïé êáóåôåò äåí ìðïñïõí íá äå÷ôïõí áëëá ÷ñçìáôá ");
      
	 else if (euro_20<20&&euro_50==10)
	{
	temp20=20-euro_20;
    printf("Ç êáóåôá ìå ôá 50åõñá åéíáé ãåìáôç êáé ç êáóåôá ìå ôá 20åõñá ìðïñåé íá äå÷ôåé áêïìá %d ÷áñôïíïìçóìáôá äùóôå ôï ðïóï ìå ôï ïðïéï èåëåôå íá ôñïöïäùôçóåôå ôï ìç÷áíçìá ",temp20);
    scanf("%d",&temp3);
	euro_20=euro_20+temp3;
	temp3=temp3*0;
    }
	
	else if (euro_20==20&&euro_50<10){
    temp50=10-euro_50;
	printf("Ç êáóåôá ìå ôá 20åõñá åéíáé ãåìáôç êáé ç êáóåôá ìå ôá 50åõñá ìðïñåé íá äå÷ôåé áêïìá %d ÷áñôïíïìçóìáôá äùóôå ôï ðïóï ìå ôï ïðïéï èåëåôå íá ôñïöïäùôçóåôå ôï ìç÷áíçìá ",temp50);
	scanf("%d",temp4);
	euro_50=euro_50+temp4;
	temp4=temp4*0;
	}
	
	else if (euro_20<20&&euro_50){
    temp20=20-euro_20;
    temp50=10-euro_50;
    printf("\n Ç êáóåôá ìå ôá 20åõñï ìðïñåé íá äå÷ôåé áêïìá %d ÷áñôïíïìçóìáôá",temp20);
    scanf("%d",&temp1);
    euro_20=euro_20+temp1;
    temp1=temp1*0;
	printf("\n Ç êáóåôá ìå ôá 50åõñá ìðïñåé íá äå÷ôåé áêïìá %d ÷áñôïíïìçóìáôá",temp50);
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
    printf("Áõôç ç åðéëïãç èá êëåéóåé ïñéóôéêá ôï óõóôçìá");
    system("pause");
break;
    

return 0; 

}


int elenxos_stoixion_ipalilou()
{
  	int pass,F=0;
    char username[10]; 
    
    printf("ÄÙÓÔÅ ÌÅ ËÁÔÉÍÉÊÏÕÓ ×ÁÑÁÊÔÇÑÅÓ ÔÏ ÅÐÉÈÅÔÏ ÓÁÓ:");
    scanf("%s",username);
   
    if (strcmp(username,"IOSIFIDIS")==0)
	{
        printf("ÄÙÓÔÅ ÔÏ ÐÉÍ ÓÁÓ:");
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




