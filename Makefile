build:
	@javac java/bench.java -d ./bin
	@gcc   c/bench.c -o ./bin/bench
bench:
	@echo "---Javascript---"
	@node  javascript/bench.js
	@echo "------Java------"
	@(cd bin && java Bench)
	@echo "-------C--------"
	@./bin/bench
clean:
	rm ./bin/*
