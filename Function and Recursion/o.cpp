#include <stdio.h>
#include <stdlib.h>

#define HEIGHT 100
#define WIDTH 100

char map[HEIGHT+1][WIDTH+1];
// = {
//    "####################",
//    "#   #           #  #",
//    "#   #        #     #",
//    "# ###     ##########",
//    "#         #        #",
//    "#            ###   #",
//    "#      # #   #     #",
//    "##     # #   #     #",
//    "# #          #     #",
//    "####################"
//};

int sum = 0;
 
void printMap()
{
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
 
bool isValid(int sx, int sy, int x, int y)
{
    return x >= 0 && x < sx && y >= 0 && y < sy;
}
 
bool isBlocked(int x, int y)
{
    return map[y][x] == '#' || map[y][x] == 'x';
}
 
void floodFill(int x, int y, int sx, int sy)
{
    if (!isValid(sx, sy, x, y) || isBlocked(x, y))
    {
        return;
    }

//	if (isBlocked(x, y))
//    {
//        return;
//    }
    if(map[y][x] == '*') sum++;
    
    map[y][x] = 'x';
//    system("cls");
//    printMap();
    
    // Kanan
    floodFill(x + 1, y, sx, sy);
    // Bawah
    floodFill (x, y + 1, sx, sy);
    // Kiri
    floodFill (x - 1, y, sx, sy);
    // Atas
    floodFill (x, y - 1, sx, sy);
    
}
 
int main() {
    int n;
    scanf("%d", &n);
    
    for(int t = 1; t <= n; t++){
    	sum = 0;
    	int x, y;
    	int sX, sY;
    	bool isS = false;
    	scanf("%d %d", &y, &x);
		for(int i = 0; i < y; i++){
			scanf("%s", map[i]);
		}
//		printMap();
		for(int i = 0; i < y; i++){
			for(int j = 0; j < x; j++){
				if(map[i][j] == 'P'){sX = j; sY = i; isS = true;}	
			}
		}
//		printf("%d %d\n", sX, sY);
		
		
		if(isS) {floodFill(sX, sY, x, y); printf("Case #%d: %d\n", t, sum);}
		else printf("Case #%d: %d\n", t, sum);
	}
	    
    return 0;
}
