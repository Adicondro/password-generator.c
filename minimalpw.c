#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 36

char allowed_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";

int main()
{
  srand(time(NULL));
  char password[PASSWORD_LENGTH+1];
  for(int i = 0; i < PASSWORD_LENGTH; i++){
    int random_number = rand() % (sizeof(allowed_characters) - 1);
    password[i] = allowed_characters[random_number];
  }
  password[PASSWORD_LENGTH] = 0;
  printf("Your password is: %s\n", password);

}

// To learn:
// 1. Array Index
// 2. Random
// 3. Size of Array
// 4. Define
