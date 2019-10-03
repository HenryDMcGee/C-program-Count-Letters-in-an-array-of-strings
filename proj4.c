#include "proj4.h"

/*
 * Search through each character in s,
 * which is array containing n strings, 
 * and update the global count array
 * with the correct character counts.
 * Note: check the examples to see
 * if the counts should be case 
 * sensitive or case insensitive.
 */
void letterCount(char * s[], int n){
  //Implement this function
	int i=0, j=0, stringlength=0, stringcount=0;      //i and j=countervariable for loop, stringlength is a variable for the length of each individual string
	
	while(i<n)										//Cycles through each string
	{
		j=0;			
					
		
		while(s[i][j]!='\0')
		{
			stringcount++;
			j++;
		}


			stringlength=stringcount;
			stringcount=0;
			j=0;
		
//stringlength=strlen(s[i]);						//Finds the length of each string  (CHANGE LATER,change comments to line above)
		while(j<stringlength)
		{
			if(s[i][j]>=97&&s[i][j]<=122)			//Based on the ASC II table 97-122 is the values for a-z
			{
				count[s[i][j]-97]++;				//Increases count for each lowercase letter
			}
			else if(s[i][j]>=65&&s[i][j]<=90)		//Based on the ASC II table 65-90 is the values for A-Z
			{
				count[s[i][j]-65]++;				//Increases count for each uppercase letter
			}
			j++;
		
		}
		i++;
		
	}
}

/*
 * Initialize each value in the global
 * count array to zero.
 */
void initializeCount(){							
int i=0;	
	for(i=0; i<26; i++)								//Goes through a loop and assigns each variable in the array count equal to zero
	{
		count[i]=0;
	}
  //Implement this function
}

