CFLAGS += -Wall -Wextra -Werror

INCLUDE_DIRS += -I../ -I../../../

LIBS += -L../../../ -lft -lm

# Os-specific settings
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	LIBS += -lrt
endif

minunit: ../minunit.c ../minunit.h
	$(CC) $(CFLAGS) $(INCLUDE_DIRS) $(LIBS) $< -o $@

