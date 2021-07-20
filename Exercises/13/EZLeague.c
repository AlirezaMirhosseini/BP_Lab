#include <stdio.h>
//#include <math.h>
#include <stdbool.h>
//#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include <Windows.h>
/*#ifdef _MSC_BUILD
#define scanf scanf_s
#endif // _MSC_BUILD*/

#pragma warning (disable:4996)
#define SIZE 2000
#define PLAYERSCOUNT 500

typedef struct _player {
	int id;
	int teamid;
	char name[SIZE];
	int price;
	int speed;
	int finishing;
	int defence;
} player;

typedef struct _team {
	int id;
	char name[SIZE];
	int money;
	int players[PLAYERSCOUNT];
	int playersCount;
	int wins;
	int loses;
	int draws;
} team;
void swapStr(char* str1, char* str2) {
	char str[SIZE];
	strcpy(str, str1);
	strcpy(str1, str2);
	strcpy(str2, str);
}
int main()
{
	char input[SIZE] = {};
	int Players = 0;
	int Teams = 0;
	player* players = (player*)malloc(sizeof(player) * (Players + 1));
	team* teams = (team*)malloc(sizeof(team) * (Players + 1));
	do
	{
		scanf("%s", input);
		if (strcmp(input, "new") == 0)
		{
			char type[7];
			scanf("%s", type);
			if (strcmp(type, "player") == 0)
			{
				char name[SIZE];
				scanf("%s", name);
				int price, speed, finishing, defence;
				scanf("%d %d %d %d", &price, &speed, &finishing, &defence);
				players = (player*)realloc(players, sizeof(player) * (Players + 1));
				players[Players].id = Players + 1;
				players[Players].teamid = -1;
				strcpy(players[Players].name, name);
				players[Players].price = price;
				players[Players].speed = speed;
				players[Players].finishing = finishing;
				players[Players].defence = defence;
				Players++;
			}
			else if (strcmp(type, "team") == 0)
			{
				char name[SIZE];
				scanf("%s", name);
				bool exsistteam = false;
				for (int i = 0; i < Teams; i++)
					if (strcmp(name, teams[i].name) == 0)
					{
						exsistteam = true;
						break;
					}
				int money;
				scanf("%d", &money);
				if (exsistteam == false)
				{
					teams = (team*)realloc(teams, sizeof(team) * (Teams + 1));
					strcpy(teams[Teams].name, name);
					teams[Teams].id = Teams + 1;
					teams[Teams].money = money;
					teams[Teams].playersCount = 0;
					for (int i = 0; i < PLAYERSCOUNT; i++)
						teams[Teams].players[i] = -1;
					teams[Teams].wins = 0;
					teams[Teams].loses = 0;
					teams[Teams].draws = 0;
					Teams++;
				}
			}
		}
		else if (strcmp(input, "buy") == 0)
		{
			int playerid, teamid;
			scanf("%d %d", &playerid, &teamid);
			if (playerid > Players || playerid < 1)
				printf("player with the id %d doesnt exist\n", playerid);
			else if (teamid > Teams || teamid < 1)
				printf("team with the id %d doesnt exist\n", teamid);
			else if (players[playerid - 1].price > teams[teamid - 1].money)
				printf("the team cant afford to buy this player\n");
			else if (players[playerid - 1].teamid != -1)
				printf("player already has a team\n");
			else
			{
				players[playerid - 1].teamid = teamid;
				int count = teams[teamid - 1].playersCount++;
				teams[teamid - 1].players[count] = playerid;
				teams[teamid - 1].money -= players[playerid - 1].price;
				printf("player added to the team succesfully\n");
			}
		}
		else if (strcmp(input, "sell") == 0)
		{
			int playerid, teamid;
			scanf("%d %d", &playerid, &teamid);
			if (teamid > Teams || teamid < 1)
				printf("team doesnt exist\n");
			else if (players[playerid - 1].teamid != teamid)
				printf("team doesnt have this player\n");
			else
			{
				players[playerid - 1].teamid = -1;
				int count = teams[teamid - 1].playersCount--;
				for (int i = 0; i < PLAYERSCOUNT; i++)
				{
					if (teams[teamid - 1].players[i] == playerid)
					{
						teams[teamid - 1].players[i] = -1;
						break;
					}
				}
				teams[teamid - 1].money += players[playerid - 1].price;
				printf("player sold succesfully\n");
			}
		}
		else if (strcmp(input, "match") == 0)
		{
			int teamid1, teamid2;
			scanf("%d %d", &teamid1, &teamid2);
			if (teamid1 > Teams || teamid1 < 1 || teamid2 > Teams || teamid2 < 1)
				printf("team doesnt exist\n");
			else if (teams[teamid1 - 1].playersCount < 11 || teams[teamid2 - 1].playersCount < 11)
				printf("the game can not be held due to loss of the players\n");
			else
			{
				int power1 = 0, power2 = 0;
				int num1 = 0, num2 = 0;
				for (int i = 0; i < PLAYERSCOUNT; i++)
				{
					int playerid = teams[teamid1 - 1].players[i];
					if (playerid != -1 && num1 < 11)
					{
						power1 += players[playerid - 1].speed;
						power1 += players[playerid - 1].finishing;
						num1++;
					}
					playerid = teams[teamid2 - 1].players[i];
					if (playerid != -1 && num2 < 11)
					{
						power2 += players[playerid - 1].speed;
						power2 += players[playerid - 1].defence;
						num2++;
					}
					if (num1 == 11 && num2 == 11)
						break;
				}
				if (power1 > power2)
				{
					teams[teamid1 - 1].wins++;
					teams[teamid2 - 1].loses++;
				}
				else if (power2 > power1)
				{
					teams[teamid2 - 1].wins++;
					teams[teamid1 - 1].loses++;
				}
				else
				{
					teams[teamid2 - 1].draws++;
					teams[teamid1 - 1].draws++;
				}
			}
		}
		else if (strcmp(input, "rank") == 0)
		{
			team* sorted = (team*)malloc(sizeof(team) * Teams);
			memcpy(sorted, teams, sizeof(team) * Teams);
			for (int i = 0; i < Teams; i++)
			{
				for (int j = i + 1; j < Teams; j++)
				{
					if ((sorted[j].wins > sorted[i].wins))
					{
						swapStr(sorted[j].name, sorted[i].name);
					}
					else if (sorted[j].wins == sorted[i].wins) {
						if (sorted[j].draws > sorted[i].draws) {
							swapStr(sorted[j].name, sorted[i].name);
						}
						else if (sorted[j].draws == sorted[i].draws)
						{
							if (sorted[j].loses < sorted[i].loses)
								swapStr(sorted[j].name, sorted[i].name);
						}
					}
				}
			}
			for (int i = 0; i < Teams; i++)
				printf("%d. %s\n", i + 1, sorted[i].name);
			free(sorted);
		}
	} while (strcmp(input, "end"));
	return 0;
}