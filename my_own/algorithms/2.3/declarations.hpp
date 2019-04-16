#define SIZE 100
#define NUMBER '0'

// stack.cpp
extern double stack[];
extern int sp;

void push(double);
double pop();
double top();
void get_elemnts();
int clear();
int get_sp();

// getop.cpp
extern char buffer[];
extern int bp;

int getop(char);
int getch();
void ungetch(int);

// menu.cpp
double equation(char[]);
