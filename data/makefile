FLAGS=-Wall -lgsl -lgslcblas
OUT=zeroth.txt

MAIN: main.c
	@gcc $(FLAGS) $< -o $@ 
	
.PHONY:clean
clean:
	@rm -f MAIN
