#define NAME_LENGTH 40

struct pinball_machine {
    char name[NAME_LENGTH + 1];
    int year;
    enum { EM, SS } type;
    int players;
};
