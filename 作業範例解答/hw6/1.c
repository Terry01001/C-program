#include "stdio.h"

int l = 0, r = 0, c = 0;
char visited[30][30][30] = {0};
char maze[30][30][30] = {0};
int exited = 0;
int min = 30 * 30 * 30;

void visit(int minutes, int level, int row, int col)
{
  visited[level][row][col] = 1;
  if (maze[level][row][col] == 'E')
  {
    exited = 1;
    if (minutes < min)
      min = minutes;
    return;
  }
  for (int i = 0; i < 6; i++)
  {
    switch (i)
    {
    case 0: //向N走
      if ((row - 1 >= 0 && maze[level][row - 1][col] != '#') &&
          !visited[level][row - 1][col])
      {
        visit(minutes + 1, level, row - 1, col);
        visited[level][row - 1][col] = 0;
      }
      break;
    case 1: //向E走
      if ((col + 1 < c && maze[level][row][col + 1] != '#') &&
          !visited[level][row][col + 1])
      {
        visit(minutes + 1, level, row, col + 1);
        visited[level][row][col + 1] = 0;
      }
      break;
    case 2: //向S走
      if ((row + 1 < r && maze[level][row + 1][col] != '#') &&
          !visited[level][row + 1][col])
      {
        visit(minutes + 1, level, row + 1, col);
        visited[level][row + 1][col] = 0;
      }
      break;
    case 3: //向W走
      if ((col - 1 >= 0 && maze[level][row][col - 1] != '#') &&
          !visited[level][row][col - 1])
      {
        visit(minutes + 1, level, row, col - 1);
        visited[level][row][col - 1] = 0;
      }
      break;
    case 4: //向上走
      if ((level + 1 < l && maze[level + 1][row][col] != '#') &&
          !visited[level + 1][row][col])
      {
        visit(minutes + 1, level + 1, row, col);
        visited[level + 1][row][col] = 0;
      }
      break;
    case 5: //向下走
      if ((level - 1 >= 0 && maze[level - 1][row][col] != '#') &&
          !visited[level - 1][row][col])
      {
        visit(minutes + 1, level - 1, row, col);
        visited[level - 1][row][col] = 0;
      }
      break;
    default:
      break;
    }
  }
}
int main(void)
{
  while (1)
  {
    scanf("%d %d %d", &l, &r, &c);
    if((l==0 && r==0) && c==0) break;
    exited=0;
    min = 30*30*30;
    char temp;
    int start_l = 0, start_r = 0, start_c = 0;
    for (int level = 0; level < l; level++)
    {
      for (int row = 0; row < r; row++)
      {
        for (int col = 0; col < c; col++)
        {
          temp = getchar();
          while (temp == '\n')
            temp = getchar();
          maze[level][row][col] = temp;
          if (maze[level][row][col] == 'S')
          {
            start_l = level;
            start_r = row;
            start_c = col;
          }
        }
      }
    }
    visit(0, start_l, start_r, start_c);
    if (exited == 0)
      printf("Trapped!\n");
    else
      printf("Escaped in %d minute(s).\n", min);
  }
  return 0;
}