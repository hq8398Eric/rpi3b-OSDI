#ifndef HELPER_H
#define HELPER_H

void hex_to_string(unsigned int, char*);
int same(char*, char*);

void substr(char*, char*, int, int);
int strlen(char*);
void strcpy(char*, char*, int);
void strcpy_to0(char*, char*);

unsigned long stoi(char*);
void delay (unsigned long long);

void memset(char*, char, int);

#endif