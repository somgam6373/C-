#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int RGB;
	char change;
	int updown;
	char yesorno;
	int R = 0, G = 0, B = 0;


	printf("16���� �÷� �ڵ尪�� �Է��ϼ���:");
	scanf("%x", &RGB);
	R = (RGB & 0xFF0000) >> 16;
	G = (RGB & 0x00FF00) >> 8;
	B = (RGB & 0x0000FF) >> 0;
	printf("�Էµ� �÷� R,G,B ���� (%d,%d,%d)�Դϴ�.\n", R, G, B);

	RE:
	printf("RGB �� ������ �÷� ä���� �Է��ϼ���:");
	scanf(" %c", &change);

	if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
	{
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
		goto RE;
	}
	else
	{
		if (change == 'R'|| change == 'r')
		{
			printf("R ä���� ���� ������ �Է��ϼ���:");
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

			printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

			printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
			scanf(" %c", &yesorno);

			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB �� ������ �÷� ä���� �Է��ϼ���:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
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
			printf("G ä���� ���� ������ �Է��ϼ���:");
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

			printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

			printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
			scanf(" %c", &yesorno);

			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB �� ������ �÷� ä���� �Է��ϼ���:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n" ,R >> 16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
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
			printf("B ä���� ���� ������ �Է��ϼ���:");
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

			printf("������ R,G,B ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R >> 16, G >> 8, B, RGB);

			printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
			scanf(" %c", &yesorno);
		
			if (yesorno == 'y' || yesorno == 'Y')
			{
				while (1)
				{
					printf("RGB �� ������ �÷� ä���� �Է��ϼ���:");
					scanf(" %c", &change);

					if (change != 'R' && change != 'G' && change != 'B' && change != 'r' && change != 'g' && change != 'b')
					{
						printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
					}
					else
					{
						if (change == 'R' || change == 'r')
						{
							printf("R ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R>>16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'n' || yesorno == 'N')
								break;
						}


						if (change == 'G' || change == 'g')
						{
							printf("G ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B, ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R>>16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
							scanf(" %c", &yesorno);

							if (yesorno == 'N' || yesorno == 'n')
								break;
						}

						if (change == 'B' || change == 'b')
						{
							printf("B ä���� ���� ������ �Է��ϼ���:");
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

							printf("������ R,G,B ���� (%d,%d,%d)�̰�, �̴� 0x%06x �Դϴ�.\n", R>>16, G >> 8, B, RGB);

							printf("�÷� ������ �ٽ� �Ͻðڽ��ϱ�?(y/n):");
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