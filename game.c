#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<Time.h>

int main(){
	srand(time(NULL));
	int ran=rand()%10;
	char nam[40];
	int money,opt,opt2,yn,ln,a,account;
	printf("Sir/Maam Enter Your Name :\n");
	gets(nam);
	printf("Enter Your Money : $\n");
	scanf("%d",&money);
	printf("\n\nMr/Ms %s You Have : $%d",nam,money);
	printf("\n\nEnter How much $ do you want Bet :");
	scanf("%d",&opt);
	if(opt>=money){
		account= money -opt;
		printf("\n\nYou Have $%d in your Account !",account);
		printf("\n\nEnter 1 For Play 0 for Exit :");
		scanf("%d",&yn);
		
		if(yn==1){
			
		printf("\n\nChoose a Lackey Number for You :");
		scanf("%d",&ln);
		do{
		if(ln==ran && account>=0){
			account=account+(opt*2);
			printf("\nCongratulation !");
			printf("\n You win The Game Choosing %d Lackey number !",ran);
			printf("\nYou Have %d Money !",account);
		}
		else{
			account = account-opt;
			printf("\nsorry Try Again !");
			printf("\nLackey Number was %d !",ran);
			printf("\nYou Have %d Money !",account);	
		}
		printf("Do You want Play Again [Enter 1 for Yes 0 For NO] :");
		scanf("%d",&opt2);
		}while(opt2==1);
	}
		else{
			printf("You Can Exit Now Mr/Ms. %s",nam);
		}
	}
	else{
		printf("Mr/Ms %s You Have Not Enough Money !",nam);
	}
	return 0;
}
