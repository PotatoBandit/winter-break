#include <stdio.h>

void intro();
void create_story();

int main()
{
	intro();
	create_story();
	
	return 0;
}

void intro()
{
	printf("Hello! Let's play Madlibs!\nEnter in a word for each category and I'll turn it into a story!\n");
}

void create_story()
{
	char name[20], verb[20], adj[20], noun[20], noun2[20], noun3[20], name2[20], name3[20], verbing[20], body_part[20], name4[20], name5[20];
	 
	printf("Name: ");
	scanf("%[^\n]s ", &name);
	getchar();
	
	printf("Verb: ");
	scanf("%[^\n]s ", &verb);
	getchar();
	
	printf("Adjective: ");
	scanf("%[^\n]s ", &adj);
	getchar();
	
	printf("Noun: ");
	scanf("%[^\n]s ", &noun);
	getchar();
	
	printf("Another Noun: ");
	scanf("%[^\n]s ", &noun2);
	getchar();
	
	printf("And Another Noun: ");
	scanf("%[^\n]s ", &noun3);
	getchar();

	printf("Another Name: ");
	scanf("%[^\n]s ", &name2);
	getchar();
	
	printf("And Another Name: ");
	scanf("%[^\n]s ", &name3);
	getchar();

	printf("And one more Name: ");
	scanf("%[^\n]s ", &name4);
	getchar();
	
	printf("Verb ending in -ing: ");
	scanf("%[^\n]s ", &verbing);
	getchar();

	printf("Body Part: ");
	scanf("%[^\n]s ", &body_part);
	getchar();
	
	printf("Another one more Name: ");
	scanf("%[^\n]s ", &name5);
	getchar();

	printf("Dear %s,\nI hope you are still able to %s. I know it's been %s living alone during the corona virus pandemic. Did you run out of %ss, yet? All the stores are out of %ss and %ss. %s called %s. They said that %s was %s out of their %s! How crazy is that! Hope to see you soon! Be safe out there.\n -%s\n", name, verb, adj, noun, noun2, noun3, name2, name3, name4, verbing, body_part, name5 );
}
