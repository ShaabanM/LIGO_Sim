
# Makefile for automated build
# zh3X4dJqkR

# This make file can be made more efficent for checking for headers sepratrely 
# However with this program such a modification I belive is an unnecessary complication

# Define Compiler
CXX = g++

# Define useful shortcuts to access all cc files and o files
CXXSRC = $(shell ls *.cc) # list of all the source code files
CXXOBJ = $(CXXSRC:.cc=.o) # list of files with same name as source but .o extention
CXXFLAGS = -std=c++11 -O3 
CXXLIBS = -lnetcdf_c++4 -I${BLASINC} -L${BLASLIB} -lopenblas

# dependency exe
all: exe

# creat executable if object files exist
exe: $(CXXOBJ)
	$(CXX) $(CXXOBJ) -o ligo_sim $(CXXLIBS)

# create object files
.cc.o: 
	$(CXX) $(CXXFLAGS) -c $< 

	
# remove all object files and executable
.PHONY: clean
clean:
	rm -f *.o 
	rm ligo_sim

