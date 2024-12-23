BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp \
    $(BOARD_DIR)/default_tune.cpp \


BOARDINC += $(BOARD_DIR)/generated/controllers/generated

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

DDEFS += -DSTM32F407xx
DDEFS += -DEFI_MAX_31855=TRUE
DDEFS += -DHAL_TRIGGER_USE_PAL=TRUE

# assign critical LED to a non-existent pin if you do not have it on your board
# good old PD14 is still the default value
# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15
