/*
- Author: Sungju Baek
- Data: 22.09.29
-Description: Basic RPG game
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int player_hp = 100;
	int player_att = 10;
	int player_def = 8;

	int monster_hp = 80;
	int monster_att = 10;
	int monster_def = 8;

	srand(time(NULL));

	while (1) {/*무한루프 자리에는 무조건 1*/
		printf("Plater status============\n");
		printf("- HP:%d\n", player_hp);
		printf("-ATT: %d\n", player_att);
		printf("-DEF; %d

			int choice;
		scanf("%d", &choice);

		if (choice == 1) {
			int damage = player_att - monster_def;
			int is_critical = rand() % 2;
		
			if (is_critical) damage *= 2;

			printf("Hit hte monster with damage %d.\n", damage);
			monster_hp -= damage;

		}
		else if (choice == 2) {
			int damage = monster_att - player_def;
			int is_critical = rand() % 2;

			if (is_critical) damage *=2;

			printf("Got damage %d from the monster. \n", damage);
			player_hp -= damage;


		}
		else if (choice == 3) {
			printf("Bye bye!\n");
			break;
		}
		else {
			printf("Wrong input\n");
			continue;/*가장 가까이 있는 루프의 꼭대기로 올라감*/
		}

		if (player_hp <= 0) {
			printf("You loose.\n");
			break;

		}
		else if (monster_hp <= 0) {
			printf("You won. \n");
			break;
		}

	}

	return 0;
}