#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct st
{
        int roll;
        char name[20];
        float percentage;
        struct st *next;
}ST;

void stud_add(ST **);
void stud_del(ST **);
void stud_show(ST *);
void stud_mod(ST **);
void stud_save(ST *);
void stud_exit(ST *);
void stud_sort(ST *);
void delete_all(ST **);
void rev_list(ST **);


void show(ST *);
void menu_main(void);
void menu_del(void);
void menu_mod(void);
void menu_save(void);
void menu_sort(void);
void menu_exit(void);
void delete_roll(ST **);
void delete_name(ST **);
void mod_per(ST **);
void mod_roll(ST **);
void mod_name(ST **);
int node_count(ST *);
                       

                                

