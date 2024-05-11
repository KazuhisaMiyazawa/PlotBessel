DATAFILES:=$(wildcard data/*.txt)

.PHONY: all clean
all: main.pdf

main.pdf:src/main.tex $(DATAFILES)
	@cd src;lualatex main; cd ../; mv src/main.pdf ./
	
clean:
	@rm -f main.pdf src/main.log src/main.aux
