#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char description[100];
    int connecctedRooms[4];
} Room;

typedef struct {
    char name[50];
} Player;

void displayRoom(Room room);
void displayprompt();
void handleinput(char input, Room*currentRoom,Playerplayer);

int main(){
    Room rooms[5];
    Player player;

    while(1){
        displayRoom("currentRoom");
       displayprompt();
       char input;
       scanf("%c",&input);
       handleinput(input, &currentRoom, &player); 
    }
return(0);
void displayRoom(Room room){
    printf("%s\n", room.description);

}
void displayPrompt(){
    printf("what do you wnat to do?(N/E/S/W TO MOVE Q to quit):");
}
void handleinput(char input,Room*currentRoom, Player*player);
}