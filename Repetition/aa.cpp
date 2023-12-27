#include <stdio.h>

int main()
{
	long long int n, jum;
	scanf("%lld", &n);
	long long int sum[n];
	jum = 0;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &sum[i]);
		jum += sum[i];
		
		switch (jum)
		{
			case 9:
				jum = 21;
				break;
				
			case 33:
				jum = 42;
				break;
				
			case 76:
				jum = 92;
				break;
				
			case 53:
				jum = 37;
				break;
				
			case 80:
				jum = 59;
				break;
				
			case 97:
				jum = 88;
				break;
			
		}
	}
	
	printf("%d\n", jum);
	
	
	return 0;
}
//
//#include <stdio.h>
//
//int main() {
//    int N;
//    scanf("%d", &N);
//
//    int board[30001]; // Array to store player's position
//    for (int i = 0; i <= 30000; i++) {
//        board[i] = i; // Initialize the initial position
//    }
//
//    // Set the positions of ladders
//    board[9] = 21;
//    board[33] = 42;
//    board[76] = 92;
//
//    // Set the positions of snakes
//    board[53] = 37;
//    board[80] = 59;
//    board[97] = 88;
//
//    int currentPos = 0;
//
//    for (int i = 0; i < N; i++) {
//        int dice;
//        scanf("%d", &dice);
//
//        currentPos += dice;
//
//        if (currentPos <= 30000) {
//            currentPos = board[currentPos];
//        }
//    }
//
//    printf("%d\n", currentPos);
//
//    return 0;
//}

