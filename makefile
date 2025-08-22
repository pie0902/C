CC = gcc
SRC_DIR = src
BUILD_DIR = build

SRCS = $(wildcard $(SRC_DIR)/*.c)
TARGETS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SRCS))

all: $(TARGETS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) -g $< -o $@

clean:
	rm -rf $(BUILD_DIR)
	rm -rf $(SRC_DIR)/*.dSYM
