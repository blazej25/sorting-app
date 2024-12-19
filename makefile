CXX = g++
CXXFLAGS = -g
TARGET = main
TARGET_DEL = main.exe

SRC_DIR := .
FUNC_DIR := functions
SORT_DIR := sorting_algorithms
BUILD_DIR := build

# Files
MAIN_SRC := $(SRC_DIR)/main.cpp
FUNC_SRCS := $(wildcard $(FUNC_DIR)/*.cpp)
SORT_SRCS := $(wildcard $(SORT_DIR)/*.cpp)
SRCS := $(MAIN_SRC) $(FUNC_SRCS) $(SORT_SRCS)

# Object files
OBJS := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# Executable
TARGET := app

# Create the build directory if not exists
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link all object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Clean the build directory and executable
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Build
.PHONY: all
all: $(TARGET)

.PHONY: run
run: clean all
	clear
	@echo "Executing"
	./app