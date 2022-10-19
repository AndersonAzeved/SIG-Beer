run: all
	./SIG-Beer

all:
	gcc -c -Wall modulos/assinatura.c; 
	gcc -c -Wall modulos/biblioteca.c; 
	gcc -c -Wall modulos/cerveja.c; 
	gcc -c -Wall modulos/fornecedor.c; 
	gcc -c -Wall modulos/principal.c; 
	gcc -c -Wall modulos/relatorio.c;
	gcc -c -Wall main.c;
	gcc -o SIG-Beer *.o;

clean:
	rm./*.o