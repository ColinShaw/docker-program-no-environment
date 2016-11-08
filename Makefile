test:
	gcc -o test test.c -static -nostartfiles
	docker build -t test:latest .
	docker run -it test

clean:
	rm -f test
	docker rmi --force test:latest
