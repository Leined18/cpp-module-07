NAME=ex01
CXX=c++
CXXFLAGS=-I./inc -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRC_DIR = src
SRC_FILES = main.cpp
OBJ_DIR = obj
OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
TARGET = $(NAME)

# Colors
GREEN := \033[0;32m
YELLOW := \033[0;33m
RED := \033[0;31m
RESET := \033[0m

all: $(TARGET)

$(TARGET): $(OBJS)
	@printf "$(YELLOW)Linking $(TARGET)...$(RESET)\n"
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@printf "$(GREEN)Compiling $< -> $@$(RESET)\n"
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	@printf "$(RED)Removing $(OBJ_DIR)/ and object files...$(RESET)\n"
	rm -rf $(OBJ_DIR)

fclean: clean
	@printf "$(RED)Removing binary $(TARGET)...$(RESET)\n"
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re