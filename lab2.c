//Melanie Borgeest Lab 2 
//ICSI 333
#include <stdlib.h>
#include <stdio.h>
int main(void){
	int x;
	printf("Enter a positive integer between 0 and 99\n"); //Prompt user for input 
	scanf("%d", &x);
	
	if((x<0)||(x>99)){ //Error checking to see if input is between 0 and 99 cents 
		exit(0);
	}else{
	
	if((x<5)&&(x>=0))
		printf("Pennies: %d\n", x);
		
	if(x==5)
		printf("Nickels: 1\n");
	if((x>5)&&(x<10)){
		printf("Pennies: %d\n", (x-5));
		printf("Nickels: 1\n");
	}
	
	if(x==10)
		printf("Dimes: 1\n");
	if((x>10)&&(x<15)){
		printf("Pennies: %d\n", (x-10));
		printf("Dimes: 1\n");
	}
	
	if(x==15){
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
	}
	if((x>15)&&(x<20)){
		printf("Pennies: %d\n", (x-15));
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
	}
	
	if(x==20)
		printf("Dimes: 2\n");
	if((x>20)&&(x<25)){
		printf("Pennies: %d\n", (x-20));
		printf("Dimes: 2\n");
	}
	
	if(x==25)
		printf("Quarters: 1\n");
	if((x>25)&&(x<30)){
		printf("Pennies: %d\n", (x-25));
		printf("Quarters: 1\n");
	}
	
	if(x==30){
		printf("Nickels: 1\n");
		printf("Quarters: 1\n");
	}
	if((x>30)&&(x<35)){
		printf("Pennies: %d\n", (x-30));
		printf("Nickels: 1\n");
		printf("Quarters: 1\n");
	}
	
	if(x==35){
		printf("Dimes: 1\n");
		printf("Quarters: 1\n");
	}
	if((x>35)&&(x<40)){
		printf("Pennies: %d\n", (x-35));
		printf("Dimes: 1\n");
		printf("Quarters: 1\n");
	}
	
	if(x==40){
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 1\n");
	}
	if((x>40)&&(x<45)){
		printf("Pennies: %d\n", (x-40));
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 1\n");
	}
	
	if(x==45){
		printf("Dimes: 2\n");
		printf("Quarters: 1\n");
	}
	if((x>45)&&(x<50)){
		printf("Pennies: %d\n", (x-45));
		printf("Dimes: 2\n");
		printf("Quarters: 1\n");
	}
	
	if(x==50)
		printf("Quarters: 2\n");
	if((x>50)&&(x<55)){
		printf("Pennies: %d\n", (x-50));
		printf("Quarters: 2\n");
	}
	
	if(x==55){
		printf("Nickels: 1\n");
		printf("Quarters: 2\n");
	}
	if((x>55)&&(x<60)){
		printf("Pennies: %d\n", (x-55));
		printf("Nickels: 1\n");
		printf("Quarters: 2\n");
	}
	
	if(x==60){
		printf("Dimes: 1\n");
		printf("Quarters: 2\n");
	}
	if((x>60)&&(x<65)){
		printf("Pennies: %d\n", (x-60));
		printf("Dimes: 1\n");
		printf("Quarters: 2\n");
	}
	
	if(x==65){
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 2\n");
	}
	if((x>65)&&(x<70)){
		printf("Pennies: %d\n", (x-65));
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 2\n");
	}
	
	if(x==70){
		printf("Dimes: 2\n");
		printf("Quarters: 2\n");
	}
	if((x>70)&&(x<75)){
		printf("Pennies: %d\n", (x-70));
		printf("Dimes: 2\n");
		printf("Quarters: 2\n");
	}
	
	if(x==75)
		printf("Quarters: 3\n");
	if((x>75)&&(x<80)){
		printf("Pennies: %d\n", (x-75));
		printf("Quarters: 3\n");
	}
	
	if(x==80){
		printf("Nickels: 1\n");
		printf("Quarters: 3\n");
	}
	if((x>80)&&(x<85)){
		printf("Pennies: %d\n", (x-80));
		printf("Nickels: 1\n");
		printf("Quarters: 3\n");
	}
	
	if(x==85){
		printf("Dimes: 1\n");
		printf("Quarters: 3\n");
	}
	if((x>85)&&(x<90)){
		printf("Pennies: %d\n", (x-85));
		printf("Dimes: 1\n");
		printf("Quarters: 3\n");
	}
	
	if(x==90){
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 3\n");
	}
	if((x>90)&&(x<95)){
		printf("Pennies: %d\n", (x-90));
		printf("Nickels: 1\n");
		printf("Dimes: 1\n");
		printf("Quarters: 3\n");
	}
	
	if(x==95){
		printf("Dimes: 2\n");
		printf("Quarters: 3\n");
	}
	if((x>95)&&(x<=99)){
		printf("Pennies: %d\n", (x-95));
		printf("Dimes: 2\n");
		printf("Quarters: 3\n");
	}
	}
	
	return 0; //Exit program 
}