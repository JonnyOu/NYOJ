#include<stdio.h>
#include<string.h>
int main()
{
	char x[5], y[10];
	int s = 1;
	while (scanf("%s%s", &x, &y) != EOF)
	{
		printf("Case %d: ", s);
		s++;
		if (!strcmp(x,"A#"))
		printf("%s %s\n", "Bb", y);
		else if (!strcmp(x,"Bb"))
		printf("%s %s\n", "A#", y);
		else if (!strcmp(x,"C#"))
		printf("%s %s\n", "Db", y); 
		else if (!strcmp(x,"Db"))
		printf("%s %s\n", "C#", y); 
		else if (!strcmp(x,"D#"))
		printf("%s %s\n", "Eb", y); 
		else if (!strcmp(x,"Eb"))
		printf("%s %s\n", "D#", y); 
		else if (!strcmp(x,"F#"))
		printf("%s %s\n", "Gb", y); 
		else if (!strcmp(x,"Gb"))
		printf("%s %s\n", "F#", y); 
		else if (!strcmp(x,"G#"))
		printf("%s %s\n", "Ab", y); 
		else if (!strcmp(x,"Ab"))
		printf("%s %s\n", "G#", y);  
		else 
		puts("UNIQUE");
	}
} 
