CC=gcc
AR=ar
# OBJECT_MAIN=main.o
# OBJECT_LIB=NumClass.o
FLAGS= -Wall -g   

all: loopd recursived loops recursives  mains maindloop maindrec 
 

mains: main.o libclassrec.a #make mains
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop:main.o  #make maindloop
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec:main.o #make maindrec
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

 
loopd: libclassloops.so
recursived: libclassrec.so
loops: libclassloops.a
recursives: libclassrec.a
 

libclassrec.so: basicClassification.o advancedClassificationRecursion.o     #make recursived
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o


libclassloops.so: basicClassification.o advancedClassificationLoop.o #make loopd
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o



libclassloops.a: basicClassification.o advancedClassificationLoop.o #make loop
	$(AR) -rcs -o libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o 	#make recursives
	$(AR) -rcs -o 	libclassrec.a  basicClassification.o advancedClassificationRecursion.o								



basicClassification.o : basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 	


advancedClassificationLoop.o : advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c


advancedClassificationRecursion.o : advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c


main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c   
	
.PHONY: clean all

clean:
		rm -f *.o *.a *.so   mains maindloop maindrec