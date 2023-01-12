#include <stdio.h>
#include <stdlib.h>
#define Val 50 
#define count 2400


struct student {
  int AEM;
  float grades;
};

int i,j,sum,temp=0,bima;
float Max,k;
typedef struct student ST;
ST array[Val];


void RandomNumbers(void);
void AEM(void);
void rbinary(int ar,int stage);
void maxinum(int ar,int k);


int main(void){
int num,bima=1;

AEM();
RandomNumbers();
printf("Ğëçêôñïëüãçóå ôï ÁÅÌ ğïõ áíáæçôåßò");
scanf ("%d",&num);
rbinary(num,bima);
printf("\n\nĞËÇÊÔÑÏËÏÃÇÓÔÅ ÔÏ ÁÅÌ ÃÉÁ ÍÁ ÅÌÖÁÍÉÓÅÉ ÔÏÕÓ ÖÏÉÔÇÔÅÓ ÌÅ ÌÅÃÁËÕÔÅÑÏ ÂÁÈÌÏ:");
scanf("%d",&num);
bima =2;
rbinary(num,bima);
temp=1;
system("pause");

return 0;	
} 

void AEM(void)
{
for (i=2000; i<=count; i++)
  {
	for (j=2; j<=i; j++)
	 {
	 if (i%j==0) break;
   	 }
	if(i==j)
	{
	 if (sum==50) break;
	  else
	    {
	    	array[sum] .AEM=i;
		    sum++;
     	}	
	}
  }  
}	

void RandomNumbers(void)
{
	srand(4061);
     	for(i=0; i<50; i++ )
     	{
     	array[i] .grades= rand() % 100 + 1;
     	array[i] .grades=array[i].grades/10;	
     	}
}

void rbinary (int ar,int stage)
{
	int middle,eos=49,apo=0;
	sum=0;
	while(apo<=eos){
	middle =(apo+eos)/2;
	if (ar<array[middle].AEM)	
{
	if(stage==1){
	if(temp==0) printf("\n\nÔÏ ÁÅÌ %d ÅÉÍÁÉ ÌÉÊÑÏÔÅÑÏ %d",ar,array[middle].AEM);
    }
	eos =middle-1;
	sum++;	
}
	else if (ar>array[middle].AEM){
	if(stage==1){	 
	if (temp==0) printf("\n\nÔÏ ÁÅÌ %d ÅÉÍÁÉ ÌÅÃÁËÕÔÅÑÏ ÁĞÏ ÔÏ %d",ar,array[middle].AEM);	
}
	apo=middle+1;
	sum++;
	}
	else {
		if(stage==1){
    if (temp==0) printf("\n\nÏ ÖÏÉÔÇÔÇÓ ÌÅ ÁÅÌ%d Å×ÅÉ ÂÁÈÌÏ %.1f\n\n\n",ar,array [middle] .grades);
}
    else temp=2;
    break;
	}
}
	if(stage==1){
	if (apo>eos) printf ("\n\nÄåí âñåèçêå ï áñéèìïò %d \n\n" ,ar);
}
 if(stage==2)
  {
   maxinum(ar,middle);
  }
}

void maxinum(int ar,int k)
{
    for(i=0; i<50; i++)
    {
        if (array[i].grades>array [k] .grades)
        {
           printf("%d\t",array[i].AEM); //*printf("%d = %.1f ",array[i].AEM,array[i].grades);*
        }
    }
}
