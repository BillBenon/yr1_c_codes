#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <time.h>
//including agentInfo.h which contains agent info function
#include "agentInfo.h"
struct Receipt{
	int id;
	int customId;
	int agentID;
	char customFirstN[50];
	char customLastN[50];
	char agentFirstN[50];
	char agentLastN[50];
	int meter;
	int units;
	int totalToPay;
	char date[30];
};
struct Pric{
	int id;
	int categoryId;
	int price;
};
struct Info{
	int id;
	char firstName[100];
	char lastName[100];
	int meterNumber;
	int categoryId;
};
struct Customer{
	int id;
	char firstName[100];
	char lastName[100];
	int meterNumber;
	int categoryId;
	int units; 
};

/*main application! this contains main part of application 'mainApp()';
	!!!it is only accessed by loged in Users!!!!
	this function uses meter number, first name and last name of Users
*/
int mainApp(int agentId,char agentFirstName[40],char agentLastName[40]){
	srand(time(0)); 
	int randId,totalTopay;
	struct Info customerInfo[100];
	struct Pric pric[10];
	struct Receipt receipts[200];
	int b=0;
	FILE *custom;
	custom=fopen("storage/customers.txt","r");
	FILE *meters;
	meters=fopen("storage/meters.txt","r");
	int a;
	int i;
	struct Customer customer;
	printf("\n\n\t\t\tWELCOME to electricity BILLING APPLICATION!");
	printf("\n\t\t\t=============================================\n\n");
	printf("\t\t\tAgent names: %s %s\n\n",agentFirstName,agentLastName);
	printf("\t\t\t=============================\n");
	printf("\t\t\t|          MENU             |\n");
	printf("\t\t\t=============================\n");
	printf("\t\t\t| 1 = Sell electricity      |\n");
	printf("\t\t\t| 2 = view recent receipts  |\n");
	printf("\t\t\t| 3 = View account info     |\n");
	printf("\t\t\t| 4 = exit                  |\n");
	printf("\t\t\t=============================\n\n");
	int option;
	printf("\t\t\tEnter your option:");
	scanf("%d",&option);
	do{	
		
		switch(option){
			case 1:
				printf("\n\n\t\t\tEnter customer first name:");
				scanf("%s",customer.firstName);
				printf("\t\t\tEnter customer last name:");
				scanf("%s",customer.lastName);
				printf("\t\t\tEnter customer meter number:");
				scanf("%d",&customer.meterNumber);
				printf("\t\t\tEnter consumpted units:");
				scanf("%d",&customer.units);
				printf("\n\n\t\t\tProccessing...\n");
				//checking if customer has category and meter
				i=0;
					while(i<60){
						//first check if customer is registered and register
						fscanf(custom,"%d\t%s\t%s\t%d\t%d\n\n",&customerInfo[i].id,customerInfo[i].firstName,customerInfo[i].lastName,&customerInfo[i].categoryId,&customerInfo[i].meterNumber);
						if(customerInfo[i].meterNumber == customer.meterNumber && strcmp(customerInfo[i].firstName,customer.firstName)==0){
							//here customer is registered
							//what about collecting customer's full information?
							
							//first is to collect category price
							int customID=customerInfo[i].id;
							int customCategory=customerInfo[i].categoryId;
							int customMeter=customerInfo[i].meterNumber;
							
							FILE *Catprice;
							Catprice=fopen("storage/prices.txt","r");
							int m=0;
							int n=0;
							while(m==0 && n<10){
								//collecting price per KWH according to customer category
								fscanf(Catprice,"%d\t\t%d\t\t%d\n\n",&pric[n].id,&pric[n].categoryId,&pric[n].price);
								if(customCategory==pric[n].categoryId){
									//find total amount money to pay
									printf("\n\t\t\tCalculating total amount...\n");
										if(customCategory < 6){
											//here categories 3 and 5 will not change
											//3 is the highest category in residential
											//5 is the highest category in non-residential
											if(customCategory==3){
												totalTopay=customer.units*pric[n].price;	
											}else if(customCategory==5){
												totalTopay=customer.units*pric[n].price;
											}else{
												// here let's deal with categories 1,2 and 4
												//category 1
												if(customCategory==1){
													if(customer.units <=15){
														totalTopay=customer.units*pric[n].price;
													}else{
														if(customer.units > 15 && customer.units <= 50){
															//here customer category will shift to 2 because units is between 15 and 51
														totalTopay=customer.units*182;
														//then here is to update customer category to 3
														
														}else{
															//here customer category will shift to 3 because units exceeds 50
														totalTopay=customer.units*210;
														//then here is to update customer category to 3

														}
													}
												}
												//category 2
												if(customCategory==2){
													if(customer.units <=50){
														totalTopay=customer.units*pric[n].price;
													}else{
														//here customer category will shift to 3 because units exceeds 50
														totalTopay=customer.units*210;
														//then here is to update customer category to 3	
													}	
												}
												//category 4
												if(customCategory==4) {
													if(customer.units <=100){
														totalTopay=customer.units*pric[n].price;	
													}else{
														//here the category will be 5 because units exceed 100
														totalTopay=customer.units*222;
														//then here is to update customer category to 5
													}
												}
											}
										}else{
											totalTopay=customer.units*pric[n].price;
										}
									//then all being done below
									printf("\t\t\tPreparing customer's receipt...\n");
										FILE *receipt;
										receipt=fopen("storage/receipts.txt","a");
										char date[50]=__DATE__;
										int id=rand();
										fprintf(receipt,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n\n",id,customID,agentId,customer.firstName,customer.lastName,agentFirstName,agentLastName,customer.meterNumber,customer.units,totalTopay,date);
										fclose(receipt);
									//then print amount to pay,billing,etc
									printf("\t\t\tPlease wait a bit...\n");
										printf("\n");
										printf("\t\t\tCustomer names: %s %s\n",customer.firstName,customer.lastName);
										printf("\t\t\tAgent names: %s %s\n",agentFirstName,agentLastName);
										printf("\t\t\t-----------------------------------------\n");
										printf("\t\t\t electricity paid: %dKWH\n",customer.units);
										printf("\t\t\t meter number used: %d\n",customer.meterNumber);
										printf("\t\t\t total amount cost: %dFrw\n",totalTopay);
										printf("\t\t\t transaction done on %s\n",__DATE__);
										printf("\t\t\t-----------------------------------------");
										printf("\n\n");
									//stopping the loop
									n=13;
									m=2;
								}
								n++;	
							}
							fclose(Catprice);
							i=65;
						}else if(i==59){
							if(customerInfo[i].meterNumber != customer.meterNumber){
								//here customer is not registered
								//first register him/her to his/her category
								printf("\n\n\t\t\tFirst register this customer\n");
								printf("\t\t\t=============================\n\n");
								printf("\t\t\t=================================================\n");
								printf("\t\t\t|\t\tCategories\t\t\t|\n");
								printf("\t\t\t=================================================\n");
								printf("\t\t\t| 1 =Residential                                |\n");
								printf("\t\t\t| 2 =Non-residential                            |\n");
								printf("\t\t\t| 6 =Telecom towers                             |\n");
								printf("\t\t\t| 7=Water treatment plants/pumping station      |\n");
								printf("\t\t\t| 8=Hotels                                      |\n");
								printf("\t\t\t| 9=Health facilities                           |\n");
								printf("\t\t\t| 10=Broadcasters                               |\n");
								printf("\t\t\t=================================================\n");
								int category;
								printf("\n\t\t\tEnter number corresponding to your category:");
								scanf("%d",&category);
								if(category == 1){
									if(customer.units <=15){
										customer.categoryId=1;
									}else if(customer.units > 15 && customer.units <51){
										customer.categoryId=2;
									}else{
										customer.categoryId=3;
									}
								}else if(category == 2){
									if(customer.units > 100){
										customer.categoryId=4;
									}else{
										customer.categoryId=5;
									}
								}else{
									customer.categoryId=category;
								}
								printf("\n\t\t\tRegistering customer...\n");
								//first generate customer id by random
							 	randId= rand();
							 	int customerID=randId;
								FILE *castomers;
								castomers=fopen("storage/customers.txt","a");
								if(
									fprintf(castomers,"%d\t%s\t%s\t%d\t%d\n\n",customerID,customer.firstName,customer.lastName,customer.categoryId,customer.meterNumber)
								){
									//here customer is registered
									FILE *price;
									price=fopen("storage/prices.txt","r");
									int j=0;
									int k=0;
									while(k==0 && j<11){
										//collecting price per KWH according to customer category
										fscanf(price,"%d\t\t%d\t\t%d\n\n",&pric[j].id,&pric[j].categoryId,&pric[j].price);
										if(customer.categoryId==pric[j].categoryId){
											totalTopay=customer.units*pric[j].price;
											//here is to create receipt,printing ammount to pay,recording transaction
											//first registering customer's meter
											printf("\t\t\tRegistering customer's meter...'\n");
												FILE *metre;
												metre=fopen("storage/meters.txt","a");
												fprintf(metre,"%d\t%d\n\n",customerID,customer.meterNumber);
												fclose(metre);
											//then create receipt
											printf("\t\t\tPreparing customer's receipt...\n");
												FILE *receipt;
												receipt=fopen("storage/receipts.txt","a");
												char date[50]=__DATE__;
												int id=rand();
												fprintf(receipt,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n\n",id,customerID,agentId,customer.firstName,customer.lastName,agentFirstName,agentLastName,customer.meterNumber,customer.units,totalTopay,date);
												fclose(receipt);
											//then print amount to pay,billing,etc
											printf("\t\t\tPlease wait a bit...\n");
												printf("\n");
												printf("\t\t\tCustomer names: %s %s\n",customer.firstName,customer.lastName);
												printf("\t\t\tAgent names: %s %s\n",agentFirstName,agentLastName);
												printf("\t\t\t-----------------------------------------\n");
												printf("\t\t\t electricity paid: %dKWH\n",customer.units);
												printf("\t\t\t meter number used: %d\n",customer.meterNumber);
												printf("\t\t\t total amount cost: %dFrw\n",totalTopay);
												printf("\t\t\t transaction done on %s\n",__DATE__);
												printf("\t\t\t-----------------------------------------");
												printf("\n\n");
											//stopping the loop
											j=12;
											k=2;
										}
										j++;
									}
									fclose(price);
								}
								fclose(castomers);
							}
							
							a=2;
						}else{
							
						}		
						i++;
					}
				printf("\n\t\t\twant to continue? enter another option:");
				scanf("%d",&option);
				break;
			case 2:
				//reading and printing all recent receipts made by this agent
				if(b==0){
					int z=0;
					FILE *madeReceipts;
					madeReceipts=fopen("storage/receipts.txt","r");
					//let 's assume that no more than 100 receipts made
					printf("\n\n");
					printf("\t\t================================================================================================================================\n");
					printf("\t\t| Customer                   | Agent                      | meter used    | power(KWH)    | Money paid(Frw) | Date             |\n");
					printf("\t\t================================================================================================================================\n");
					while(z<100){
						fscanf(madeReceipts,"%d\t%d\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%d\t%s\n\n",&receipts[z].id,&receipts[z].customId,&receipts[z].agentID,receipts[z].customFirstN,receipts[z].customLastN,receipts[z].agentFirstN,receipts[z].agentLastN,&receipts[z].meter,&receipts[z].units,&receipts[z].totalToPay,receipts[z].date);
						if(strcmp(agentFirstName,receipts[z].agentFirstN)==0 && agentId==receipts[z].agentID && strcmp(agentLastName,receipts[z].agentLastN)==0){
					printf("\t\t| %s %s                      | %s %s                      | %d            | %d            | %d              | %s               |\n",receipts[z].customFirstN,receipts[z].customLastN,receipts[z].agentFirstN,receipts[z].agentLastN,receipts[z].meter,receipts[z].units,receipts[z].totalToPay,receipts[z].date);
					printf("\t\t--------------------------------------------------------------------------------------------------------------------------------\n");			
						}
						z++;	
					}
					printf("\n\n");
					fclose(madeReceipts);	
				}
				printf("\n\t\t\twant to continue? enter another option:");
				scanf("%d",&option);
				break;
			case 3:
				//calling function from agentInfo.h
				agentInfo(agentId,agentFirstName,agentLastName);
				printf("\n\t\twant to continue? enter another option:");
				scanf("%d",&option);
				break;
			case 4:
				//exiting program
				printf("\n\n\t\t\tGood bye!! Thanks for using this application.\n\n");
				option=5;
				break;
			default:
				printf("\n\n\t\tundefined option!\n\n");
				printf("\t\t\twant to continue? enter another option:");
				scanf("%d",&option);
		}
	}while(option < 5);
	fclose(custom);
	fclose(meters);
}
