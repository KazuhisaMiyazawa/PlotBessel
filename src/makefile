.PHONY: all clean
all: main.pdf 

main.pdf:main.tex ../data/MAIN
	@lualatex main
	
data.txt: 
	@./../data/MAIN
	
clean:
	@rm -f main.pdf main.log main.aux
