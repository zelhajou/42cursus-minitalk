# Compiler and compiling flags
CC = cc
CFLAGS = 

# Project name for the binaries
NAME_CLIENT = client
NAME_SERVER = server

# Directories
SRC_DIR = src
OBJ_DIR = obj
LIB_DIR = lib/libft
INC_DIR = include

# Source files and object files
SRC_CLIENT = $(SRC_DIR)/client/client.c $(SRC_DIR)/client/client_utils.c $(SRC_DIR)/common/utils.c
SRC_SERVER = $(SRC_DIR)/server/server.c $(SRC_DIR)/server/server_utils.c $(SRC_DIR)/common/utils.c
OBJ_CLIENT = $(SRC_CLIENT:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJ_SERVER = $(SRC_SERVER:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Libft
LIBFT = $(LIB_DIR)/libft.a
LIBFT_FLAGS = -L$(LIB_DIR) -lft

# Header files
HEADERS = -I$(INC_DIR) -I$(LIB_DIR)

# Rules
all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(LIBFT) $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(HEADERS) $(LIBFT_FLAGS) -o $(NAME_CLIENT)

$(NAME_SERVER): $(LIBFT) $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(HEADERS) $(LIBFT_FLAGS) -o $(NAME_SERVER)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIB_DIR)

clean:
	$(MAKE) -C $(LIB_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIB_DIR) fclean
	rm -f $(NAME_CLIENT)
	rm -f $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re
