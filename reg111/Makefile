TOPNAME = reg_top
NXDC_FILES = constr/reg_top.nxdc
INC_PATH ?=
GTKWAVE = gtkwave

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

VERILATOR_ARGUMENTS += --cc --build
VERILATOR_ARGUMENTS += --Wall 
VERILATOR_ARGUMENTS += --exe
VERILATOR_ARGUMENTS += --trace
VERILATOR_TOP += --top-module $(TOPNAME) 

VERILATOR_INPUT += vsrc/*.v
VERILATOR_INPUT += csrc/*_ver.cpp

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*nvb.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	@$^

sim: $(BIN)
	@$^
	
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	# @echo "make sim"

ver:
	@echo
	@echo "----------Switch Exercise----------"
	@echo
	@echo "----------Verilator Compile--------"
	$(VERILATOR) $(VERILATOR_TOP) $(VERILATOR_ARGUMENTS) $(VERILATOR_INPUT)
	@echo
	@echo "----------Generating Wavefrom------"
	@rm -rf logs
	obj_dir/V$(TOPNAME) +trace
	@echo
	@echo "----------Done---------------------"
	@echo "You can make GTKwave to see the wavefroms." 

wave:
	@echo "Opening dump.vcd"
	$(GTKWAVE) $(TOPNAME).vcd

test:
	@echo "TOPNAME: $(TOPNAME)"
	@echo "VERILATOR_CC: $(VERILATOR_CC)"
	@echo "VERILATOR_BUILD: $(VERILATOR_BUILD)"
	@echo "VERILATOR_CFLAGS: $(VERILATOR_CFLAGS)"		

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run
