all:
	gcc workspace.c -o workspace
	gcc -S workspace.c -o workspace.asm
clean:
	rm workspace
	rm workspace.asm
