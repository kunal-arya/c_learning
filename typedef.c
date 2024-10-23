#include <stdio.h>
#include <string.h>

typedef char user[25];

struct UserInfo {
    char name[25];
    char password[12];
    int id;
};

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {
    // typedef = reserved keyword that gives an existing datatype a "Nickname"

    char user1[25] = "Bro";

    user user2 = "Kunal";

    struct UserInfo user3 = {"Kunal","superSecret",123456}; // without
    User user4 = {"Bro","1234Super",123456}; // with typedef

    printf("%s \n",user3.name);
    printf("%d \n",user4.id);

    return 0;
}