#include <stdio.h>
#include <string.h>
#define MAX_PLAYER 5
#define STR_LENGTH 30

int main(void) {
	char names[MAX_PLAYER][STR_LENGTH+1];
	int  ages[MAX_PLAYER];
	char genders[MAX_PLAYER];
	char player_name[STR_LENGTH+1];
	int  i, result;

	printf("Enter %d players' info:\n", MAX_PLAYER);
	for (i=0; i<MAX_PLAYER; i++) 
		scanf("%s %d %c", names[i], &ages[i], &genders[i]);

	printf("The list of players are:\n");
	printf("Name \t Age \t Gender\n");
	for (i=0; i<MAX_PLAYER; i++)
		printf("%s \t %d \t %c \n", names[i], ages[i], genders[i]);

	printf("Enter a player's name: ");
	scanf("%s", player_name);

	result = search_teammate(names, ages, genders, MAX_PLAYER, player_name);
	if (result == -2)
		printf("No such player %s.\n", player_name);
	else if (result == -1)
		printf("Sorry, we cannot find a teammate for %s!\n", player_name);
	else
		printf("%s's compatible teammate is %s.\n", player_name, names[result]);
	return 0;
}

// Search for a player's compatible teammate
// Return index in array if compatible teammate found, or
//        -1 if compatible teammate not found, or
//        -2 if player not found
int search_teammate(char names[][STR_LENGTH+1], int ages[], char genders[], int size, char player_name[]) {
	int i, player_index = -1;

	// First, check that the player_name appears in the names array
	for (i=0; i<size; i++) {
		if (strcmp(player_name, names[i]) == 0)
			player_index = i;
	}

	if (player_index == -1)
		return -2;  // no such student in array

	for (i=0; i<size; i++) {
		if ((ages[i] == ages[player_index]) && (genders[i] != genders[player_index]))
			return i;
	}

	return -1; // cannot find compatible teammate
}
