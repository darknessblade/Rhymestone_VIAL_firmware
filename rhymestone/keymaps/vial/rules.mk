BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
LTO_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = no

# link time optimization to reduce firmware size
LTO_ENABLE = yes

# https://docs.qmk.fm/#/feature_grave_esc
# Combine esc, ~, ` to one key.
# - Esc as normal
# hold shift will output tilde ~
# hold win/command key will output backtick `
# Disabling it frees 140 b
GRAVE_ESC_ENABLE = no

# N-key rollover
# capable of reporting any number of key-presses at once rather than 6 keys by default
# Disabling it frees 360 bytes
NKRO_ENABLE = yes

# Audio control and System control
# Disabling it frees 380 bytes
EXTRAKEY_ENABLE = yes

# https://docs.qmk.fm/#/feature_space_cadet
# Combine ctrl/shift/alt and () to one key, e.g., Left Shift when held, ( when tapped
# Disabling it frees 380 bytes
SPACE_CADET_ENABLE = no

# https://docs.qmk.fm/#/keycodes_magic
# Disabling it frees 630 bytes
MAGIC_ENABLE = no

# https://docs.qmk.fm/#/feature_mouse_keys
# Mouse keys
# Disabling it frees 1350 bytes
MOUSEKEY_ENABLE = yes

# https://docs.qmk.fm/#/feature_tap_dance
# allow one key to have 4 functions, e.g.,
# - tap sends X,
# - hold sends CTRL,
# - double tap sends Esc,
# - tap+hold sends Alt"
# Disabling it frees 2000 bytes
TAP_DANCE_ENABLE = no

# https://docs.qmk.fm/#/feature_combo
# E.g. tap D and F within 500ms will give Esc
# Disabling it frees 2500 bytes
COMBO_ENABLE = no


# Configure more QMK setting.
# E.g. press a key longer than 200ms by default is treated as a hold action. We can change it to 500ms.
# You can enable auto shift feature. E.g. press 2 longer than 200ms gives @
# Enable it and go to Vial to see more features
# Disabling it frees 3300 bytes
QMK_SETTINGS = no


# If you want to change the display of OLED, you need to change here
SRC +=  ./common/oled_helper.c \
