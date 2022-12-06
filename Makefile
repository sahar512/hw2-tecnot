CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=mylib.o
FLAGS= -Wall -g

.PHONY: all clean

 all: mains maindloop maindrec
 all: libNumClass.gch libNumClass.a mains maindloop maindrec 
 maindloop:$(OBJECTS_MAIN) libNumClass.a 
          &(CC) $(FLAGS)-o maindloop $(OBJECTS_MAIN) libNumClass.a
maindrec: $(OBJECTS_MAIN) 
         $(CC) $(FLAGS)-o maindrec $(OBJECTS_MAIN)./libNumClass.gch
libNumClass.gch: $(OBJECTS_LIB)
		        $(CC)-shared-o libNumClass.gch $(OBJECTS_LIB)
libNumClass.a: $(OBJECTS_LIB)
 			   $(AR) -rcs libNumClass.a $(OBJECTS_LIB)
NumClass.o: advancedClassificationalLoop.c NumClass.h 
 			   $(CC) $(FLAGS) -c advancedClassificationalLoop.c 	
NumClass.o: advancedClassificationalRecursion.c NumClass.h 
 			   $(CC) $(FLAGS) -c advancedClassificationalRecursion.c
NumClass.o: basicClassification.c NumClass.h 
 			   $(CC) $(FLAGS) -c basicClassification.c 	
main.o: main.c NumClass.h	
		 $(CC) $(FLAGS) -c main.c   		    			   

clean:
	rm -f *.o *.a *so *.gch mains maindloop maindrec  
	