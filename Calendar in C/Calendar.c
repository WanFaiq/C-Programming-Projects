#include <stdio.h>

int main(){

	// Variable setup
	int columnCount,offset,numOfDays,dateOfMonth;
	
	columnCount = 7;
	dateOfMonth = 1;
	
	// Get Input
	getInputOffset:
	printf("Enter start day of the month: ");
	scanf("%d",&offset);
	if (offset<0 || offset>6){
		printf("Invalid input. 0 is Sunday. Enter a number between 0 and 6.\n\n");
		goto getInputOffset;
	}
	
	getInputNumOfDays:
	printf("Enter number of days in the month: ");
	scanf("%d",&numOfDays);
	if (numOfDays>31 || numOfDays<28){
		printf("Invalid input. Enter a number between 28 and 31.\n\n");
		goto getInputNumOfDays;
	}	
	
	// Output Calendar
	printf("\tSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	printf("\t___\t___\t___\t___\t___\t___\t___\n");
	
	
	do{
		
		while (columnCount>0){
			
			if (offset>0){
				printf("\t");
				offset--;
			}
			
			else{
				//Printing the days
				if (columnCount == 7 || columnCount == 1){
					printf("\t%d");
				}
				else{
					printf("\t%d",dateOfMonth);
				}
				
				dateOfMonth++;
				
				if (dateOfMonth>numOfDays){
					break;
				}
			}
			columnCount--;
		}
		columnCount=7;
		printf("\n");
	} while (numOfDays>dateOfMonth);
	printf("\t___\t___\t___\t___\t___\t___\t___\n");
}