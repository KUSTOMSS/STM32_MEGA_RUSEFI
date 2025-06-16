BOARDCPPSRC =  $(BOARD_DIR)/board_configuration.cpp

# defines SHORT_BOARD_NAME
include $(BOARD_DIR)/meta-info.env

# reduce memory usage monitoring
DDEFS += -DRAM_UNUSED_SIZE=100

DDEFS += -DSTM32F407xx
DDEFS += -DEFI_MAX_31855=TRUE
DDEFS += -DHAL_TRIGGER_USE_PAL=TRUE

# DDEFS += -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::I15
