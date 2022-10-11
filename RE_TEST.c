#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int RGB;
	char change;
	int updown;
	char yesorno;
	int R = 0, G = 0, B = 0;


	printf("16진수 컬러 코드값을 입력하세요:");
	scanf("%x", &RGB);
	R = (RGB & 0xFF0000) >> 16;
	G = (RGB & 0x00FF00) >> 8;
	B = (RGB & 0x0000FF) >> 0;
	printf("입력된 컬러 R,G,B 값은 (%d,%d,%d)입니다.\n", R, G, B);

	RE:
	printf("RGB 중 변경할 컬러 채널을 입력하세요:");
	scanf(" %c", &change);

	if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
	{
		printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
		goto RE;
	}
	else
	{
		if (change == 'R'|| change == 'r')
		{
			printf("R 채널의 증감 정도를 입력하세요:");
			scanf("%d", &updown);

			R += updown;

			if (R >= 255)
				R = 255;
			if (R <= 0)
				R = 0;

			R = (R << 16);
			G = (G << 8);
			B = (B << 0);
		
			RGB = (R | G | B);

			printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

			printf("컬러 조정을 다시 하시겠습니까?(y/n):");
			scanf(" %c", &yesorno);

			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB 중 변경할 컬러 채널을 입력하세요:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							R += updown;

							if (R >= 255)
								R = 255;
							if (R <= 0)
								R = 0;

							///R = (R << 16);
							///G = (G << 8);
							///B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							G += updown;

							if (G >= 255)
								G = 255;
							if (G <= 0)
								G = 0;

							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							B += updown;

							if (B >= 255)
								B = 255;
							if (B <= 0)
								B = 0;


							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}
					}
				}
			}
		}


		if (change == 'G'|| change == 'g')
		{
			printf("G 채널의 증감 정도를 입력하세요:");
			scanf("%d", &updown);

			G += updown;

			if (G >= 255)
				G = 255;
			if (G <= 0)
				G = 0;

			R = (R << 16);
			G = (G << 8);
			B = (B << 0);

			RGB = (R | G | B);

			printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

			printf("컬러 조정을 다시 하시겠습니까?(y/n):");
			scanf(" %c", &yesorno);

			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB 중 변경할 컬러 채널을 입력하세요:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							R += updown;

							if (R >= 255)
								R = 255;
							if (R <= 0)
								R = 0;

							///R = (R << 16);
							///G = (G << 8);
							///B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							G += updown;

							if (G >= 255)
								G = 255;
							if (G <= 0)
								G = 0;

							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							B += updown;

							if (B >= 255)
								B = 255;
							if (B <= 0)
								B = 0;


							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n" ,R >> 16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}
					}
				}
			}

		}

		if (change == 'B' || change == 'b')
		{
			printf("B 채널의 증감 정도를 입력하세요:");
			scanf("%d", &updown);
					
			B += updown;

			if (B >= 255)
				B = 255;
			if (B <= 0)
				B = 0;


			R = (R << 16);
			G = (G << 8);
			B = (B << 0);

			RGB = (R | G | B);

			printf("조정된 R,G,B 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R >> 16, G >> 8, B, RGB);

			printf("컬러 조정을 다시 하시겠습니까?(y/n):");
			scanf(" %c", &yesorno);
		
			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB 중 변경할 컬러 채널을 입력하세요:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("잘못 입력하셨습니다. 다시 입력하세요.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							R += updown;

							if (R >= 255)
								R = 255;
							if (R <= 0)
								R = 0;

							///R = (R << 16);
							///G = (G << 8);
							///B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R>>16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							G += updown;

							if (G >= 255)
								G = 255;
							if (G <= 0)
								G = 0;

							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B, 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R>>16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B 채널의 증감 정도를 입력하세요:");
							scanf("%d", &updown);

							B += updown;

							if (B >= 255)
								B = 255;
							if (B <= 0)
								B = 0;

							//R = (R << 16);
							//G = (G << 8);
							//B = (B << 0);

							RGB = (R | G | B);

							printf("조정된 R,G,B 값은 (%d,%d,%d)이고, 이는 0x%06x 입니다.\n", R>>16, G >> 8, B, RGB);

							printf("컬러 조정을 다시 하시겠습니까?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}
					}
				}
			}
		}
	}
	return 0;
}