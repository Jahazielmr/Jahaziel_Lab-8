Main: Main.o Binario.o 	

	g++ Main.o Binario.o 
 
Main.o: Main.cpp Binario.h 
	g++ -c Main.cpp 
 
Binario.o:  Binario.h Binario.cpp
	g++ -c Binario.cpp
 
clean: 
	rm -f *.0 *.main
