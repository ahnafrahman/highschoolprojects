//Assignment One, Bhavik and Nuhan
#include <unistd.h> //the liabraries 
#include <stdio.h>
#include <string.h>
#include <math.h>

float knowledgePercentRoutine (float kO, float kT);
float thinkingPercentRoutine (float tO, float tT);
float applicationPercentRoutine (float aO, float aT);
float communicationPercentRoutine (float cO, float cT);
float finalMarkRoutine (float K, float T, float A, float C);

float main (void)
{

float knowledgeTotal; 
float thinkingTotal;
float applicationTotal;
float communicationTotal;

float knowledgeObtained; 
float thinkingObtained;
float applicationObtained;
float communicationObtained;

float knowledgePercent;
float thinkingPercent;
float applicationPercent;
float communicationPercent;

float Mark;


printf("Enter the number of marks in the knowledge section (Worth 35%%) \n");
scanf("%f", &knowledgeTotal);
printf("Enter the number of marks in the thinking section (Worth 40%%) \n");
scanf("%f", &thinkingTotal);
printf("Enter the number of marks in the application section (Worth 15%%) \n");
scanf("%f", &applicationTotal);
printf("Enter the number of marks in the communication section (Worth 10%%) \n");
scanf("%f", &communicationTotal);




printf("Please enter obtained knowledge marks \n");
scanf("%f", &knowledgeObtained);
printf("Please enter obtained thinking marks \n");
scanf("%f", &thinkingObtained);
printf("Please enter obtained application marks \n");
scanf("%f", &applicationObtained);
printf("Please enter obtained communication marks \n");
scanf("%f", &communicationObtained); 

knowledgePercent = knowledgePercentRoutine(knowledgeObtained, knowledgeTotal);
thinkingPercent = thinkingPercentRoutine(thinkingObtained, thinkingTotal);
applicationPercent = applicationPercentRoutine(applicationObtained, applicationTotal);
communicationPercent = communicationPercentRoutine(communicationObtained, communicationTotal);

Mark = finalMarkRoutine (knowledgePercent, thinkingPercent, applicationPercent, communicationPercent);

printf("Your Grade 11 Physics Test Mark is %.2f%% \n", Mark);
return 0; 

}

float knowledgePercentRoutine (float kO, float kT) {
	
	float knowledgePercentRoutine = 0;
	knowledgePercentRoutine = ((kO/kT)*100*0.35); 
	
	return knowledgePercentRoutine;

}

float thinkingPercentRoutine (float tO, float tT) {
	
	float thinkingPercentRoutine = 0;
	thinkingPercentRoutine = (((tO/tT)*100*0.40)); 
	return thinkingPercentRoutine;

}

float applicationPercentRoutine (float aO, float aT) {
	
	float applicationPercentRoutine = 0;
	applicationPercentRoutine = ((aO/aT)*100*0.15); 
	
	return applicationPercentRoutine;

}

float communicationPercentRoutine (float cO, float cT) {
	
	float communicationPercentRoutine = 0;
	communicationPercentRoutine = ((cO/cT)*100*0.10); 
	
	return communicationPercentRoutine;

}

float finalMarkRoutine (float K, float T, float A, float C) {
	
	float finalMarkRoutine = 0;
	finalMarkRoutine = (K+T+A+C); 
	
	return finalMarkRoutine;

}
