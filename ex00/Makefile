NAME = ex00
CXX = c++
CXXFLAGS = -I./inc -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC_DIR = src
SRC_FILES = main.cpp
OBJ_DIR = obj
OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))

# Colors
GREEN := \033[0;32m
YELLOW := \033[0;33m
RED := \033[0;31m
RESET := \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(YELLOW)Linking $(NAME)...$(RESET)\n"
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	@printf "$(GREEN)Compiling $< -> $@$(RESET)\n"
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	@printf "$(RED)Removing $(OBJ_DIR)/ and object files...$(RESET)\n"
	rm -rf $(OBJ_DIR)

fclean: clean
	@printf "$(RED)Removing binary $(NAME)...$(RESET)\n"
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re