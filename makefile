src = complex_no.cpp complex_no.cpp
project = complex_no
complex_no: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: complex_no
	./$^
clean:
	rm *.out
