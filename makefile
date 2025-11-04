student: main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_exit.o stud_sort.o delete_all.o rev_all.o menu.o
        cc  main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_exit.o stud_sort.o delete_all.o rev_all.o menu.o -o student

main.o: main.c 
        cc -c main.c
stud_add.o: stud_add.c header.h
        cc -c stud_add.c
stud_del.o: stud_del.c header.h
        cc -c stud_del.c
stud_show.o: stud_show.c header.h
        cc -c stud_show.c
stud_mod.o: stud_mod.c header.h
        cc -c stud_mod.c
stud_save.o: stud_save.c header.h
        cc -c stud_save.c
stud_exit.o: stud_exit.c header.h
        cc -c stud_exit.c
stud_sort.o: stud_sort.c header.h
        cc -c stud_sort.c
delete_all.o: delete_all.c header.h
        cc -c delete_all.c
rev_all.o: rev_all.c header.h
        cc -c rev_all.c
menu.o: menu.c header.h
        cc -c menu.c

