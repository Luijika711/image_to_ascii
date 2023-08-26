# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Directories
SRC_DIR = ../image_to_ascii/src
BUILD_DIR = build
TARGET = image_to_ascii

# Files
SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp

OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

.PHONY: all clean

all: $(TARGET)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
