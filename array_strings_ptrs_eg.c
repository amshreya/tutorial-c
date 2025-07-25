 #include <stdio.h>
 int main(void)
 {
  const char *rank_code[] = {
    "two", "three", "four", "five", "six", "seven",
    "eight", "nine", "ten", "jack", "queen", "king", "ace"
  };
/*  const char rank_code_names[] = {
    "two", "three", "four", "five", "six", "seven",
    "eight", "nine", "ten", "jack", "queen", "king", "ace"
  };*/ //does not work

  const char *suit_code[] = {
    "clubs", "diamonds", "hearts", "spades"
  };
 printf("%s\n", rank_code);
 printf("%s\n", rank_code[0]);
 printf("%s\n", *rank_code);
 printf("%s\n", *rank_code+1);
 printf("%s\n", rank_code[1]);
 printf("%s\n", *(rank_code +1));

  return 0;
 }