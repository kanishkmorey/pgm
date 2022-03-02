#include <stdio.h>

int main() 
{

  char line[150];
  int vowels;

  vowels = 0;

  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);

  for (int i = 0; line[i] != '\0'; ++i) 
  {

    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') 
        {
            ++vowels;
        }
  }

  printf("Vowels: %d\n\n", vowels);
  return 0;
}
