#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    int p,pl1=0,pl2=0;
    
    printf("Welcome! Lets find out which element suits you the best.\n");
    printf("Please answer the following questions with 1 or 2. Let's start!'\n");
    printf("which one you prefer? stay at home(1) or go out(2)?");
    while (scanf("%d", &p) != 1 || (p != 1 && p != 2)) {
        printf("Invalid input. Please enter 1 for stay at home or 2 for go outside: ");
    }
    if (p==1){
    	printf("night or day?\n");
    	scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("sweet or salty food?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("buy food or cook?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("sleep or work out?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("beach or mountain?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("winter or summer?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("cold shower or didn't even touch water?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("help stranger or ignore?\n");
		scanf("%d",&p);
    	if (p=1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		printf("dog or cat?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl1=pl1+1;
		}
		else {
			pl1=pl1+2;
		}
		if (pl1>=9 && pl1<=12){
			printf("you are an airbender!You are an Extroverted, Gentle, Respectful, Swift, Quick-Thinker, Moveable person.");
		}
		else{
			printf("you are an earthbender. You are Rough, Slow, Sensitive, Stubborn, Patient.");
		}
		
    	
}
	else {
		printf("night or day?\n");
    	scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("sweet or salty food?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("buy food or cook?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("sleep or work out?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("beach or mountain?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("winter or summer?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("cold shower or didn't even touch water?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("help stranger or ignore?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		printf("dog or cat?\n");
		scanf("%d",&p);
    	if (p==1){
    		pl2=pl2+1;
		}
		else {
			pl2=pl2+2;
		}
		if (pl2>=14 && pl2<=16){
			printf("you are a firebender.You are Playful, Short-Tempered, Loyal, Determined.");
		}
		else{
			printf("your are a waterbender!You are Calm, Easy to Talk to, Happy with what you have, Flexible ");
	    }
		
		
	}
	
    
	return 0;
}

