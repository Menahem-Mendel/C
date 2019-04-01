#define SIZE 100
#define NUMBER 0

// stack.cpp
extern double stack[];
extern int sp;

extern void push(double);
extern double pop();
extern double top();
extern void get_elemnts();
extern int clear();

// getop.cpp
extern int getop(char[]);

extern int getch();
extern void ungetch(int);

// menu.cpp
extern double writeIn();
