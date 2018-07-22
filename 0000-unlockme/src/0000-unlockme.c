#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void print_intro();
void slow_type(const char *msg);
int check_password();
void print_flag();


// For maximum security
const char *the_password = "this_is_not_a_password";

const char *dialogs[3] = {
  "Hello.\nI have a flag for you...\n",
  "Unfortunately before I can give you it, you must give something to me.\n",
  "Do you have what I'm looking for?\n\n"
};

const useconds_t sleep_delay = 50000;  // 40ms

int main() {
    print_intro();
    if (check_password()) {
        slow_type("Good job. I believe this is what you came for:\n");
        print_flag();
        return 0;
    }
    slow_type("Hmm. I don't think this is what I was looking for.\n");
    slow_type("Take a look inside of me. rabin2 -z\n");
    return 1;
}

void print_intro() {
  setbuf(stdout, NULL);
  int count = sizeof(dialogs) / sizeof(dialogs[0]);
  for (int i = 0; i < count; i++) {
    slow_type(dialogs[i]);
  }
  sleep(1);
}

void slow_type(const char *msg) {
  for (int i = 0; msg[i] != '\0'; i++) {
    putchar(msg[i]);
    usleep(sleep_delay);
  }
}

int check_password() {
    char input_buffer[0xff];
    printf("> ");
    fgets(input_buffer, 0xff, stdin);
    input_buffer[strlen(input_buffer) - 1] = '\0';
    if (strcmp(input_buffer, the_password) == 0) {
      return 1;
    }
    return 0;
}

void print_flag() {
  char *no_rodata_flag = malloc(0xff);
  strcpy(no_rodata_flag, "flag{rabin2_is_ftw}");
  puts(no_rodata_flag);
  free(no_rodata_flag);
}
