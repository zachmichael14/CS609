# Build options
CXX=g++
CXXFLAGS=-g

# Targets

BIN=companydb

companydb: main.o person.o purchase.o #company.o customer.o employee.o
	$(CXX) $(CXXFLAGS) -o $@ $^

# Meta-target
clean:
	rm -f $(BIN) *.o