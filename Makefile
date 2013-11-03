run: clean build bench
	@echo "Bench complete"
rebuild: clean build
	@echo "Build complete"
build:
	@echo "Building"
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
	@echo "Cleaning"
	@touch ./bin/tmp
	@rm ./bin/*
