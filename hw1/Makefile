# Build options
CXX=g++
CXXFLAGS=-g

# Targets

BIN=companydb

companydb: main.o person.o #company.o customer.o employee.o purchase.o
	$(CXX) $(CXXFLAGS) -o $@ $^

# Meta-target
clean:
	rm -f $(BIN) *.o