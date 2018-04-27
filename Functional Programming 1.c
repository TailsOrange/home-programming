#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double companyResults [];

void readData(void);
void validateData(void);
void processData(void);
void analyzeResults(void);
void generateReport(void);
void writeFormattedReport(void);
void archiveData(void);
void disseminateResults(void);

int main(void)
{
	readData();
	validateData();
	processData();
	analyzeResults();
	generateReport();
	writeFormattedReport();
	archiveData();
	disseminateResults();
	
	system("pause");
	return(0);
}

void readData(void)
{	//reads data to array
	FILE *fp;
	int numRecords=20;
	fp=fopen(fp,"companyData.txt","r"); //dummy text file. do not RUN the program.
	for(int i=0; i<numRecords; i++)
		{
			fscanf(fp, "%g",&companyResults[i]);
		}
	fclose(fp);		
			
}

void validateData(void)
{
	//enter code here
	/*
	This is where the data is being checked.
	For Example... 
		is it in plausible range?
		is it consistent with what have been collected over a specific period of time?
		are there empty struct fields,array elements?
		do all of them have content?
		readable files?
	*/
}
	
	
void processData(void)
{
	//put code here.... necessary formulas, formats,standards,etc.
}

void analyzeResults(void)
{
	//enter code.. to produce results in graphs,tables,list,etc..
	//perform statistical analysis as needed..
	//identify outliers and "out of the norms" resu]lts.
}


void generateReport(void)
{
	/*
	enter function here.....
	create report as required according to project or policy requirements
	*/
}

void archiveData(void)
{
	/*
	Functions goes here
	makes copies of data,results,and reports
	*/
}

void disseminateResults(void)
{
	/*
	code goes here
	store results and reports at appropiate locations
	generate communication updates
	*/
}




