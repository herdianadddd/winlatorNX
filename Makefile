TARGET := winlator-switch

BUILD := build

SOURCES := source

INCLUDES := include

ROMFS := romfs


CFLAGS :=
CXXFLAGS := -std=c++17

LIBS := \
-lSDL2 \
-lnx


include $(DEVKITPRO)/libnx/switch_rules


all:
	mkdir -p $(BUILD)
	$(MAKE) -f $(DEVKITPRO)/libnx/switch_rules.mk


clean:
	rm -rf $(BUILD)
