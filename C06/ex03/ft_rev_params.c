#include <unistd.h>

int main(int ac, char **av) 
{
  int i;
  int j;
  
  i = ac - 1;
  j = 0;
  if (ac > 1)
  {
    while ( i > 0)
    {
      while (av[i][j] != '\0')
      {
        write(1, &av[i][j], 1);
        j++;
      }
      write(1, "\n", 1);
      i--;
    }
  }
  return (0);
}
