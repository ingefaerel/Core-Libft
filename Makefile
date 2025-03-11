NAME = libft.a
SRC_DIR = srcs
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)

TEST_DIR = tests
TEST_SRC = $(wildcard $(TEST_DIR)/*.c)
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_EXEC = test_exec

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c
	$(CC) $(CFLAGS) -I$(SRC_DIR) -c $< -o $@

test: $(TEST_OBJ) $(NAME)
	$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_OBJ) -L. -lft
	./$(TEST_EXEC)

clean:
	$(RM) $(OBJ)
	$(RM) $(TEST_OBJ)
	$(RM) $(TEST_EXEC)

fclean: clean
	$(RM) $(NAME)

re: fclean all