default: wochentage

wochentage.o: wochentage.c
	gcc -c wochentage.c -o wochentage.o

wochentage: wochentage.o
	gcc wochentage.o -o wochentage

clean:
	-rm -f wochentage.o
	-rm -f wochentage
