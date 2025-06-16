# List of all the board related files.
BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# Override DEFAULT_ENGINE_TYPE
DDEFS += -DSTM32F407xx
DDEFS += -DEFI_MAX_31855=TRUE
DDEFS += -DHAL_TRIGGER_USE_PAL=TRUE

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

# Not use critical LED
DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::Unassigned

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15
