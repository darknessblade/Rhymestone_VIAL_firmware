MOUSEKEY_ENABLE = yes       # Mouse keys

RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
LTO_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes 

# If you want to change the display of OLED, you need to change here
SRC +=  ./common/oled_helper.c \