.PHONY: all clean

all: mains maindloop maindrec

clean:
	rm -f *.o *.a *so *.gch mains maindloop maindrec 