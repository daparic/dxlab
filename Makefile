
demo: demo.c
	gcc -O2 -msse -o demo demo.c

clean:
	@rm -f demo

.PHONY: clean
