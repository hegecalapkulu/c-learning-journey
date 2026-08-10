// Day21-PointerFundamentals ----> Pointer Fundamentals Project

#include <stdio.h>

int takeDamage(void) {
  int damage;
  printf("Enter Damage: ");
  scanf("%d", &damage);
  return damage;
}

int repairArmor(void) {
  int armor;
  printf("Enter Armor: ");
  scanf("%d", &armor);
  return armor;
}

int addCoins(void) {
  int coin;
  printf("Enter Coin: ");
  scanf("%d", &coin);
  return coin;
}

void showStats(int health, int armor, int coins) {
  printf("HEALTH: %d\nARMOR: %d\nCoins: %d\n", health, armor, coins);
}

int main(void) {
  int health = 100;
  int armor = 50;
  int coins = 30;
  int *p = NULL;
  int inp = -1;
  while (!(inp == 5)) {
    printf("\n\n-------Select The Process!-------\n\n1 - Take Damage\n2 - "
           "Repair Armor\n3 "
           "- Add "
           "Coins\n4 - Show Stats\n5 - Exit\n\nType: ");
    scanf("%d", &inp);

    if (inp == 1) {
      p = &health;
      *p = *p - takeDamage();
    } else if (inp == 2) {
      p = &armor;
      *p = *p + repairArmor();
    } else if (inp == 3) {
      p = &coins;
      *p = *p + addCoins();
    } else if (inp == 4) {
      showStats(health, armor, coins);
    } else if (inp == 5) {
      break;
    } else {
      printf("Error! Please Try Again!\n");
    }
  }

  p = NULL;
  return 0;
}