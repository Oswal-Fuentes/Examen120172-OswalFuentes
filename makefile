Examen_Progra: Examen120172-OswalFuentes.o obras.o literatura.o esculturas.o pinturas.o disenos.o
	g++ Examen120172-OswalFuentes.o obras.o literatura.o esculturas.o pinturas.o disenos.o -o main

main.o: Examen120172.cpp obras.h literatura.h esculturas.h pinturas.h disenos.h
	g++ -c Examen120172.cpp

obras.o: obras.cpp obras.h
	g++ -c obras.cpp

literatura.o: literatura.cpp literatura.h obras.h
	g++ -c literatura.cpp

esculturas.o: esculturas.cpp esculturas.h obras.h
	g++ -c esculturas.cpp

pinturas.o: pinturas.cpp pinturas.h obras.h
	g++ -c pinturas.cpp

diseno.o: diseno.cpp diseno.h obras.h
	g++ -c diseno.cpp

clean:
	rm -f *.o *.main

